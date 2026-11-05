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

// Function: sub_002BAC98
// Address: 0x2bac98 - 0x2bae58
void sub_002BAC98_0x2bac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAC98_0x2bac98");
#endif

    switch (ctx->pc) {
        case 0x2bac98u: goto label_2bac98;
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca0u: goto label_2baca0;
        case 0x2baca4u: goto label_2baca4;
        case 0x2baca8u: goto label_2baca8;
        case 0x2bacacu: goto label_2bacac;
        case 0x2bacb0u: goto label_2bacb0;
        case 0x2bacb4u: goto label_2bacb4;
        case 0x2bacb8u: goto label_2bacb8;
        case 0x2bacbcu: goto label_2bacbc;
        case 0x2bacc0u: goto label_2bacc0;
        case 0x2bacc4u: goto label_2bacc4;
        case 0x2bacc8u: goto label_2bacc8;
        case 0x2bacccu: goto label_2baccc;
        case 0x2bacd0u: goto label_2bacd0;
        case 0x2bacd4u: goto label_2bacd4;
        case 0x2bacd8u: goto label_2bacd8;
        case 0x2bacdcu: goto label_2bacdc;
        case 0x2bace0u: goto label_2bace0;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bace8u: goto label_2bace8;
        case 0x2bacecu: goto label_2bacec;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bacf4u: goto label_2bacf4;
        case 0x2bacf8u: goto label_2bacf8;
        case 0x2bacfcu: goto label_2bacfc;
        case 0x2bad00u: goto label_2bad00;
        case 0x2bad04u: goto label_2bad04;
        case 0x2bad08u: goto label_2bad08;
        case 0x2bad0cu: goto label_2bad0c;
        case 0x2bad10u: goto label_2bad10;
        case 0x2bad14u: goto label_2bad14;
        case 0x2bad18u: goto label_2bad18;
        case 0x2bad1cu: goto label_2bad1c;
        case 0x2bad20u: goto label_2bad20;
        case 0x2bad24u: goto label_2bad24;
        case 0x2bad28u: goto label_2bad28;
        case 0x2bad2cu: goto label_2bad2c;
        case 0x2bad30u: goto label_2bad30;
        case 0x2bad34u: goto label_2bad34;
        case 0x2bad38u: goto label_2bad38;
        case 0x2bad3cu: goto label_2bad3c;
        case 0x2bad40u: goto label_2bad40;
        case 0x2bad44u: goto label_2bad44;
        case 0x2bad48u: goto label_2bad48;
        case 0x2bad4cu: goto label_2bad4c;
        case 0x2bad50u: goto label_2bad50;
        case 0x2bad54u: goto label_2bad54;
        case 0x2bad58u: goto label_2bad58;
        case 0x2bad5cu: goto label_2bad5c;
        case 0x2bad60u: goto label_2bad60;
        case 0x2bad64u: goto label_2bad64;
        case 0x2bad68u: goto label_2bad68;
        case 0x2bad6cu: goto label_2bad6c;
        case 0x2bad70u: goto label_2bad70;
        case 0x2bad74u: goto label_2bad74;
        case 0x2bad78u: goto label_2bad78;
        case 0x2bad7cu: goto label_2bad7c;
        case 0x2bad80u: goto label_2bad80;
        case 0x2bad84u: goto label_2bad84;
        case 0x2bad88u: goto label_2bad88;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bad90u: goto label_2bad90;
        case 0x2bad94u: goto label_2bad94;
        case 0x2bad98u: goto label_2bad98;
        case 0x2bad9cu: goto label_2bad9c;
        case 0x2bada0u: goto label_2bada0;
        case 0x2bada4u: goto label_2bada4;
        case 0x2bada8u: goto label_2bada8;
        case 0x2badacu: goto label_2badac;
        case 0x2badb0u: goto label_2badb0;
        case 0x2badb4u: goto label_2badb4;
        case 0x2badb8u: goto label_2badb8;
        case 0x2badbcu: goto label_2badbc;
        case 0x2badc0u: goto label_2badc0;
        case 0x2badc4u: goto label_2badc4;
        case 0x2badc8u: goto label_2badc8;
        case 0x2badccu: goto label_2badcc;
        case 0x2badd0u: goto label_2badd0;
        case 0x2badd4u: goto label_2badd4;
        case 0x2badd8u: goto label_2badd8;
        case 0x2baddcu: goto label_2baddc;
        case 0x2bade0u: goto label_2bade0;
        case 0x2bade4u: goto label_2bade4;
        case 0x2bade8u: goto label_2bade8;
        case 0x2badecu: goto label_2badec;
        case 0x2badf0u: goto label_2badf0;
        case 0x2badf4u: goto label_2badf4;
        case 0x2badf8u: goto label_2badf8;
        case 0x2badfcu: goto label_2badfc;
        case 0x2bae00u: goto label_2bae00;
        case 0x2bae04u: goto label_2bae04;
        case 0x2bae08u: goto label_2bae08;
        case 0x2bae0cu: goto label_2bae0c;
        case 0x2bae10u: goto label_2bae10;
        case 0x2bae14u: goto label_2bae14;
        case 0x2bae18u: goto label_2bae18;
        case 0x2bae1cu: goto label_2bae1c;
        case 0x2bae20u: goto label_2bae20;
        case 0x2bae24u: goto label_2bae24;
        case 0x2bae28u: goto label_2bae28;
        case 0x2bae2cu: goto label_2bae2c;
        case 0x2bae30u: goto label_2bae30;
        case 0x2bae34u: goto label_2bae34;
        case 0x2bae38u: goto label_2bae38;
        case 0x2bae3cu: goto label_2bae3c;
        case 0x2bae40u: goto label_2bae40;
        case 0x2bae44u: goto label_2bae44;
        case 0x2bae48u: goto label_2bae48;
        case 0x2bae4cu: goto label_2bae4c;
        case 0x2bae50u: goto label_2bae50;
        case 0x2bae54u: goto label_2bae54;
        default: break;
    }

    ctx->pc = 0x2bac98u;

