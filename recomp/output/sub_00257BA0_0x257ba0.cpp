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

// Function: sub_00257BA0
// Address: 0x257ba0 - 0x257f18
void sub_00257BA0_0x257ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257BA0_0x257ba0");
#endif

    switch (ctx->pc) {
        case 0x257c94u: goto label_257c94;
        case 0x257cbcu: goto label_257cbc;
        case 0x257ce0u: goto label_257ce0;
        case 0x257cfcu: goto label_257cfc;
        case 0x257d68u: goto label_257d68;
        case 0x257e20u: goto label_257e20;
        case 0x257e30u: goto label_257e30;
        case 0x257e4cu: goto label_257e4c;
        case 0x257e5cu: goto label_257e5c;
        case 0x257e70u: goto label_257e70;
        case 0x257e8cu: goto label_257e8c;
        case 0x257ebcu: goto label_257ebc;
        case 0x257ee0u: goto label_257ee0;
        default: break;
    }

    ctx->pc = 0x257ba0u;

    // 0x257ba0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x257ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x257ba4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x257ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x257ba8: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x257ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x257bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257bb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x257bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x257bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x257bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x257bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x257bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x257bbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x257bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x257bc0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x257bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x257bc4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x257bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x257bc8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x257bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x257bcc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x257BCCu;
    {
        const bool branch_taken_0x257bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x257BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BCCu;
        // 0x257bd0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bcc) {
            ctx->pc = 0x257BE4u;
            goto label_257be4;
        }
    }
    ctx->pc = 0x257BD4u;
    // 0x257bd4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x257bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x257bd8: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x257bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x257bdc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x257BDCu;
    {
        const bool branch_taken_0x257bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BDCu;
        // 0x257be0: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bdc) {
            ctx->pc = 0x257C28u;
            goto label_257c28;
        }
    }
    ctx->pc = 0x257BE4u;
label_257be4:
    // 0x257be4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x257be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x257be8: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x257be8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x257bec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x257BECu;
    {
        const bool branch_taken_0x257bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BECu;
        // 0x257bf0: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bec) {
            ctx->pc = 0x257C1Cu;
            goto label_257c1c;
        }
    }
    ctx->pc = 0x257BF4u;
    // 0x257bf4: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x257bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x257bf8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x257bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x257bfc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x257bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x257c00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257C00u;
    {
        const bool branch_taken_0x257c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C00u;
        // 0x257c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c00) {
            ctx->pc = 0x257C14u;
            goto label_257c14;
        }
    }
    ctx->pc = 0x257C08u;
    // 0x257c08: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x257c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257c0c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x257c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x257c10: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x257c10u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_257c14:
    // 0x257c14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257C14u;
    {
        const bool branch_taken_0x257c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C14u;
        // 0x257c18: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c14) {
            ctx->pc = 0x257C20u;
            goto label_257c20;
        }
    }
    ctx->pc = 0x257C1Cu;
label_257c1c:
    // 0x257c1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257c20:
    // 0x257c20: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x257C20u;
    {
        const bool branch_taken_0x257c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C20u;
        // 0x257c24: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c20) {
            ctx->pc = 0x257EECu;
            goto label_257eec;
        }
    }
    ctx->pc = 0x257C28u;
