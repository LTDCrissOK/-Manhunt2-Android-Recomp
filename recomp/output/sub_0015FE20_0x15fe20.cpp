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

// Function: sub_0015FE20
// Address: 0x15fe20 - 0x15fed8
void sub_0015FE20_0x15fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FE20_0x15fe20");
#endif

    switch (ctx->pc) {
        case 0x15fe20u: goto label_15fe20;
        case 0x15fe24u: goto label_15fe24;
        case 0x15fe28u: goto label_15fe28;
        case 0x15fe2cu: goto label_15fe2c;
        case 0x15fe30u: goto label_15fe30;
        case 0x15fe34u: goto label_15fe34;
        case 0x15fe38u: goto label_15fe38;
        case 0x15fe3cu: goto label_15fe3c;
        case 0x15fe40u: goto label_15fe40;
        case 0x15fe44u: goto label_15fe44;
        case 0x15fe48u: goto label_15fe48;
        case 0x15fe4cu: goto label_15fe4c;
        case 0x15fe50u: goto label_15fe50;
        case 0x15fe54u: goto label_15fe54;
        case 0x15fe58u: goto label_15fe58;
        case 0x15fe5cu: goto label_15fe5c;
        case 0x15fe60u: goto label_15fe60;
        case 0x15fe64u: goto label_15fe64;
        case 0x15fe68u: goto label_15fe68;
        case 0x15fe6cu: goto label_15fe6c;
        case 0x15fe70u: goto label_15fe70;
        case 0x15fe74u: goto label_15fe74;
        case 0x15fe78u: goto label_15fe78;
        case 0x15fe7cu: goto label_15fe7c;
        case 0x15fe80u: goto label_15fe80;
        case 0x15fe84u: goto label_15fe84;
        case 0x15fe88u: goto label_15fe88;
        case 0x15fe8cu: goto label_15fe8c;
        case 0x15fe90u: goto label_15fe90;
        case 0x15fe94u: goto label_15fe94;
        case 0x15fe98u: goto label_15fe98;
        case 0x15fe9cu: goto label_15fe9c;
        case 0x15fea0u: goto label_15fea0;
        case 0x15fea4u: goto label_15fea4;
        case 0x15fea8u: goto label_15fea8;
        case 0x15feacu: goto label_15feac;
        case 0x15feb0u: goto label_15feb0;
        case 0x15feb4u: goto label_15feb4;
        case 0x15feb8u: goto label_15feb8;
        case 0x15febcu: goto label_15febc;
        case 0x15fec0u: goto label_15fec0;
        case 0x15fec4u: goto label_15fec4;
        case 0x15fec8u: goto label_15fec8;
        case 0x15feccu: goto label_15fecc;
        case 0x15fed0u: goto label_15fed0;
        case 0x15fed4u: goto label_15fed4;
        default: break;
    }

    ctx->pc = 0x15fe20u;

label_15fe20:
    // 0x15fe20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15fe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15fe24:
    // 0x15fe24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15fe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15fe28:
    // 0x15fe28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15fe2c:
    // 0x15fe2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15fe30:
    // 0x15fe30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_15fe34:
    // 0x15fe34: 0xc04f2bc  jal         func_13CAF0
label_15fe38:
    if (ctx->pc == 0x15FE38u) {
        ctx->pc = 0x15FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE34u;
        // 0x15fe38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE3Cu;
        goto label_15fe3c;
    }
    ctx->pc = 0x15FE34u;
    SET_GPR_U32(ctx, 31, 0x15FE3Cu);
    ctx->pc = 0x15FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE34u;
    // 0x15fe38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CAF0u, 0x15FE34u, 0x15FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE3Cu;
label_15fe3c:
    // 0x15fe3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15fe3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15fe40:
    // 0x15fe40: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15fe44:
    // 0x15fe44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fe48:
    // 0x15fe48: 0xc04f33e  jal         func_13CCF8
label_15fe4c:
    if (ctx->pc == 0x15FE4Cu) {
        ctx->pc = 0x15FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE48u;
        // 0x15fe4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE50u;
        goto label_15fe50;
    }
    ctx->pc = 0x15FE48u;
    SET_GPR_U32(ctx, 31, 0x15FE50u);
    ctx->pc = 0x15FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE48u;
    // 0x15fe4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15FE48u, 0x15FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE50u;
label_15fe50:
    // 0x15fe50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15fe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fe54:
    // 0x15fe54: 0xc04f0b6  jal         func_13C2D8
label_15fe58:
    if (ctx->pc == 0x15FE58u) {
        ctx->pc = 0x15FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE54u;
        // 0x15fe58: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE5Cu;
        goto label_15fe5c;
    }
    ctx->pc = 0x15FE54u;
    SET_GPR_U32(ctx, 31, 0x15FE5Cu);
    ctx->pc = 0x15FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE54u;
    // 0x15fe58: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15FE54u, 0x15FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE5Cu;
label_15fe5c:
    // 0x15fe5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15fe5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15fe60:
    // 0x15fe60: 0x8e0502e0  lw          $a1, 0x2E0($s0)
    ctx->pc = 0x15fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_15fe64:
    // 0x15fe64: 0xc045fea  jal         func_117FA8