label_2bac98:
    // 0x2bac98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2bac9c:
    // 0x2bac9c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2bac9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2baca0:
    // 0x2baca0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2baca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2baca4:
    // 0x2baca4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2baca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2baca8:
    // 0x2baca8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2baca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bacac:
    // 0x2bacac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2bacacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2bacb0:
    // 0x2bacb0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2bacb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2bacb4:
    // 0x2bacb4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bacb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2bacb8:
    // 0x2bacb8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bacb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2bacbc:
    // 0x2bacbc: 0xc09dcc6  jal         func_277318
label_2bacc0:
    if (ctx->pc == 0x2BACC0u) {
        ctx->pc = 0x2BACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACBCu;
        // 0x2bacc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACC4u;
        goto label_2bacc4;
    }
    ctx->pc = 0x2BACBCu;
    SET_GPR_U32(ctx, 31, 0x2BACC4u);
    ctx->pc = 0x2BACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACBCu;
    // 0x2bacc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2BACBCu, 0x2BACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACC4u;
label_2bacc4:
    // 0x2bacc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bacc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bacc8:
    // 0x2bacc8: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
label_2baccc:
    if (ctx->pc == 0x2BACCCu) {
        ctx->pc = 0x2BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC8u;
        // 0x2baccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACD0u;
        goto label_2bacd0;
    }
    ctx->pc = 0x2BACC8u;
    {
        const bool branch_taken_0x2bacc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC8u;
        // 0x2baccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacc8) {
            ctx->pc = 0x2BAE34u;
            goto label_2bae34;
        }
    }
    ctx->pc = 0x2BACD0u;
label_2bacd0:
    // 0x2bacd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bacd4:
    // 0x2bacd4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2bacd8:
    // 0x2bacd8: 0x40f809  jalr        $v0