label_257c28:
    // 0x257c28: 0x8c433d20  lw          $v1, 0x3D20($v0)
    ctx->pc = 0x257c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15648)));
    // 0x257c2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x257c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c30: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x257C30u;
    {
        const bool branch_taken_0x257c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C30u;
        // 0x257c34: 0x24463d20  addiu       $a2, $v0, 0x3D20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c30) {
            ctx->pc = 0x257EECu;
            goto label_257eec;
        }
    }
    ctx->pc = 0x257C38u;
    // 0x257c38: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x257c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x257c3c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x257c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x257c40: 0x8c65efe8  lw          $a1, -0x1018($v1)
    ctx->pc = 0x257c40u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x48EFE8u));
    // 0x257c44: 0x8c82f010  lw          $v0, -0xFF0($a0)
    ctx->pc = 0x257c44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48F010u));
    // 0x257c48: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x257c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x257c4c: 0x126000a7  beqz        $s3, . + 4 + (0xA7 << 2)
    ctx->pc = 0x257C4Cu;
    {
        const bool branch_taken_0x257c4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C4Cu;
        // 0x257c50: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c4c) {
            ctx->pc = 0x257EECu;
            goto label_257eec;
        }
    }
    ctx->pc = 0x257C54u;
    // 0x257c54: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x257c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x257c58: 0x8c439920  lw          $v1, -0x66E0($v0)
    ctx->pc = 0x257c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940960)));
    // 0x257c5c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x257c5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c60: 0x8c909914  lw          $s0, -0x66EC($a0)
    ctx->pc = 0x257c60u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3F9914u));
    // 0x257c64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x257c64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257c6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x257c6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c70: 0xac439920  sw          $v1, -0x66E0($v0)
    ctx->pc = 0x257c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940960), GPR_U32(ctx, 3));
    // 0x257c74: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x257C74u;
    {
        const bool branch_taken_0x257c74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x257C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C74u;
        // 0x257c78: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c74) {
            ctx->pc = 0x257CA4u;
            goto label_257ca4;
        }
    }
    ctx->pc = 0x257C7Cu;
    // 0x257c7c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x257c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x257c80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x257C80u;
    {
        const bool branch_taken_0x257c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C80u;
        // 0x257c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c80) {
            ctx->pc = 0x257C8Cu;
            goto label_257c8c;
        }
    }
    ctx->pc = 0x257C88u;
    // 0x257c88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x257c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257c8c:
    // 0x257c8c: 0xc095eba  jal         func_257AE8
    ctx->pc = 0x257C8Cu;
    SET_GPR_U32(ctx, 31, 0x257C94u);
    ctx->pc = 0x257C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257C8Cu;
    // 0x257c90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AE8u, 0x257C8Cu, 0x257C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C94u;
label_257c94:
    // 0x257c94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257C94u;
    {
        const bool branch_taken_0x257c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C94u;
        // 0x257c98: 0x8ea39918  lw          $v1, -0x66E8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294940952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c94) {
            ctx->pc = 0x257CA8u;
            goto label_257ca8;
        }
    }
    ctx->pc = 0x257C9Cu;
    // 0x257c9c: 0xaea09918  sw          $zero, -0x66E8($s5)
    ctx->pc = 0x257c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294940952), GPR_U32(ctx, 0));
    // 0x257ca0: 0xae909914  sw          $s0, -0x66EC($s4)
    ctx->pc = 0x257ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294940948), GPR_U32(ctx, 16));
label_257ca4:
    // 0x257ca4: 0x8ea39918  lw          $v1, -0x66E8($s5)
    ctx->pc = 0x257ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294940952)));
label_257ca8:
    // 0x257ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257cac: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257CACu;
    {
        const bool branch_taken_0x257cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x257cac) {
            ctx->pc = 0x257CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257CACu;
            // 0x257cb0: 0xae809914  sw          $zero, -0x66EC($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294940948), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257CC8u;
            goto label_257cc8;
        }
    }
    ctx->pc = 0x257CB4u;
    // 0x257cb4: 0xc095eba  jal         func_257AE8
    ctx->pc = 0x257CB4u;
    SET_GPR_U32(ctx, 31, 0x257CBCu);
    ctx->pc = 0x257CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CB4u;
    // 0x257cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AE8u, 0x257CB4u, 0x257CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CBCu;
label_257cbc:
    // 0x257cbc: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x257CBCu;
    {
        const bool branch_taken_0x257cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257cbc) {
            ctx->pc = 0x257D60u;
            goto label_257d60;
        }
    }
    ctx->pc = 0x257CC4u;
    // 0x257cc4: 0xae809914  sw          $zero, -0x66EC($s4)
    ctx->pc = 0x257cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294940948), GPR_U32(ctx, 0));
