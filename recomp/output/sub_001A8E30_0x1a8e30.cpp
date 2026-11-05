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

// Function: sub_001A8E30
// Address: 0x1a8e30 - 0x1a8ee0
void sub_001A8E30_0x1a8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8E30_0x1a8e30");
#endif

    switch (ctx->pc) {
        case 0x1a8e30u: goto label_1a8e30;
        case 0x1a8e34u: goto label_1a8e34;
        case 0x1a8e38u: goto label_1a8e38;
        case 0x1a8e3cu: goto label_1a8e3c;
        case 0x1a8e40u: goto label_1a8e40;
        case 0x1a8e44u: goto label_1a8e44;
        case 0x1a8e48u: goto label_1a8e48;
        case 0x1a8e4cu: goto label_1a8e4c;
        case 0x1a8e50u: goto label_1a8e50;
        case 0x1a8e54u: goto label_1a8e54;
        case 0x1a8e58u: goto label_1a8e58;
        case 0x1a8e5cu: goto label_1a8e5c;
        case 0x1a8e60u: goto label_1a8e60;
        case 0x1a8e64u: goto label_1a8e64;
        case 0x1a8e68u: goto label_1a8e68;
        case 0x1a8e6cu: goto label_1a8e6c;
        case 0x1a8e70u: goto label_1a8e70;
        case 0x1a8e74u: goto label_1a8e74;
        case 0x1a8e78u: goto label_1a8e78;
        case 0x1a8e7cu: goto label_1a8e7c;
        case 0x1a8e80u: goto label_1a8e80;
        case 0x1a8e84u: goto label_1a8e84;
        case 0x1a8e88u: goto label_1a8e88;
        case 0x1a8e8cu: goto label_1a8e8c;
        case 0x1a8e90u: goto label_1a8e90;
        case 0x1a8e94u: goto label_1a8e94;
        case 0x1a8e98u: goto label_1a8e98;
        case 0x1a8e9cu: goto label_1a8e9c;
        case 0x1a8ea0u: goto label_1a8ea0;
        case 0x1a8ea4u: goto label_1a8ea4;
        case 0x1a8ea8u: goto label_1a8ea8;
        case 0x1a8eacu: goto label_1a8eac;
        case 0x1a8eb0u: goto label_1a8eb0;
        case 0x1a8eb4u: goto label_1a8eb4;
        case 0x1a8eb8u: goto label_1a8eb8;
        case 0x1a8ebcu: goto label_1a8ebc;
        case 0x1a8ec0u: goto label_1a8ec0;
        case 0x1a8ec4u: goto label_1a8ec4;
        case 0x1a8ec8u: goto label_1a8ec8;
        case 0x1a8eccu: goto label_1a8ecc;
        case 0x1a8ed0u: goto label_1a8ed0;
        case 0x1a8ed4u: goto label_1a8ed4;
        case 0x1a8ed8u: goto label_1a8ed8;
        case 0x1a8edcu: goto label_1a8edc;
        default: break;
    }

    ctx->pc = 0x1a8e30u;

label_1a8e30:
    // 0x1a8e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a8e34:
    // 0x1a8e34: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1a8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_1a8e38:
    // 0x1a8e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a8e3c:
    // 0x1a8e3c: 0x24630ff8  addiu       $v1, $v1, 0xFF8
    ctx->pc = 0x1a8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4088));
label_1a8e40:
    // 0x1a8e40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a8e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a8e44:
    // 0x1a8e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e48:
    // 0x1a8e48: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1a8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_1a8e4c:
    // 0x1a8e4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a8e50:
    // 0x1a8e50: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8e54:
    // 0x1a8e54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a8e58:
    // 0x1a8e58: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1a8e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1a8e5c:
    // 0x1a8e5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a8e60:
    // 0x1a8e60: 0x40f809  jalr        $v0
label_1a8e64:
    if (ctx->pc == 0x1A8E64u) {
        ctx->pc = 0x1A8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E60u;
        // 0x1a8e64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E68u;
        goto label_1a8e68;
    }
    ctx->pc = 0x1A8E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8E68u);
        ctx->pc = 0x1A8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E60u;
        // 0x1a8e64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E60u, 0x1A8E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8E68u;
label_1a8e68:
    // 0x1a8e68: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1a8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1a8e6c:
    // 0x1a8e6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a8e70:
    if (ctx->pc == 0x1A8E70u) {
        ctx->pc = 0x1A8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E6Cu;
        // 0x1a8e70: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E74u;
        goto label_1a8e74;
    }
    ctx->pc = 0x1A8E6Cu;
    {
        const bool branch_taken_0x1a8e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E6Cu;
        // 0x1a8e70: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e6c) {
            ctx->pc = 0x1A8E7Cu;
            goto label_1a8e7c;
        }
    }
    ctx->pc = 0x1A8E74u;