label_2bacdc:
    if (ctx->pc == 0x2BACDCu) {
        ctx->pc = 0x2BACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD8u;
        // 0x2bacdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACE0u;
        goto label_2bace0;
    }
    ctx->pc = 0x2BACD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BACE0u);
        ctx->pc = 0x2BACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD8u;
        // 0x2bacdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BACD8u, 0x2BACE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BACE0u;
label_2bace0:
    // 0x2bace0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bace0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bace4:
    // 0x2bace4: 0xc0f52a8  jal         func_3D4AA0
label_2bace8:
    if (ctx->pc == 0x2BACE8u) {
        ctx->pc = 0x2BACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE4u;
        // 0x2bace8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACECu;
        goto label_2bacec;
    }
    ctx->pc = 0x2BACE4u;
    SET_GPR_U32(ctx, 31, 0x2BACECu);
    ctx->pc = 0x2BACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACE4u;
    // 0x2bace8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2BACE4u, 0x2BACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACECu;
label_2bacec:
    // 0x2bacec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bacecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bacf0:
    // 0x2bacf0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2bacf4:
    if (ctx->pc == 0x2BACF4u) {
        ctx->pc = 0x2BACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACF0u;
        // 0x2bacf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACF8u;
        goto label_2bacf8;
    }
    ctx->pc = 0x2BACF0u;
    {
        const bool branch_taken_0x2bacf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACF0u;
        // 0x2bacf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacf0) {
            ctx->pc = 0x2BAD30u;
            goto label_2bad30;
        }
    }
    ctx->pc = 0x2BACF8u;
label_2bacf8:
    // 0x2bacf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bacf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bacfc:
    // 0x2bacfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bacfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bad00:
    // 0x2bad00: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2bad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2bad04:
    // 0x2bad04: 0x40f809  jalr        $v0
label_2bad08:
    if (ctx->pc == 0x2BAD08u) {
        ctx->pc = 0x2BAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD04u;
        // 0x2bad08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD0Cu;
        goto label_2bad0c;
    }
    ctx->pc = 0x2BAD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BAD0Cu);
        ctx->pc = 0x2BAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD04u;
        // 0x2bad08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD04u, 0x2BAD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAD0Cu;
label_2bad0c:
    // 0x2bad0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bad10:
    // 0x2bad10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bad10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bad14:
    // 0x2bad14: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2bad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2bad18:
    // 0x2bad18: 0x40f809  jalr        $v0
label_2bad1c:
    if (ctx->pc == 0x2BAD1Cu) {
        ctx->pc = 0x2BAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD18u;
        // 0x2bad1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD20u;
        goto label_2bad20;
    }
    ctx->pc = 0x2BAD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BAD20u);
        ctx->pc = 0x2BAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD18u;
        // 0x2bad1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD18u, 0x2BAD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAD20u;
label_2bad20:
    // 0x2bad20: 0x12540005  beq         $s2, $s4, . + 4 + (0x5 << 2)
label_2bad24:
    if (ctx->pc == 0x2BAD24u) {
        ctx->pc = 0x2BAD28u;
        goto label_2bad28;
    }
    ctx->pc = 0x2BAD20u;
    {
        const bool branch_taken_0x2bad20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x2bad20) {
            ctx->pc = 0x2BAD38u;
            goto label_2bad38;
        }
    }
    ctx->pc = 0x2BAD28u;
label_2bad28:
    // 0x2bad28: 0xc0f528a  jal         func_3D4A28
label_2bad2c:
    if (ctx->pc == 0x2BAD2Cu) {
        ctx->pc = 0x2BAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD28u;
        // 0x2bad2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD30u;
        goto label_2bad30;
    }
    ctx->pc = 0x2BAD28u;
    SET_GPR_U32(ctx, 31, 0x2BAD30u);
    ctx->pc = 0x2BAD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD28u;
    // 0x2bad2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2BAD28u, 0x2BAD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD30u;
label_2bad30:
    // 0x2bad30: 0x10000040  b           . + 4 + (0x40 << 2)
