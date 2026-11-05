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

// Function: sub_00234668
// Address: 0x234668 - 0x2346f0
void sub_00234668_0x234668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234668_0x234668");
#endif

    switch (ctx->pc) {
        case 0x2346a4u: goto label_2346a4;
        case 0x2346b4u: goto label_2346b4;
        case 0x2346d8u: goto label_2346d8;
        default: break;
    }

    ctx->pc = 0x234668u;

    // 0x234668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23466c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23467c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x23467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x234680: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x234680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x234684: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x234684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x234688: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234688u;
    {
        const bool branch_taken_0x234688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234688u;
        // 0x23468c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234688) {
            ctx->pc = 0x2346ACu;
            goto label_2346ac;
        }
    }
    ctx->pc = 0x234690u;
    // 0x234690: 0x8e02074c  lw          $v0, 0x74C($s0)
    ctx->pc = 0x234690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x234694: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234694u;
    {
        const bool branch_taken_0x234694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234694) {
            ctx->pc = 0x2346ACu;
            goto label_2346ac;
        }
    }
    ctx->pc = 0x23469Cu;
    // 0x23469c: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x23469Cu;
    SET_GPR_U32(ctx, 31, 0x2346A4u);
    ctx->pc = 0x2346A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23469Cu;
    // 0x2346a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x23469Cu, 0x2346A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346A4u;
label_2346a4:
    // 0x2346a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2346A4u;
    {
        const bool branch_taken_0x2346a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346A4u;
        // 0x2346a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346a4) {
            ctx->pc = 0x2346DCu;
            goto label_2346dc;
        }
    }
    ctx->pc = 0x2346ACu;
label_2346ac:
    // 0x2346ac: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x2346ACu;
    SET_GPR_U32(ctx, 31, 0x2346B4u);
    ctx->pc = 0x2346B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346ACu;
    // 0x2346b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2346ACu, 0x2346B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346B4u;
label_2346b4:
    // 0x2346b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2346B4u;
    {
        const bool branch_taken_0x2346b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2346b4) {
            ctx->pc = 0x2346C8u;
            goto label_2346c8;
        }
    }
    ctx->pc = 0x2346BCu;
    // 0x2346bc: 0x8e02074c  lw          $v0, 0x74C($s0)
    ctx->pc = 0x2346bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x2346c0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2346c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2346c4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2346c4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2346c8:
    // 0x2346c8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2346C8u;
    {
        const bool branch_taken_0x2346c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346C8u;
        // 0x2346cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346c8) {
            ctx->pc = 0x2346D8u;
            goto label_2346d8;
        }
    }
    ctx->pc = 0x2346D0u;
    // 0x2346d0: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x2346D0u;
    SET_GPR_U32(ctx, 31, 0x2346D8u);
    ctx->pc = 0x2346D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346D0u;
    // 0x2346d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x2346D0u, 0x2346D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346D8u;
label_2346d8:
    // 0x2346d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2346d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2346dc:
    // 0x2346dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2346dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2346e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2346e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2346e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2346E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2346E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E4u;
        // 0x2346e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2346E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2346ECu;
    // 0x2346ec: 0x0  nop
    ctx->pc = 0x2346ecu;
    // NOP
    ctx->pc = 0x2346f0u;
}
