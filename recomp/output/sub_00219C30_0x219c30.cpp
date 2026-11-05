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

// Function: sub_00219C30
// Address: 0x219c30 - 0x219cc0
void sub_00219C30_0x219c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219C30_0x219c30");
#endif

    switch (ctx->pc) {
        case 0x219c60u: goto label_219c60;
        case 0x219c68u: goto label_219c68;
        default: break;
    }

    ctx->pc = 0x219c30u;

    // 0x219c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219c34: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x219c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x219c38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219c40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219c48: 0x244434e0  addiu       $a0, $v0, 0x34E0
    ctx->pc = 0x219c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
    // 0x219c4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x219c50: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x219c50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A34E4u));
    // 0x219c54: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x219c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A34ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34ECu, _value); } while (0);
    // 0x219c58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219C58u;
    {
        const bool branch_taken_0x219c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C58u;
        // 0x219c5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c58) {
            ctx->pc = 0x219C74u;
            goto label_219c74;
        }
    }
    ctx->pc = 0x219C60u;
label_219c60:
    // 0x219c60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219C60u;
    SET_GPR_U32(ctx, 31, 0x219C68u);
    ctx->pc = 0x219C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C60u;
    // 0x219c64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219C60u, 0x219C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C68u;
label_219c68:
    // 0x219c68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x219c6c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x219C6Cu;
    {
        const bool branch_taken_0x219c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C6Cu;
        // 0x219c70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c6c) {
            ctx->pc = 0x219CA4u;
            goto label_219ca4;
        }
    }
    ctx->pc = 0x219C74u;
label_219c74:
    // 0x219c74: 0x262334e0  addiu       $v1, $s1, 0x34E0
    ctx->pc = 0x219c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13536));
    // 0x219c78: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x219c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x219c7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x219C7Cu;
    {
        const bool branch_taken_0x219c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C7Cu;
        // 0x219c80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c7c) {
            ctx->pc = 0x219C88u;
            goto label_219c88;
        }
    }
    ctx->pc = 0x219C84u;
    // 0x219c84: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x219c84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_219c88:
    // 0x219c88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219C88u;
    {
        const bool branch_taken_0x219c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219c88) {
            ctx->pc = 0x219C98u;
            goto label_219c98;
        }
    }
    ctx->pc = 0x219C90u;
    // 0x219c90: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x219c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x219c94: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x219c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_219c98:
    // 0x219c98: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x219C98u;
    {
        const bool branch_taken_0x219c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x219C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C98u;
        // 0x219c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c98) {
            ctx->pc = 0x219C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219c60;
        }
    }
    ctx->pc = 0x219CA0u;
    // 0x219ca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219ca4:
    // 0x219ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219cb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x219CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CB4u;
        // 0x219cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219CBCu;
    // 0x219cbc: 0x0  nop
    ctx->pc = 0x219cbcu;
    // NOP
    ctx->pc = 0x219cc0u;
}
