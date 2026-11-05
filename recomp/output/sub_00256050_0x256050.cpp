#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00256050
// Address: 0x256050 - 0x2560c8
void sub_00256050_0x256050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256050_0x256050");
#endif

    switch (ctx->pc) {
        case 0x256050u: goto label_256050;
        case 0x256054u: goto label_256054;
        case 0x256058u: goto label_256058;
        case 0x25605cu: goto label_25605c;
        case 0x256060u: goto label_256060;
        case 0x256064u: goto label_256064;
        case 0x256068u: goto label_256068;
        case 0x25606cu: goto label_25606c;
        case 0x256070u: goto label_256070;
        case 0x256074u: goto label_256074;
        case 0x256078u: goto label_256078;
        case 0x25607cu: goto label_25607c;
        case 0x256080u: goto label_256080;
        case 0x256084u: goto label_256084;
        case 0x256088u: goto label_256088;
        case 0x25608cu: goto label_25608c;
        case 0x256090u: goto label_256090;
        case 0x256094u: goto label_256094;
        case 0x256098u: goto label_256098;
        case 0x25609cu: goto label_25609c;
        case 0x2560a0u: goto label_2560a0;
        case 0x2560a4u: goto label_2560a4;
        case 0x2560a8u: goto label_2560a8;
        case 0x2560acu: goto label_2560ac;
        case 0x2560b0u: goto label_2560b0;
        case 0x2560b4u: goto label_2560b4;
        case 0x2560b8u: goto label_2560b8;
        case 0x2560bcu: goto label_2560bc;
        case 0x2560c0u: goto label_2560c0;
        case 0x2560c4u: goto label_2560c4;
        default: break;
    }

    ctx->pc = 0x256050u;

label_256050:
    // 0x256050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_256054:
    // 0x256054: 0x2405080d  addiu       $a1, $zero, 0x80D
    ctx->pc = 0x256054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_256058:
    // 0x256058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_25605c:
    // 0x25605c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_256060:
    // 0x256060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256064:
    // 0x256064: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x256064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_256068:
    // 0x256068: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x256068u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_25606c:
    // 0x25606c: 0xc06974a  jal         func_1A5D28
label_256070:
    if (ctx->pc == 0x256070u) {
        ctx->pc = 0x256070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25606Cu;
        // 0x256070: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256074u;
        goto label_256074;
    }
    ctx->pc = 0x25606Cu;
    SET_GPR_U32(ctx, 31, 0x256074u);
    ctx->pc = 0x256070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25606Cu;
    // 0x256070: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x25606Cu, 0x256074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256074u;
label_256074:
    // 0x256074: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x256074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_256078:
    // 0x256078: 0xc06a05e  jal         func_1A8178
label_25607c:
    if (ctx->pc == 0x25607Cu) {
        ctx->pc = 0x25607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256078u;
        // 0x25607c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256080u;
        goto label_256080;
    }
    ctx->pc = 0x256078u;
    SET_GPR_U32(ctx, 31, 0x256080u);
    ctx->pc = 0x25607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256078u;
    // 0x25607c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x256078u, 0x256080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256080u;
label_256080:
    // 0x256080: 0xc06cdb4  jal         func_1B36D0
label_256084:
    if (ctx->pc == 0x256084u) {
        ctx->pc = 0x256084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256080u;
        // 0x256084: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256088u;
        goto label_256088;
    }
    ctx->pc = 0x256080u;
    SET_GPR_U32(ctx, 31, 0x256088u);
    ctx->pc = 0x256084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256080u;
    // 0x256084: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x256080u, 0x256088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256088u;
label_256088:
    // 0x256088: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x256088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_25608c:
    // 0x25608c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25608cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_256090:
    // 0x256090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256094:
    // 0x256094: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x256094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_256098:
    // 0x256098: 0x40f809  jalr        $v0
label_25609c:
    if (ctx->pc == 0x25609Cu) {
        ctx->pc = 0x25609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256098u;
        // 0x25609c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2560A0u;
        goto label_2560a0;
    }
    ctx->pc = 0x256098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2560A0u);
        ctx->pc = 0x25609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256098u;
        // 0x25609c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256098u, 0x2560A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2560A0u;
label_2560a0:
    // 0x2560a0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2560a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2560a4:
    // 0x2560a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2560a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2560a8:
    // 0x2560a8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2560a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2560ac:
    // 0x2560ac: 0xc094ec2  jal         func_253B08
label_2560b0:
    if (ctx->pc == 0x2560B0u) {
        ctx->pc = 0x2560B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560ACu;
        // 0x2560b0: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2560B4u;
        goto label_2560b4;
    }
    ctx->pc = 0x2560ACu;
    SET_GPR_U32(ctx, 31, 0x2560B4u);
    ctx->pc = 0x2560B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2560ACu;
    // 0x2560b0: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B08u, 0x2560ACu, 0x2560B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560B4u;
label_2560b4:
    // 0x2560b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2560b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2560b8:
    // 0x2560b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2560b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2560bc:
    // 0x2560bc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2560bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2560c0:
    // 0x2560c0: 0x3e00008  jr          $ra
label_2560c4:
    if (ctx->pc == 0x2560C4u) {
        ctx->pc = 0x2560C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560C0u;
        // 0x2560c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2560C8u;
        goto label_fallthrough_0x2560c0;
    }
    ctx->pc = 0x2560C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2560C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2560C0u;
        // 0x2560c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2560C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2560c0:
    ctx->pc = 0x2560C8u;
}
