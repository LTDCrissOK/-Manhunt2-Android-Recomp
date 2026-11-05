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

// Function: sub_00123E98
// Address: 0x123e98 - 0x123f80
void sub_00123E98_0x123e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123E98_0x123e98");
#endif

    switch (ctx->pc) {
        case 0x123ed0u: goto label_123ed0;
        case 0x123ee0u: goto label_123ee0;
        case 0x123ef4u: goto label_123ef4;
        case 0x123f18u: goto label_123f18;
        case 0x123f40u: goto label_123f40;
        default: break;
    }

    ctx->pc = 0x123e98u;

    // 0x123e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123ea0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123ea4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123eac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x123eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123eb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123eb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x123eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123eb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x123eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x123ebc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x123ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ec0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x123ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x123ec4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x123ec4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ec8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123EC8u;
    SET_GPR_U32(ctx, 31, 0x123ED0u);
    ctx->pc = 0x123ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123EC8u;
    // 0x123ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123EC8u, 0x123ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123ED0u;
label_123ed0:
    // 0x123ed0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x123ED0u;
    {
        const bool branch_taken_0x123ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED0u;
        // 0x123ed4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ed0) {
            ctx->pc = 0x123F4Cu;
            goto label_123f4c;
        }
    }
    ctx->pc = 0x123ED8u;
    // 0x123ed8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123ED8u;
    SET_GPR_U32(ctx, 31, 0x123EE0u);
    ctx->pc = 0x123EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123ED8u;
    // 0x123edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123ED8u, 0x123EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EE0u;
label_123ee0:
    // 0x123ee0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x123EE0u;
    {
        const bool branch_taken_0x123ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EE0u;
        // 0x123ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ee0) {
            ctx->pc = 0x123F48u;
            goto label_123f48;
        }
    }
    ctx->pc = 0x123EE8u;
    // 0x123ee8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x123ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x123eec: 0xc0429ac  jal         func_10A6B0
    ctx->pc = 0x123EECu;
    SET_GPR_U32(ctx, 31, 0x123EF4u);
    ctx->pc = 0x123EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123EECu;
    // 0x123ef0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A6B0u, 0x123EECu, 0x123EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EF4u;
label_123ef4:
    // 0x123ef4: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x123EF4u;
    {
        const bool branch_taken_0x123ef4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF4u;
        // 0x123ef8: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ef4) {
            ctx->pc = 0x123F48u;
            goto label_123f48;
        }
    }
    ctx->pc = 0x123EFCu;
    // 0x123efc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x123EFCu;
    {
        const bool branch_taken_0x123efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EFCu;
        // 0x123f00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123efc) {
            ctx->pc = 0x123F4Cu;
            goto label_123f4c;
        }
    }
    ctx->pc = 0x123F04u;
    // 0x123f04: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x123f08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x123f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123f10: 0xc0429c8  jal         func_10A720
    ctx->pc = 0x123F10u;
    SET_GPR_U32(ctx, 31, 0x123F18u);
    ctx->pc = 0x123F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F10u;
    // 0x123f14: 0x2647ffff  addiu       $a3, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A720u, 0x123F10u, 0x123F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F18u;
label_123f18:
    // 0x123f18: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x123f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x123f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x123f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x123f20: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x123f24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x123f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123f28: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x123f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x123f2c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x123F2Cu;
    {
        const bool branch_taken_0x123f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f2c) {
            ctx->pc = 0x123F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123F2Cu;
            // 0x123f30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123F4Cu;
            goto label_123f4c;
        }
    }
    ctx->pc = 0x123F34u;
    // 0x123f34: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x123f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x123f38: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x123F38u;
    SET_GPR_U32(ctx, 31, 0x123F40u);
    ctx->pc = 0x123F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F38u;
    // 0x123f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x123F38u, 0x123F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F40u;
label_123f40:
    // 0x123f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123F40u;
    {
        const bool branch_taken_0x123f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F40u;
        // 0x123f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f40) {
            ctx->pc = 0x123F4Cu;
            goto label_123f4c;
        }
    }
    ctx->pc = 0x123F48u;
label_123f48:
    // 0x123f48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123f4c:
    // 0x123f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123f54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123f58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123f5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x123f5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123f60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x123f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123f64: 0x3e00008  jr          $ra
    ctx->pc = 0x123F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F64u;
        // 0x123f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123F6Cu;
    // 0x123f6c: 0x0  nop
    ctx->pc = 0x123f6cu;
    // NOP
    // 0x123f70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x123f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x123f74: 0x0  nop
    ctx->pc = 0x123f74u;
    // NOP
    // 0x123f78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x123f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123f7c: 0x0  nop
    ctx->pc = 0x123f7cu;
    // NOP
    ctx->pc = 0x123f80u;
}
