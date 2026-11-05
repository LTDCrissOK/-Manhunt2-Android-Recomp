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

// Function: sub_00278C08
// Address: 0x278c08 - 0x278ca8
void sub_00278C08_0x278c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278C08_0x278c08");
#endif

    switch (ctx->pc) {
        case 0x278c2cu: goto label_278c2c;
        case 0x278c40u: goto label_278c40;
        case 0x278c84u: goto label_278c84;
        default: break;
    }

    ctx->pc = 0x278c08u;

    // 0x278c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278c18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278c1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x278c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x278c20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x278c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c24: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x278C24u;
    SET_GPR_U32(ctx, 31, 0x278C2Cu);
    ctx->pc = 0x278C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C24u;
    // 0x278c28: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x278C24u, 0x278C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C2Cu;
label_278c2c:
    // 0x278c2c: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278c30: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278c34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278C34u;
    {
        const bool branch_taken_0x278c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C34u;
        // 0x278c38: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c34) {
            ctx->pc = 0x278C4Cu;
            goto label_278c4c;
        }
    }
    ctx->pc = 0x278C3Cu;
    // 0x278c3c: 0x0  nop
    ctx->pc = 0x278c3cu;
    // NOP
label_278c40:
    // 0x278c40: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278c48: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_278c4c:
    // 0x278c4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x278c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x278c50: 0x80440004  lb          $a0, 0x4($v0)
    ctx->pc = 0x278c50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278c54: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x278C54u;
    {
        const bool branch_taken_0x278c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278c54) {
            ctx->pc = 0x278C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278C54u;
            // 0x278c58: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278c40;
        }
    }
    ctx->pc = 0x278C5Cu;
    // 0x278c5c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278c60: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278C60u;
    {
        const bool branch_taken_0x278c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x278c60) {
            ctx->pc = 0x278C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278C60u;
            // 0x278c64: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278c40;
        }
    }
    ctx->pc = 0x278C68u;
    // 0x278c68: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278c6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x278c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x278c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c74: 0x24a58460  addiu       $a1, $a1, -0x7BA0
    ctx->pc = 0x278c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935648));
    // 0x278c78: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x278c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x278c7c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x278C7Cu;
    SET_GPR_U32(ctx, 31, 0x278C84u);
    ctx->pc = 0x278C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C7Cu;
    // 0x278c80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x278C7Cu, 0x278C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C84u;
label_278c84:
    // 0x278c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278c8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278c90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x278c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278c94: 0x3e00008  jr          $ra
    ctx->pc = 0x278C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C94u;
        // 0x278c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278C9Cu;
    // 0x278c9c: 0x0  nop
    ctx->pc = 0x278c9cu;
    // NOP
    // 0x278ca0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x278ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278ca4: 0x0  nop
    ctx->pc = 0x278ca4u;
    // NOP
    ctx->pc = 0x278ca8u;
}
