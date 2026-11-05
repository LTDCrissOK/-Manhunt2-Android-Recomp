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

// Function: sub_001F6B70
// Address: 0x1f6b70 - 0x1f6c68
void sub_001F6B70_0x1f6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6B70_0x1f6b70");
#endif

    switch (ctx->pc) {
        case 0x1f6bc8u: goto label_1f6bc8;
        case 0x1f6bf0u: goto label_1f6bf0;
        case 0x1f6c18u: goto label_1f6c18;
        default: break;
    }

    ctx->pc = 0x1f6b70u;

    // 0x1f6b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6b78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f6b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6b84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6b88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6b8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6b90: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F6B90u;
    {
        const bool branch_taken_0x1f6b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B90u;
        // 0x1f6b94: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b90) {
            ctx->pc = 0x1F6C4Cu;
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6B98u;
    // 0x1f6b98: 0x640002c  bltz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F6B98u;
    {
        const bool branch_taken_0x1f6b98 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1F6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B98u;
        // 0x1f6b9c: 0x2a4200e6  slti        $v0, $s2, 0xE6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)230) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b98) {
            ctx->pc = 0x1F6C4Cu;
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6BA0u;
    // 0x1f6ba0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F6BA0u;
    {
        const bool branch_taken_0x1f6ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BA0u;
        // 0x1f6ba4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ba0) {
            ctx->pc = 0x1F6C4Cu;
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6BA8u;
    // 0x1f6ba8: 0x26044f98  addiu       $a0, $s0, 0x4F98
    ctx->pc = 0x1f6ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20376));
    // 0x1f6bac: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1f6bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f6bb0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x1f6bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f6bb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f6bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6bb8: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F6BB8u;
    {
        const bool branch_taken_0x1f6bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6bb8) {
            ctx->pc = 0x1F6BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6BB8u;
            // 0x1f6bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C50u;
            goto label_1f6c50;
        }
    }
    ctx->pc = 0x1F6BC0u;
    // 0x1f6bc0: 0xc07e670  jal         func_1F99C0
    ctx->pc = 0x1F6BC0u;
    SET_GPR_U32(ctx, 31, 0x1F6BC8u);
    ctx->pc = 0x1F6BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6BC0u;
    // 0x1f6bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99C0u, 0x1F6BC0u, 0x1F6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BC8u;
label_1f6bc8:
    // 0x1f6bc8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1f6bcc: 0x8e067ab0  lw          $a2, 0x7AB0($s0)
    ctx->pc = 0x1f6bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31408)));
    // 0x1f6bd0: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F6BD0u;
    {
        const bool branch_taken_0x1f6bd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BD0u;
        // 0x1f6bd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bd0) {
            ctx->pc = 0x1F6C4Cu;
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6BD8u;
    // 0x1f6bd8: 0x26117718  addiu       $s1, $s0, 0x7718
    ctx->pc = 0x1f6bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 30488));
    // 0x1f6bdc: 0x241300e6  addiu       $s3, $zero, 0xE6
    ctx->pc = 0x1f6bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1f6be0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1f6be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6be4: 0x2605771c  addiu       $a1, $s0, 0x771C
    ctx->pc = 0x1f6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 30492));
    // 0x1f6be8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f6be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bec: 0x0  nop
    ctx->pc = 0x1f6becu;
    // NOP
label_1f6bf0:
    // 0x1f6bf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6bf4: 0x5642000f  bnel        $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6BF4u;
    {
        const bool branch_taken_0x1f6bf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6bf4) {
            ctx->pc = 0x1F6BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6BF4u;
            // 0x1f6bf8: 0x8e067ab0  lw          $a2, 0x7AB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C34u;
            goto label_1f6c34;
        }
    }
    ctx->pc = 0x1F6BFCu;
    // 0x1f6bfc: 0x2ce200e5  sltiu       $v0, $a3, 0xE5
    ctx->pc = 0x1f6bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)229) ? 1 : 0);
    // 0x1f6c00: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6C00u;
    {
        const bool branch_taken_0x1f6c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6c00) {
            ctx->pc = 0x1F6C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6C00u;
            // 0x1f6c04: 0x8e027ab0  lw          $v0, 0x7AB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C1Cu;
            goto label_1f6c1c;
        }
    }
    ctx->pc = 0x1F6C08u;
    // 0x1f6c08: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f6c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1f6c0c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f6c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1f6c10: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1F6C10u;
    SET_GPR_U32(ctx, 31, 0x1F6C18u);
    ctx->pc = 0x1F6C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6C10u;
    // 0x1f6c14: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1F6C10u, 0x1F6C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C18u;
label_1f6c18:
    // 0x1f6c18: 0x8e027ab0  lw          $v0, 0x7AB0($s0)
    ctx->pc = 0x1f6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31408)));
label_1f6c1c:
    // 0x1f6c1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f6c20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f6c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f6c24: 0xae027ab0  sw          $v0, 0x7AB0($s0)
    ctx->pc = 0x1f6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31408), GPR_U32(ctx, 2));
    // 0x1f6c28: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1f6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1f6c2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6C2Cu;
    {
        const bool branch_taken_0x1f6c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C2Cu;
        // 0x1f6c30: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c2c) {
            ctx->pc = 0x1F6C4Cu;
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6C34u;
label_1f6c34:
    // 0x1f6c34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f6c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f6c38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f6c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f6c3c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f6c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f6c40: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1f6c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f6c44: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1F6C44u;
    {
        const bool branch_taken_0x1f6c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C44u;
        // 0x1f6c48: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c44) {
            ctx->pc = 0x1F6BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6bf0;
        }
    }
    ctx->pc = 0x1F6C4Cu;
label_1f6c4c:
    // 0x1f6c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6c50:
    // 0x1f6c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6c54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6c58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C60u;
        // 0x1f6c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6C68u;
}