label_15fe68:
    if (ctx->pc == 0x15FE68u) {
        ctx->pc = 0x15FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE64u;
        // 0x15fe68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE6Cu;
        goto label_15fe6c;
    }
    ctx->pc = 0x15FE64u;
    SET_GPR_U32(ctx, 31, 0x15FE6Cu);
    ctx->pc = 0x15FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE64u;
    // 0x15fe68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15FE64u, 0x15FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE6Cu;
label_15fe6c:
    // 0x15fe6c: 0xc60c02e8  lwc1        $f12, 0x2E8($s0)
    ctx->pc = 0x15fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15fe70:
    // 0x15fe70: 0xc046290  jal         func_118A40
label_15fe74:
    if (ctx->pc == 0x15FE74u) {
        ctx->pc = 0x15FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE70u;
        // 0x15fe74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE78u;
        goto label_15fe78;
    }
    ctx->pc = 0x15FE70u;
    SET_GPR_U32(ctx, 31, 0x15FE78u);
    ctx->pc = 0x15FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE70u;
    // 0x15fe74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x15FE70u, 0x15FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE78u;
label_15fe78:
    // 0x15fe78: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x15fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
label_15fe7c:
    // 0x15fe7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15fe80:
    if (ctx->pc == 0x15FE80u) {
        ctx->pc = 0x15FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE7Cu;
        // 0x15fe80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE84u;
        goto label_15fe84;
    }
    ctx->pc = 0x15FE7Cu;
    {
        const bool branch_taken_0x15fe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE7Cu;
        // 0x15fe80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe7c) {
            ctx->pc = 0x15FE8Cu;
            goto label_15fe8c;
        }
    }
    ctx->pc = 0x15FE84u;
label_15fe84:
    // 0x15fe84: 0xc046058  jal         func_118160
label_15fe88:
    if (ctx->pc == 0x15FE88u) {
        ctx->pc = 0x15FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE84u;
        // 0x15fe88: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE8Cu;
        goto label_15fe8c;
    }
    ctx->pc = 0x15FE84u;
    SET_GPR_U32(ctx, 31, 0x15FE8Cu);
    ctx->pc = 0x15FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE84u;
    // 0x15fe88: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x15FE84u, 0x15FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE8Cu;
label_15fe8c:
    // 0x15fe8c: 0x8e050314  lw          $a1, 0x314($s0)
    ctx->pc = 0x15fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_15fe90:
    // 0x15fe90: 0xc0461e8  jal         func_1187A0
label_15fe94:
    if (ctx->pc == 0x15FE94u) {
        ctx->pc = 0x15FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE90u;
        // 0x15fe94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE98u;
        goto label_15fe98;
    }
    ctx->pc = 0x15FE90u;
    SET_GPR_U32(ctx, 31, 0x15FE98u);
    ctx->pc = 0x15FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE90u;
    // 0x15fe94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x15FE90u, 0x15FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE98u;
label_15fe98:
    // 0x15fe98: 0x8e050b6c  lw          $a1, 0xB6C($s0)
    ctx->pc = 0x15fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2924)));
label_15fe9c:
    // 0x15fe9c: 0xc046190  jal         func_118640
label_15fea0:
    if (ctx->pc == 0x15FEA0u) {
        ctx->pc = 0x15FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE9Cu;
        // 0x15fea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEA4u;
        goto label_15fea4;
    }
    ctx->pc = 0x15FE9Cu;
    SET_GPR_U32(ctx, 31, 0x15FEA4u);
    ctx->pc = 0x15FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE9Cu;
    // 0x15fea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x15FE9Cu, 0x15FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FEA4u;
label_15fea4:
    // 0x15fea4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x15fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_15fea8:
    // 0x15fea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15fea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15feac:
    // 0x15feac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15feacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15feb0:
    // 0x15feb0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15feb4:
    // 0x15feb4: 0x40f809  jalr        $v0
label_15feb8:
    if (ctx->pc == 0x15FEB8u) {
        ctx->pc = 0x15FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB4u;
        // 0x15feb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEBCu;
        goto label_15febc;
    }
    ctx->pc = 0x15FEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FEBCu);
        ctx->pc = 0x15FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB4u;
        // 0x15feb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FEB4u, 0x15FEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FEBCu;
label_15febc:
    // 0x15febc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15febcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15fec0:
    // 0x15fec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15fec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15fec4:
    // 0x15fec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15fec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15fec8:
    // 0x15fec8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15fec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15fecc:
    // 0x15fecc: 0x3e00008  jr          $ra
label_15fed0:
    if (ctx->pc == 0x15FED0u) {
        ctx->pc = 0x15FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FECCu;
        // 0x15fed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FED4u;
        goto label_15fed4;
    }
    ctx->pc = 0x15FECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FECCu;
        // 0x15fed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FED4u;
label_15fed4:
    // 0x15fed4: 0x0  nop
    ctx->pc = 0x15fed4u;
    // NOP
    ctx->pc = 0x15fed8u;
}