label_2bad34:
    if (ctx->pc == 0x2BAD34u) {
        ctx->pc = 0x2BAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD30u;
        // 0x2bad34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD38u;
        goto label_2bad38;
    }
    ctx->pc = 0x2BAD30u;
    {
        const bool branch_taken_0x2bad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD30u;
        // 0x2bad34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad30) {
            ctx->pc = 0x2BAE34u;
            goto label_2bae34;
        }
    }
    ctx->pc = 0x2BAD38u;
label_2bad38:
    // 0x2bad38: 0x1a800033  blez        $s4, . + 4 + (0x33 << 2)
label_2bad3c:
    if (ctx->pc == 0x2BAD3Cu) {
        ctx->pc = 0x2BAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD38u;
        // 0x2bad3c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD40u;
        goto label_2bad40;
    }
    ctx->pc = 0x2BAD38u;
    {
        const bool branch_taken_0x2bad38 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2BAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD38u;
        // 0x2bad3c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad38) {
            ctx->pc = 0x2BAE08u;
            goto label_2bae08;
        }
    }
    ctx->pc = 0x2BAD40u;
label_2bad40:
    // 0x2bad40: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x2bad40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
label_2bad44:
    // 0x2bad44: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2bad44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
label_2bad48:
    // 0x2bad48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bad48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bad4c:
    // 0x2bad4c: 0x0  nop
    ctx->pc = 0x2bad4cu;
    // NOP
label_2bad50:
    // 0x2bad50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2bad54:
    // 0x2bad54: 0x3a62821  addu        $a1, $sp, $a2
    ctx->pc = 0x2bad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_2bad58:
    // 0x2bad58: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2bad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2bad5c:
    // 0x2bad5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2bad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2bad60:
    // 0x2bad60: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2bad60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2bad64:
    // 0x2bad64: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2bad64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2bad68:
    // 0x2bad68: 0x2cc30008  sltiu       $v1, $a2, 0x8
    ctx->pc = 0x2bad68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2bad6c:
    // 0x2bad6c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2bad6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2bad70:
    // 0x2bad70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2bad74:
    // 0x2bad74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bad78:
    // 0x2bad78: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_2bad7c:
    if (ctx->pc == 0x2BAD7Cu) {
        ctx->pc = 0x2BAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD78u;
        // 0x2bad7c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD80u;
        goto label_2bad80;
    }
    ctx->pc = 0x2BAD78u;
    {
        const bool branch_taken_0x2bad78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD78u;
        // 0x2bad7c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad78) {
            ctx->pc = 0x2BAD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bad50;
        }
    }
    ctx->pc = 0x2BAD80u;
label_2bad80:
    // 0x2bad80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2bad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2bad84:
    // 0x2bad84: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2bad88:
    if (ctx->pc == 0x2BAD88u) {
        ctx->pc = 0x2BAD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD84u;
        // 0x2bad88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD8Cu;
        goto label_2bad8c;
    }
    ctx->pc = 0x2BAD84u;
    {
        const bool branch_taken_0x2bad84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD84u;
        // 0x2bad88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad84) {
            ctx->pc = 0x2BADF8u;
            goto label_2badf8;
        }
    }
    ctx->pc = 0x2BAD8Cu;
label_2bad8c:
    // 0x2bad8c: 0x26450118  addiu       $a1, $s2, 0x118
    ctx->pc = 0x2bad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
label_2bad90:
    // 0x2bad90: 0xc0efcee  jal         func_3BF3B8
label_2bad94:
    if (ctx->pc == 0x2BAD94u) {
        ctx->pc = 0x2BAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD90u;
        // 0x2bad94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD98u;
        goto label_2bad98;
    }
    ctx->pc = 0x2BAD90u;
    SET_GPR_U32(ctx, 31, 0x2BAD98u);
    ctx->pc = 0x2BAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD90u;
    // 0x2bad94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x2BAD90u, 0x2BAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD98u;