label_257cc8:
    // 0x257cc8: 0x26223d20  addiu       $v0, $s1, 0x3D20
    ctx->pc = 0x257cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 15648));
    // 0x257ccc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x257cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257cd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x257cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x257cd4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x257CD4u;
    {
        const bool branch_taken_0x257cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CD4u;
        // 0x257cd8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cd4) {
            ctx->pc = 0x257D2Cu;
            goto label_257d2c;
        }
    }
    ctx->pc = 0x257CDCu;
    // 0x257cdc: 0x0  nop
    ctx->pc = 0x257cdcu;
    // NOP
label_257ce0:
    // 0x257ce0: 0x16110013  bne         $s0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x257CE0u;
    {
        const bool branch_taken_0x257ce0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x257CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CE0u;
        // 0x257ce4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ce0) {
            ctx->pc = 0x257D30u;
            goto label_257d30;
        }
    }
    ctx->pc = 0x257CE8u;
    // 0x257ce8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x257CE8u;
    {
        const bool branch_taken_0x257ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CE8u;
        // 0x257cec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ce8) {
            ctx->pc = 0x257CF4u;
            goto label_257cf4;
        }
    }
    ctx->pc = 0x257CF0u;
    // 0x257cf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x257cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257cf4:
    // 0x257cf4: 0xc095eba  jal         func_257AE8
    ctx->pc = 0x257CF4u;
    SET_GPR_U32(ctx, 31, 0x257CFCu);
    ctx->pc = 0x257AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AE8u, 0x257CF4u, 0x257CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CFCu;
label_257cfc:
    // 0x257cfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257CFCu;
    {
        const bool branch_taken_0x257cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CFCu;
        // 0x257d00: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cfc) {
            ctx->pc = 0x257D1Cu;
            goto label_257d1c;
        }
    }
    ctx->pc = 0x257D04u;
    // 0x257d04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x257D04u;
    {
        const bool branch_taken_0x257d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D04u;
        // 0x257d08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d04) {
            ctx->pc = 0x257D10u;
            goto label_257d10;
        }
    }
    ctx->pc = 0x257D0Cu;
    // 0x257d0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257d10:
    // 0x257d10: 0xae839914  sw          $v1, -0x66EC($s4)
    ctx->pc = 0x257d10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294940948), GPR_U32(ctx, 3));
    // 0x257d14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x257D14u;
    {
        const bool branch_taken_0x257d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D14u;
        // 0x257d18: 0xaea09918  sw          $zero, -0x66E8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294940952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d14) {
            ctx->pc = 0x257D54u;
            goto label_257d54;
        }
    }
    ctx->pc = 0x257D1Cu;
label_257d1c:
    // 0x257d1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x257D1Cu;
    {
        const bool branch_taken_0x257d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D1Cu;
        // 0x257d20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d1c) {
            ctx->pc = 0x257D28u;
            goto label_257d28;
        }
    }
    ctx->pc = 0x257D24u;
    // 0x257d24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x257d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257d28:
    // 0x257d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_257d2c:
    // 0x257d2c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x257d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_257d30:
    // 0x257d30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x257D30u;
    {
        const bool branch_taken_0x257d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D30u;
        // 0x257d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d30) {
            ctx->pc = 0x257D3Cu;
            goto label_257d3c;
        }
    }
    ctx->pc = 0x257D38u;
    // 0x257d38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x257d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257d3c:
    // 0x257d3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257D3Cu;
    {
        const bool branch_taken_0x257d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D3Cu;
        // 0x257d40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d3c) {
            ctx->pc = 0x257D4Cu;
            goto label_257d4c;
        }
    }
    ctx->pc = 0x257D44u;
    // 0x257d44: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x257d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x257d48: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x257d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_257d4c:
    // 0x257d4c: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x257D4Cu;
    {
        const bool branch_taken_0x257d4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x257d4c) {
            ctx->pc = 0x257CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257ce0;
        }
    }
    ctx->pc = 0x257D54u;
