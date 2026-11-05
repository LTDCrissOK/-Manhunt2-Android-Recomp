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

// Function: sub_00141EC8
// Address: 0x141ec8 - 0x141f38
void sub_00141EC8_0x141ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141EC8_0x141ec8");
#endif

    switch (ctx->pc) {
        case 0x141ee0u: goto label_141ee0;
        case 0x141f24u: goto label_141f24;
        default: break;
    }

    ctx->pc = 0x141ec8u;

    // 0x141ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141ed0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ed8: 0xc04e866  jal         func_13A198
    ctx->pc = 0x141ED8u;
    SET_GPR_U32(ctx, 31, 0x141EE0u);
    ctx->pc = 0x141EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141ED8u;
    // 0x141edc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141ED8u, 0x141EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EE0u;
label_141ee0:
    // 0x141ee0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x141ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x141ee4: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x141EE4u;
    {
        const bool branch_taken_0x141ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x141ee4) {
            ctx->pc = 0x141EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141EE4u;
            // 0x141ee8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141F28u;
            goto label_141f28;
        }
    }
    ctx->pc = 0x141EECu;
    // 0x141eec: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x141eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x141ef0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x141ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x141ef4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x141ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x141ef8: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x141ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x141efc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141f00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x141f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x141f04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141f08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x141f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141f0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x141f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x141f10: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x141f14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x141F14u;
    {
        const bool branch_taken_0x141f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f14) {
            ctx->pc = 0x141F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141F14u;
            // 0x141f18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141F28u;
            goto label_141f28;
        }
    }
    ctx->pc = 0x141F1Cu;
    // 0x141f1c: 0xc043b30  jal         func_10ECC0
    ctx->pc = 0x141F1Cu;
    SET_GPR_U32(ctx, 31, 0x141F24u);
    ctx->pc = 0x141F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F1Cu;
    // 0x141f20: 0x8e050ab0  lw          $a1, 0xAB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ECC0u, 0x141F1Cu, 0x141F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F24u;
label_141f24:
    // 0x141f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141f28:
    // 0x141f28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x141F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F2Cu;
        // 0x141f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141F34u;
    // 0x141f34: 0x0  nop
    ctx->pc = 0x141f34u;
    // NOP
    ctx->pc = 0x141f38u;
}