label_2bad98:
    // 0x2bad98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2bad9c:
    if (ctx->pc == 0x2BAD9Cu) {
        ctx->pc = 0x2BAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD98u;
        // 0x2bad9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BADA0u;
        goto label_2bada0;
    }
    ctx->pc = 0x2BAD98u;
    {
        const bool branch_taken_0x2bad98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD98u;
        // 0x2bad9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad98) {
            ctx->pc = 0x2BADBCu;
            goto label_2badbc;
        }
    }
    ctx->pc = 0x2BADA0u;
label_2bada0:
    // 0x2bada0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2bada0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2bada4:
    // 0x2bada4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bada8:
    // 0x2bada8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bada8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2badac:
    // 0x2badac: 0xc0ae95a  jal         func_2BA568
label_2badb0:
    if (ctx->pc == 0x2BADB0u) {
        ctx->pc = 0x2BADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADACu;
        // 0x2badb0: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BADB4u;
        goto label_2badb4;
    }
    ctx->pc = 0x2BADACu;
    SET_GPR_U32(ctx, 31, 0x2BADB4u);
    ctx->pc = 0x2BADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADACu;
    // 0x2badb0: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA568u, 0x2BADACu, 0x2BADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADB4u;
label_2badb4:
    // 0x2badb4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2badb8:
    if (ctx->pc == 0x2BADB8u) {
        ctx->pc = 0x2BADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADB4u;
        // 0x2badb8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BADBCu;
        goto label_2badbc;
    }
    ctx->pc = 0x2BADB4u;
    {
        const bool branch_taken_0x2badb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADB4u;
        // 0x2badb8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badb4) {
            ctx->pc = 0x2BADFCu;
            goto label_2badfc;
        }
    }
    ctx->pc = 0x2BADBCu;
label_2badbc:
    // 0x2badbc: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2badbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_2badc0:
    // 0x2badc0: 0xc0efcee  jal         func_3BF3B8
label_2badc4:
    if (ctx->pc == 0x2BADC4u) {
        ctx->pc = 0x2BADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADC0u;
        // 0x2badc4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BADC8u;
        goto label_2badc8;
    }
    ctx->pc = 0x2BADC0u;
    SET_GPR_U32(ctx, 31, 0x2BADC8u);
    ctx->pc = 0x2BADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADC0u;
    // 0x2badc4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x2BADC0u, 0x2BADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADC8u;
label_2badc8:
    // 0x2badc8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2badcc:
    if (ctx->pc == 0x2BADCCu) {
        ctx->pc = 0x2BADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADC8u;
        // 0x2badcc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BADD0u;
        goto label_2badd0;
    }
    ctx->pc = 0x2BADC8u;
    {
        const bool branch_taken_0x2badc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADC8u;
        // 0x2badcc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badc8) {
            ctx->pc = 0x2BADECu;
            goto label_2badec;
        }
    }
    ctx->pc = 0x2BADD0u;
label_2badd0:
    // 0x2badd0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2badd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2badd4:
    // 0x2badd4: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x2badd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2badd8:
    // 0x2badd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2badd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baddc:
    // 0x2baddc: 0xc0aea06  jal         func_2BA818
label_2bade0:
    if (ctx->pc == 0x2BADE0u) {
        ctx->pc = 0x2BADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADDCu;
        // 0x2bade0: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BADE4u;
        goto label_2bade4;
    }
    ctx->pc = 0x2BADDCu;
    SET_GPR_U32(ctx, 31, 0x2BADE4u);
    ctx->pc = 0x2BADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADDCu;
    // 0x2bade0: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA818u, 0x2BADDCu, 0x2BADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADE4u;
label_2bade4:
    // 0x2bade4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2bade8:
    if (ctx->pc == 0x2BADE8u) {
        ctx->pc = 0x2BADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADE4u;
        // 0x2bade8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BADECu;
        goto label_2badec;
    }
    ctx->pc = 0x2BADE4u;
    {
        const bool branch_taken_0x2bade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADE4u;
        // 0x2bade8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bade4) {
            ctx->pc = 0x2BADFCu;
            goto label_2badfc;
        }
    }
    ctx->pc = 0x2BADECu;