label_257d54:
    // 0x257d54: 0x8e829914  lw          $v0, -0x66EC($s4)
    ctx->pc = 0x257d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940948)));
    // 0x257d58: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x257D58u;
    {
        const bool branch_taken_0x257d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257d58) {
            ctx->pc = 0x257D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D58u;
            // 0x257d5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257EF0u;
            goto label_257ef0;
        }
    }
    ctx->pc = 0x257D60u;
label_257d60:
    // 0x257d60: 0xc095eba  jal         func_257AE8
    ctx->pc = 0x257D60u;
    SET_GPR_U32(ctx, 31, 0x257D68u);
    ctx->pc = 0x257D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D60u;
    // 0x257d64: 0x8e849914  lw          $a0, -0x66EC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AE8u, 0x257D60u, 0x257D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D68u;
label_257d68:
    // 0x257d68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257D68u;
    {
        const bool branch_taken_0x257d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D68u;
        // 0x257d6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d68) {
            ctx->pc = 0x257D7Cu;
            goto label_257d7c;
        }
    }
    ctx->pc = 0x257D70u;
    // 0x257d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257d74: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x257D74u;
    {
        const bool branch_taken_0x257d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D74u;
        // 0x257d78: 0xaea29918  sw          $v0, -0x66E8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294940952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d74) {
            ctx->pc = 0x257EECu;
            goto label_257eec;
        }
    }
    ctx->pc = 0x257D7Cu;
label_257d7c:
    // 0x257d7c: 0x8ee49920  lw          $a0, -0x66E0($s7)
    ctx->pc = 0x257d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294940960)));
    // 0x257d80: 0x8c43991c  lw          $v1, -0x66E4($v0)
    ctx->pc = 0x257d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940956)));
    // 0x257d84: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x257d84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x257d88: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x257D88u;
    {
        const bool branch_taken_0x257d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D88u;
        // 0x257d8c: 0x2445991c  addiu       $a1, $v0, -0x66E4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d88) {
            ctx->pc = 0x257EECu;
            goto label_257eec;
        }
    }
    ctx->pc = 0x257D90u;
    // 0x257d90: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x257D90u;
    {
        const bool branch_taken_0x257d90 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x257D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D90u;
        // 0x257d94: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d90) {
            ctx->pc = 0x257DACu;
            goto label_257dac;
        }
    }
    ctx->pc = 0x257D98u;
    // 0x257d98: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x257d98u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257d9c: 0x0  nop
    ctx->pc = 0x257d9cu;
    // NOP
    // 0x257da0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x257da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x257da4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x257DA4u;
    {
        const bool branch_taken_0x257da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257da4) {
            ctx->pc = 0x257DC4u;
            goto label_257dc4;
        }
    }
    ctx->pc = 0x257DACu;
label_257dac:
    // 0x257dac: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x257dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x257db0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x257db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x257db4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257db8: 0x0  nop
    ctx->pc = 0x257db8u;
    // NOP
    // 0x257dbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x257dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x257dc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x257dc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_257dc4:
    // 0x257dc4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x257dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x257dc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257dcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x257dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x257dd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x257dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x257dd4: 0x0  nop
    ctx->pc = 0x257dd4u;
    // NOP
    // 0x257dd8: 0x0  nop
    ctx->pc = 0x257dd8u;
    // NOP
    // 0x257ddc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x257ddcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x257de0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x257de0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x257de4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x257de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x257de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257dec: 0x0  nop
    ctx->pc = 0x257decu;
    // NOP
    // 0x257df0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x257df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x257df4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x257df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x257df8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x257df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257dfc: 0x8e919914  lw          $s1, -0x66EC($s4)
    ctx->pc = 0x257dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940948)));
    // 0x257e00: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x257E00u;
    {
        const bool branch_taken_0x257e00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E00u;
        // 0x257e04: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e00) {
            ctx->pc = 0x257EECu;
            goto label_257eec;
        }
    }
    ctx->pc = 0x257E08u;
    // 0x257e08: 0x8ea29918  lw          $v0, -0x66E8($s5)
    ctx->pc = 0x257e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294940952)));
    // 0x257e0c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x257E0Cu;
    {
        const bool branch_taken_0x257e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E0Cu;
        // 0x257e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e0c) {
            ctx->pc = 0x257E9Cu;
            goto label_257e9c;
        }
    }
    ctx->pc = 0x257E14u;
    // 0x257e14: 0x8e220fe4  lw          $v0, 0xFE4($s1)
    ctx->pc = 0x257e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
    // 0x257e18: 0xc09532e  jal         func_254CB8
    ctx->pc = 0x257E18u;
    SET_GPR_U32(ctx, 31, 0x257E20u);
    ctx->pc = 0x257E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E18u;
    // 0x257e1c: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CB8u, 0x257E18u, 0x257E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E20u;
