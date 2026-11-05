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

// Function: sub_001C35B8
// Address: 0x1c35b8 - 0x1c3648
void sub_001C35B8_0x1c35b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C35B8_0x1c35b8");
#endif

    switch (ctx->pc) {
        case 0x1c361cu: goto label_1c361c;
        case 0x1c3628u: goto label_1c3628;
        default: break;
    }

    ctx->pc = 0x1c35b8u;

    // 0x1c35b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c35b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c35bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c35bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c35c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c35c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c35c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c35c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c35c8: 0x8cb10fe8  lw          $s1, 0xFE8($a1)
    ctx->pc = 0x1c35c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4072)));
    // 0x1c35cc: 0x262300d0  addiu       $v1, $s1, 0xD0
    ctx->pc = 0x1c35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x1c35d0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1c35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c35d4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1c35d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1c35d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C35D8u;
    {
        const bool branch_taken_0x1c35d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35D8u;
        // 0x1c35dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35d8) {
            ctx->pc = 0x1C35E4u;
            goto label_1c35e4;
        }
    }
    ctx->pc = 0x1C35E0u;
    // 0x1c35e0: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1c35e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1c35e4:
    // 0x1c35e4: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x1c35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1c35e8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1c35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c35ec: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1c35ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1c35f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C35F0u;
    {
        const bool branch_taken_0x1c35f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35F0u;
        // 0x1c35f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35f0) {
            ctx->pc = 0x1C35FCu;
            goto label_1c35fc;
        }
    }
    ctx->pc = 0x1C35F8u;
    // 0x1c35f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1c35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1c35fc:
    // 0x1c35fc: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C35FCu;
    {
        const bool branch_taken_0x1c35fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35FCu;
        // 0x1c3600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35fc) {
            ctx->pc = 0x1C3630u;
            goto label_1c3630;
        }
    }
    ctx->pc = 0x1C3604u;
    // 0x1c3604: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1c3604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1c3608: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1c3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1c360c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C360Cu;
    {
        const bool branch_taken_0x1c360c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c360c) {
            ctx->pc = 0x1C3610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C360Cu;
            // 0x1c3610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3630u;
            goto label_1c3630;
        }
    }
    ctx->pc = 0x1C3614u;
    // 0x1c3614: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C3614u;
    SET_GPR_U32(ctx, 31, 0x1C361Cu);
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C3614u, 0x1C361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C361Cu;
label_1c361c:
    // 0x1c361c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c361cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3620: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C3620u;
    SET_GPR_U32(ctx, 31, 0x1C3628u);
    ctx->pc = 0x1C3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3620u;
    // 0x1c3624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C3620u, 0x1C3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3628u;
label_1c3628:
    // 0x1c3628: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x1c3628u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1c362c: 0x2e020001  sltiu       $v0, $s0, 0x1
    ctx->pc = 0x1c362cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c3630:
    // 0x1c3630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c363c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C363Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C363Cu;
        // 0x1c3640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C363Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3644u;
    // 0x1c3644: 0x0  nop
    ctx->pc = 0x1c3644u;
    // NOP
    ctx->pc = 0x1c3648u;
}