label_2badec:
    // 0x2badec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2badecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2badf0:
    // 0x2badf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2badf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2badf4:
    // 0x2badf4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2badf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2badf8:
    // 0x2badf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2badf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2badfc:
    // 0x2badfc: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x2badfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2bae00:
    // 0x2bae00: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_2bae04:
    if (ctx->pc == 0x2BAE04u) {
        ctx->pc = 0x2BAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE00u;
        // 0x2bae04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE08u;
        goto label_2bae08;
    }
    ctx->pc = 0x2BAE00u;
    {
        const bool branch_taken_0x2bae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE00u;
        // 0x2bae04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae00) {
            ctx->pc = 0x2BAD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bad50;
        }
    }
    ctx->pc = 0x2BAE08u;
label_2bae08:
    // 0x2bae08: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2bae08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2bae0c:
    // 0x2bae0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2bae10:
    if (ctx->pc == 0x2BAE10u) {
        ctx->pc = 0x2BAE14u;
        goto label_2bae14;
    }
    ctx->pc = 0x2BAE0Cu;
    {
        const bool branch_taken_0x2bae0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae0c) {
            ctx->pc = 0x2BAE1Cu;
            goto label_2bae1c;
        }
    }
    ctx->pc = 0x2BAE14u;
label_2bae14:
    // 0x2bae14: 0xc0ae988  jal         func_2BA620
label_2bae18:
    if (ctx->pc == 0x2BAE18u) {
        ctx->pc = 0x2BAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE14u;
        // 0x2bae18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE1Cu;
        goto label_2bae1c;
    }
    ctx->pc = 0x2BAE14u;
    SET_GPR_U32(ctx, 31, 0x2BAE1Cu);
    ctx->pc = 0x2BAE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE14u;
    // 0x2bae18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA620u, 0x2BAE14u, 0x2BAE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE1Cu;
label_2bae1c:
    // 0x2bae1c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_2bae20:
    if (ctx->pc == 0x2BAE20u) {
        ctx->pc = 0x2BAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE1Cu;
        // 0x2bae20: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE24u;
        goto label_2bae24;
    }
    ctx->pc = 0x2BAE1Cu;
    {
        const bool branch_taken_0x2bae1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae1c) {
            ctx->pc = 0x2BAE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAE1Cu;
            // 0x2bae20: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAE30u;
            goto label_2bae30;
        }
    }
    ctx->pc = 0x2BAE24u;
label_2bae24:
    // 0x2bae24: 0xc0f528a  jal         func_3D4A28
label_2bae28:
    if (ctx->pc == 0x2BAE28u) {
        ctx->pc = 0x2BAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE24u;
        // 0x2bae28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE2Cu;
        goto label_2bae2c;
    }
    ctx->pc = 0x2BAE24u;
    SET_GPR_U32(ctx, 31, 0x2BAE2Cu);
    ctx->pc = 0x2BAE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE24u;
    // 0x2bae28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2BAE24u, 0x2BAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE2Cu;
label_2bae2c:
    // 0x2bae2c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2bae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2bae30:
    // 0x2bae30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2bae30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bae34:
    // 0x2bae34: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2bae34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bae38:
    // 0x2bae38: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2bae38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2bae3c:
    // 0x2bae3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2bae3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bae40:
    // 0x2bae40: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2bae40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2bae44:
    // 0x2bae44: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bae44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bae48:
    // 0x2bae48: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bae48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2bae4c:
    // 0x2bae4c: 0x3e00008  jr          $ra
label_2bae50:
    if (ctx->pc == 0x2BAE50u) {
        ctx->pc = 0x2BAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE4Cu;
        // 0x2bae50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE54u;
        goto label_2bae54;
    }
    ctx->pc = 0x2BAE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE4Cu;
        // 0x2bae50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAE54u;
label_2bae54:
    // 0x2bae54: 0x0  nop
    ctx->pc = 0x2bae54u;
    // NOP
    ctx->pc = 0x2bae58u;
}