label_257e20:
    // 0x257e20: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257E20u;
    {
        const bool branch_taken_0x257e20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x257e20) {
            ctx->pc = 0x257E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E20u;
            // 0x257e24: 0x8e220fe4  lw          $v0, 0xFE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257E40u;
            goto label_257e40;
        }
    }
    ctx->pc = 0x257E28u;
    // 0x257e28: 0xc095fc6  jal         func_257F18
    ctx->pc = 0x257E28u;
    SET_GPR_U32(ctx, 31, 0x257E30u);
    ctx->pc = 0x257E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E28u;
    // 0x257e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F18u, 0x257E28u, 0x257E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E30u;
label_257e30:
    // 0x257e30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x257e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257e34: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x257e34u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x257e38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x257E38u;
    {
        const bool branch_taken_0x257e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E38u;
        // 0x257e3c: 0xaea39918  sw          $v1, -0x66E8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294940952), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e38) {
            ctx->pc = 0x257E9Cu;
            goto label_257e9c;
        }
    }
    ctx->pc = 0x257E40u;
label_257e40:
    // 0x257e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257e44: 0xc09531c  jal         func_254C70
    ctx->pc = 0x257E44u;
    SET_GPR_U32(ctx, 31, 0x257E4Cu);
    ctx->pc = 0x257E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E44u;
    // 0x257e48: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C70u, 0x257E44u, 0x257E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E4Cu;
label_257e4c:
    // 0x257e4c: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x257E4Cu;
    {
        const bool branch_taken_0x257e4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x257e4c) {
            ctx->pc = 0x257E9Cu;
            goto label_257e9c;
        }
    }
    ctx->pc = 0x257E54u;
    // 0x257e54: 0xc09531c  jal         func_254C70
    ctx->pc = 0x257E54u;
    SET_GPR_U32(ctx, 31, 0x257E5Cu);
    ctx->pc = 0x257E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E54u;
    // 0x257e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C70u, 0x257E54u, 0x257E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E5Cu;
label_257e5c:
    // 0x257e5c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x257e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x257e60: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x257E60u;
    {
        const bool branch_taken_0x257e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E60u;
        // 0x257e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e60) {
            ctx->pc = 0x257E84u;
            goto label_257e84;
        }
    }
    ctx->pc = 0x257E68u;
    // 0x257e68: 0xc096032  jal         func_2580C8
    ctx->pc = 0x257E68u;
    SET_GPR_U32(ctx, 31, 0x257E70u);
    ctx->pc = 0x257E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E68u;
    // 0x257e6c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2580C8u, 0x257E68u, 0x257E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E70u;
label_257e70:
    // 0x257e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257e74: 0xaee09920  sw          $zero, -0x66E0($s7)
    ctx->pc = 0x257e74u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294940960), GPR_U32(ctx, 0));
    // 0x257e78: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x257e78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
    // 0x257e7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x257E7Cu;
    {
        const bool branch_taken_0x257e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E7Cu;
        // 0x257e80: 0xaea39918  sw          $v1, -0x66E8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294940952), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e7c) {
            ctx->pc = 0x257E9Cu;
            goto label_257e9c;
        }
    }
    ctx->pc = 0x257E84u;
