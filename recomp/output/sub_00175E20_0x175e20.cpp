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

// Function: sub_00175E20
// Address: 0x175e20 - 0x175f00
void sub_00175E20_0x175e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175E20_0x175e20");
#endif

    switch (ctx->pc) {
        case 0x175e84u: goto label_175e84;
        case 0x175e94u: goto label_175e94;
        case 0x175ec0u: goto label_175ec0;
        default: break;
    }

    ctx->pc = 0x175e20u;

    // 0x175e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175e24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x175e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x175e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175e2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175e30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x175e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x175e38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x175e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e3c: 0x8ca300b4  lw          $v1, 0xB4($a1)
    ctx->pc = 0x175e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x175e40: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x175e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x175e44: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x175E44u;
    {
        const bool branch_taken_0x175e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E44u;
        // 0x175e48: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e44) {
            ctx->pc = 0x175EE8u;
            goto label_175ee8;
        }
    }
    ctx->pc = 0x175E4Cu;
    // 0x175e4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175e50: 0x2442f440  addiu       $v0, $v0, -0xBC0
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964288));
    // 0x175e54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175e58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175e5c: 0x800008  jr          $a0
    ctx->pc = 0x175E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175E64u: goto label_175e64;
            case 0x175E6Cu: goto label_175e6c;
            case 0x175E7Cu: goto label_175e7c;
            case 0x175E8Cu: goto label_175e8c;
            case 0x175EA0u: goto label_175ea0;
            case 0x175EB0u: goto label_175eb0;
            case 0x175EC8u: goto label_175ec8;
            case 0x175ED8u: goto label_175ed8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175E5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x175E64u;
label_175e64:
    // 0x175e64: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x175E64u;
    {
        const bool branch_taken_0x175e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E64u;
        // 0x175e68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e64) {
            ctx->pc = 0x175ECCu;
            goto label_175ecc;
        }
    }
    ctx->pc = 0x175E6Cu;
label_175e6c:
    // 0x175e6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x175e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175e70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x175e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175e74: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x175E74u;
    {
        const bool branch_taken_0x175e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E74u;
        // 0x175e78: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e74) {
            ctx->pc = 0x175EECu;
            goto label_175eec;
        }
    }
    ctx->pc = 0x175E7Cu;
label_175e7c:
    // 0x175e7c: 0xc05dc24  jal         func_177090
    ctx->pc = 0x175E7Cu;
    SET_GPR_U32(ctx, 31, 0x175E84u);
    ctx->pc = 0x175E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E7Cu;
    // 0x175e80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177090u, 0x175E7Cu, 0x175E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E84u;
label_175e84:
    // 0x175e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175E84u;
    {
        const bool branch_taken_0x175e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E84u;
        // 0x175e88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e84) {
            ctx->pc = 0x175E98u;
            goto label_175e98;
        }
    }
    ctx->pc = 0x175E8Cu;
label_175e8c:
    // 0x175e8c: 0xc05dc50  jal         func_177140
    ctx->pc = 0x175E8Cu;
    SET_GPR_U32(ctx, 31, 0x175E94u);
    ctx->pc = 0x175E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E8Cu;
    // 0x175e90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177140u, 0x175E8Cu, 0x175E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E94u;
label_175e94:
    // 0x175e94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x175e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_175e98:
    // 0x175e98: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x175E98u;
    {
        const bool branch_taken_0x175e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E98u;
        // 0x175e9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e98) {
            ctx->pc = 0x175EECu;
            goto label_175eec;
        }
    }
    ctx->pc = 0x175EA0u;
label_175ea0:
    // 0x175ea0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175ea4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x175ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175ea8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x175EA8u;
    {
        const bool branch_taken_0x175ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EA8u;
        // 0x175eac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ea8) {
            ctx->pc = 0x175EECu;
            goto label_175eec;
        }
    }
    ctx->pc = 0x175EB0u;
label_175eb0:
    // 0x175eb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x175eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175eb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175eb8: 0xc05dc7c  jal         func_1771F0
    ctx->pc = 0x175EB8u;
    SET_GPR_U32(ctx, 31, 0x175EC0u);
    ctx->pc = 0x175EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175EB8u;
    // 0x175ebc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1771F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1771F0u, 0x175EB8u, 0x175EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175EC0u;
label_175ec0:
    // 0x175ec0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x175EC0u;
    {
        const bool branch_taken_0x175ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EC0u;
        // 0x175ec4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ec0) {
            ctx->pc = 0x175EF0u;
            goto label_175ef0;
        }
    }
    ctx->pc = 0x175EC8u;
label_175ec8:
    // 0x175ec8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x175ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175ecc:
    // 0x175ecc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x175eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x175ed0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x175ED0u;
    {
        const bool branch_taken_0x175ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ED0u;
        // 0x175ed4: 0x8ca20064  lw          $v0, 0x64($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ed0) {
            ctx->pc = 0x175EECu;
            goto label_175eec;
        }
    }
    ctx->pc = 0x175ED8u;
label_175ed8:
    // 0x175ed8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x175ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x175edc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x175edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x175ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175EE0u;
    {
        const bool branch_taken_0x175ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EE0u;
        // 0x175ee4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ee0) {
            ctx->pc = 0x175EECu;
            goto label_175eec;
        }
    }
    ctx->pc = 0x175EE8u;
label_175ee8:
    // 0x175ee8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x175ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_175eec:
    // 0x175eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175ef0:
    // 0x175ef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x175EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EF4u;
        // 0x175ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175EFCu;
    // 0x175efc: 0x0  nop
    ctx->pc = 0x175efcu;
    // NOP
    ctx->pc = 0x175f00u;
}
