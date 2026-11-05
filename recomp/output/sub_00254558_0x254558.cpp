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

// Function: sub_00254558
// Address: 0x254558 - 0x2545e0
void sub_00254558_0x254558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254558_0x254558");
#endif

    switch (ctx->pc) {
        case 0x254590u: goto label_254590;
        case 0x2545b0u: goto label_2545b0;
        case 0x2545b8u: goto label_2545b8;
        default: break;
    }

    ctx->pc = 0x254558u;

    // 0x254558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25455c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254560: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x254560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x254564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254568: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x254568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25456c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25456cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254574: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x254574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x254578: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x254578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x25457c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25457Cu;
    {
        const bool branch_taken_0x25457c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25457Cu;
        // 0x254580: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25457c) {
            ctx->pc = 0x2545C0u;
            goto label_2545c0;
        }
    }
    ctx->pc = 0x254584u;
    // 0x254584: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x254584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x254588: 0xc0944da  jal         func_251368
    ctx->pc = 0x254588u;
    SET_GPR_U32(ctx, 31, 0x254590u);
    ctx->pc = 0x25458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254588u;
    // 0x25458c: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x254588u, 0x254590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254590u;
label_254590:
    // 0x254590: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x254594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254598: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25459c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25459cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2545a0: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x2545a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x2545a4: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x2545a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x2545a8: 0xc061b72  jal         func_186DC8
    ctx->pc = 0x2545A8u;
    SET_GPR_U32(ctx, 31, 0x2545B0u);
    ctx->pc = 0x2545ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2545A8u;
    // 0x2545ac: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186DC8u, 0x2545A8u, 0x2545B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545B0u;
label_2545b0:
    // 0x2545b0: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x2545B0u;
    SET_GPR_U32(ctx, 31, 0x2545B8u);
    ctx->pc = 0x2545B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2545B0u;
    // 0x2545b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x2545B0u, 0x2545B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545B8u;
label_2545b8:
    // 0x2545b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2545B8u;
    {
        const bool branch_taken_0x2545b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545B8u;
        // 0x2545bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545b8) {
            ctx->pc = 0x2545C4u;
            goto label_2545c4;
        }
    }
    ctx->pc = 0x2545C0u;
label_2545c0:
    // 0x2545c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2545c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2545c4:
    // 0x2545c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2545c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2545c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2545c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2545cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2545ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2545d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2545d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2545D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2545D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545D4u;
        // 0x2545d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2545D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2545DCu;
    // 0x2545dc: 0x0  nop
    ctx->pc = 0x2545dcu;
    // NOP
    ctx->pc = 0x2545e0u;
}