label_257e84:
    // 0x257e84: 0xc09606c  jal         func_2581B0
    ctx->pc = 0x257E84u;
    SET_GPR_U32(ctx, 31, 0x257E8Cu);
    ctx->pc = 0x257E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E84u;
    // 0x257e88: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2581B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2581B0u, 0x257E84u, 0x257E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E8Cu;
label_257e8c:
    // 0x257e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257e90: 0xaee09920  sw          $zero, -0x66E0($s7)
    ctx->pc = 0x257e90u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294940960), GPR_U32(ctx, 0));
    // 0x257e94: 0xaea39918  sw          $v1, -0x66E8($s5)
    ctx->pc = 0x257e94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294940952), GPR_U32(ctx, 3));
    // 0x257e98: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x257e98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
label_257e9c:
    // 0x257e9c: 0x16c00014  bnez        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x257E9Cu;
    {
        const bool branch_taken_0x257e9c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x257EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E9Cu;
        // 0x257ea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e9c) {
            ctx->pc = 0x257EF0u;
            goto label_257ef0;
        }
    }
    ctx->pc = 0x257EA4u;
    // 0x257ea4: 0x8ea39918  lw          $v1, -0x66E8($s5)
    ctx->pc = 0x257ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294940952)));
    // 0x257ea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257eac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257EACu;
    {
        const bool branch_taken_0x257eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x257EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EACu;
        // 0x257eb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257eac) {
            ctx->pc = 0x257ED0u;
            goto label_257ed0;
        }
    }
    ctx->pc = 0x257EB4u;
    // 0x257eb4: 0xc096032  jal         func_2580C8
    ctx->pc = 0x257EB4u;
    SET_GPR_U32(ctx, 31, 0x257EBCu);
    ctx->pc = 0x257EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257EB4u;
    // 0x257eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2580C8u, 0x257EB4u, 0x257EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257EBCu;
label_257ebc:
    // 0x257ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257ec0: 0xaee09920  sw          $zero, -0x66E0($s7)
    ctx->pc = 0x257ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294940960), GPR_U32(ctx, 0));
    // 0x257ec4: 0xaea39918  sw          $v1, -0x66E8($s5)
    ctx->pc = 0x257ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294940952), GPR_U32(ctx, 3));
    // 0x257ec8: 0x8ea39918  lw          $v1, -0x66E8($s5)
    ctx->pc = 0x257ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294940952)));
    // 0x257ecc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x257eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_257ed0:
    // 0x257ed0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257ED0u;
    {
        const bool branch_taken_0x257ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x257ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257ED0u;
        // 0x257ed4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ed0) {
            ctx->pc = 0x257EF0u;
            goto label_257ef0;
        }
    }
    ctx->pc = 0x257ED8u;
    // 0x257ed8: 0xc09606c  jal         func_2581B0
    ctx->pc = 0x257ED8u;
    SET_GPR_U32(ctx, 31, 0x257EE0u);
    ctx->pc = 0x257EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257ED8u;
    // 0x257edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2581B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2581B0u, 0x257ED8u, 0x257EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257EE0u;
label_257ee0:
    // 0x257ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257ee4: 0xaee09920  sw          $zero, -0x66E0($s7)
    ctx->pc = 0x257ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294940960), GPR_U32(ctx, 0));
    // 0x257ee8: 0xaea39918  sw          $v1, -0x66E8($s5)
    ctx->pc = 0x257ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294940952), GPR_U32(ctx, 3));
label_257eec:
    // 0x257eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_257ef0:
    // 0x257ef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x257ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257ef4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x257ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257ef8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x257ef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257efc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x257efcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257f00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x257f00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x257f04: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x257f04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f08: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x257f08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x257f0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x257f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257f10: 0x3e00008  jr          $ra
    ctx->pc = 0x257F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F10u;
        // 0x257f14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F18u;
}