label_1a8e74:
    // 0x1a8e74: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_1a8e78:
    if (ctx->pc == 0x1A8E78u) {
        ctx->pc = 0x1A8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E74u;
        // 0x1a8e78: 0x8e030150  lw          $v1, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E7Cu;
        goto label_1a8e7c;
    }
    ctx->pc = 0x1A8E74u;
    {
        const bool branch_taken_0x1a8e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8e74) {
            ctx->pc = 0x1A8E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8E74u;
            // 0x1a8e78: 0x8e030150  lw          $v1, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8E98u;
            goto label_1a8e98;
        }
    }
    ctx->pc = 0x1A8E7Cu;
label_1a8e7c:
    // 0x1a8e7c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1a8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1a8e80:
    // 0x1a8e80: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1a8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
label_1a8e84:
    // 0x1a8e84: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1a8e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1a8e88:
    // 0x1a8e88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a8e8c:
    if (ctx->pc == 0x1A8E8Cu) {
        ctx->pc = 0x1A8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E88u;
        // 0x1a8e8c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E90u;
        goto label_1a8e90;
    }
    ctx->pc = 0x1A8E88u;
    {
        const bool branch_taken_0x1a8e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E88u;
        // 0x1a8e8c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e88) {
            ctx->pc = 0x1A8E94u;
            goto label_1a8e94;
        }
    }
    ctx->pc = 0x1A8E90u;
label_1a8e90:
    // 0x1a8e90: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x1a8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_1a8e94:
    // 0x1a8e94: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a8e98:
    // 0x1a8e98: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a8e9c:
    // 0x1a8e9c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_1a8ea0:
    if (ctx->pc == 0x1A8EA0u) {
        ctx->pc = 0x1A8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E9Cu;
        // 0x1a8ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EA4u;
        goto label_1a8ea4;
    }
    ctx->pc = 0x1A8E9Cu;
    {
        const bool branch_taken_0x1a8e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8e9c) {
            ctx->pc = 0x1A8EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8E9Cu;
            // 0x1a8ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8ED4u;
            goto label_1a8ed4;
        }
    }
    ctx->pc = 0x1A8EA4u;
label_1a8ea4:
    // 0x1a8ea4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1a8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1a8ea8:
    // 0x1a8ea8: 0x2842025f  slti        $v0, $v0, 0x25F
    ctx->pc = 0x1a8ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)607) ? 1 : 0);
label_1a8eac:
    // 0x1a8eac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1a8eb0:
    if (ctx->pc == 0x1A8EB0u) {
        ctx->pc = 0x1A8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EACu;
        // 0x1a8eb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EB4u;
        goto label_1a8eb4;
    }
    ctx->pc = 0x1A8EACu;
    {
        const bool branch_taken_0x1a8eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8eac) {
            ctx->pc = 0x1A8EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8EACu;
            // 0x1a8eb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8ED4u;
            goto label_1a8ed4;
        }
    }
    ctx->pc = 0x1A8EB4u;
label_1a8eb4:
    // 0x1a8eb4: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1a8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_1a8eb8:
    // 0x1a8eb8: 0x2862001b  slti        $v0, $v1, 0x1B
    ctx->pc = 0x1a8eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27) ? 1 : 0);
label_1a8ebc:
    // 0x1a8ebc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a8ec0:
    if (ctx->pc == 0x1A8EC0u) {
        ctx->pc = 0x1A8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EBCu;
        // 0x1a8ec0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EC4u;
        goto label_1a8ec4;
    }
    ctx->pc = 0x1A8EBCu;
    {
        const bool branch_taken_0x1a8ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ebc) {
            ctx->pc = 0x1A8EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8EBCu;
            // 0x1a8ec0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8ED4u;
            goto label_1a8ed4;
        }
    }
    ctx->pc = 0x1A8EC4u;
label_1a8ec4:
    // 0x1a8ec4: 0x28620021  slti        $v0, $v1, 0x21
    ctx->pc = 0x1a8ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
label_1a8ec8:
    // 0x1a8ec8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a8ecc:
    if (ctx->pc == 0x1A8ECCu) {
        ctx->pc = 0x1A8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EC8u;
        // 0x1a8ecc: 0xae030154  sw          $v1, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8ED0u;
        goto label_1a8ed0;
    }
    ctx->pc = 0x1A8EC8u;
    {
        const bool branch_taken_0x1a8ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ec8) {
            ctx->pc = 0x1A8ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8EC8u;
            // 0x1a8ecc: 0xae030154  sw          $v1, 0x154($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8ED0u;
            goto label_1a8ed0;
        }
    }
    ctx->pc = 0x1A8ED0u;
label_1a8ed0:
    // 0x1a8ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8ed4:
    // 0x1a8ed4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a8ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a8ed8:
    // 0x1a8ed8: 0x3e00008  jr          $ra
label_1a8edc:
    if (ctx->pc == 0x1A8EDCu) {
        ctx->pc = 0x1A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ED8u;
        // 0x1a8edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EE0u;
        goto label_fallthrough_0x1a8ed8;
    }
    ctx->pc = 0x1A8ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ED8u;
        // 0x1a8edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a8ed8:
    ctx->pc = 0x1A8EE0u;
}
