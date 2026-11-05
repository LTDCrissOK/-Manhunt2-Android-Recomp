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

// Function: sub_00304EB8
// Address: 0x304eb8 - 0x304f40
void sub_00304EB8_0x304eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304EB8_0x304eb8");
#endif

    switch (ctx->pc) {
        case 0x304f0cu: goto label_304f0c;
        case 0x304f24u: goto label_304f24;
        default: break;
    }

    ctx->pc = 0x304eb8u;

    // 0x304eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304ebc: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x304ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x304ec0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x304EC0u;
    {
        const bool branch_taken_0x304ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EC0u;
        // 0x304ec4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ec0) {
            ctx->pc = 0x304F30u;
            goto label_304f30;
        }
    }
    ctx->pc = 0x304EC8u;
    // 0x304ec8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x304ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x304ecc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x304eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x304ed0: 0x24421df0  addiu       $v0, $v0, 0x1DF0
    ctx->pc = 0x304ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7664));
    // 0x304ed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x304ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x304ed8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x304ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x304edc: 0x800008  jr          $a0
    ctx->pc = 0x304EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304EE4u: goto label_304ee4;
            case 0x304EF0u: goto label_304ef0;
            case 0x304EFCu: goto label_304efc;
            case 0x304F14u: goto label_304f14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304EDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x304EE4u;
label_304ee4:
    // 0x304ee4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304ee8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304EE8u;
    {
        const bool branch_taken_0x304ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EE8u;
        // 0x304eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ee8) {
            ctx->pc = 0x304F04u;
            goto label_304f04;
        }
    }
    ctx->pc = 0x304EF0u;
label_304ef0:
    // 0x304ef0: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304ef4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x304EF4u;
    {
        const bool branch_taken_0x304ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EF4u;
        // 0x304ef8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ef4) {
            ctx->pc = 0x304F04u;
            goto label_304f04;
        }
    }
    ctx->pc = 0x304EFCu;
label_304efc:
    // 0x304efc: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304f00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x304f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_304f04:
    // 0x304f04: 0xc0c12b8  jal         func_304AE0
    ctx->pc = 0x304F04u;
    SET_GPR_U32(ctx, 31, 0x304F0Cu);
    ctx->pc = 0x304F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F04u;
    // 0x304f08: 0x24846620  addiu       $a0, $a0, 0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304AE0u, 0x304F04u, 0x304F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F0Cu;
label_304f0c:
    // 0x304f0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x304F0Cu;
    {
        const bool branch_taken_0x304f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F0Cu;
        // 0x304f10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f0c) {
            ctx->pc = 0x304F34u;
            goto label_304f34;
        }
    }
    ctx->pc = 0x304F14u;
label_304f14:
    // 0x304f14: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304f18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x304f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304f1c: 0xc0c12b8  jal         func_304AE0
    ctx->pc = 0x304F1Cu;
    SET_GPR_U32(ctx, 31, 0x304F24u);
    ctx->pc = 0x304F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F1Cu;
    // 0x304f20: 0x24846620  addiu       $a0, $a0, 0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304AE0u, 0x304F1Cu, 0x304F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F24u;
label_304f24:
    // 0x304f24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x304f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x304f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304f2c: 0xac62bb50  sw          $v0, -0x44B0($v1)
    ctx->pc = 0x304f2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBB50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB50u, _value); } while (0);
label_304f30:
    // 0x304f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304f34:
    // 0x304f34: 0x3e00008  jr          $ra
    ctx->pc = 0x304F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F34u;
        // 0x304f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304F3Cu;
    // 0x304f3c: 0x0  nop
    ctx->pc = 0x304f3cu;
    // NOP
    ctx->pc = 0x304f40u;
}
