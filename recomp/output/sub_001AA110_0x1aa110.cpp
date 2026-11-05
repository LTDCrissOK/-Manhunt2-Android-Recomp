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

// Function: sub_001AA110
// Address: 0x1aa110 - 0x1aa2c8
void sub_001AA110_0x1aa110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA110_0x1aa110");
#endif

    switch (ctx->pc) {
        case 0x1aa138u: goto label_1aa138;
        case 0x1aa16cu: goto label_1aa16c;
        case 0x1aa180u: goto label_1aa180;
        case 0x1aa194u: goto label_1aa194;
        case 0x1aa23cu: goto label_1aa23c;
        case 0x1aa248u: goto label_1aa248;
        case 0x1aa264u: goto label_1aa264;
        case 0x1aa270u: goto label_1aa270;
        default: break;
    }

    ctx->pc = 0x1aa110u;

    // 0x1aa110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa120: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa124: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aa128: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1aa128u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1aa12c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1aa12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1aa130: 0xc06a4c0  jal         func_1A9300
    ctx->pc = 0x1AA130u;
    SET_GPR_U32(ctx, 31, 0x1AA138u);
    ctx->pc = 0x1AA134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA130u;
    // 0x1aa134: 0x8c520110  lw          $s2, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9300u, 0x1AA130u, 0x1AA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA138u;
label_1aa138:
    // 0x1aa138: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1aa138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1aa13c: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x1AA13Cu;
    {
        const bool branch_taken_0x1aa13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa13c) {
            ctx->pc = 0x1AA140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA13Cu;
            // 0x1aa140: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA2ACu;
            goto label_1aa2ac;
        }
    }
    ctx->pc = 0x1AA144u;
    // 0x1aa144: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1aa144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1aa148: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1aa148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1aa14c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aa14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aa150: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x1AA150u;
    {
        const bool branch_taken_0x1aa150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa150) {
            ctx->pc = 0x1AA154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA150u;
            // 0x1aa154: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA274u;
            goto label_1aa274;
        }
    }
    ctx->pc = 0x1AA158u;
    // 0x1aa158: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x1aa158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x1aa15c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA15Cu;
    {
        const bool branch_taken_0x1aa15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa15c) {
            ctx->pc = 0x1AA188u;
            goto label_1aa188;
        }
    }
    ctx->pc = 0x1AA164u;
    // 0x1aa164: 0xc075774  jal         func_1D5DD0
    ctx->pc = 0x1AA164u;
    SET_GPR_U32(ctx, 31, 0x1AA16Cu);
    ctx->pc = 0x1AA168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA164u;
    // 0x1aa168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DD0u, 0x1AA164u, 0x1AA16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA16Cu;
label_1aa16c:
    // 0x1aa16c: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1aa16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1aa170: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa174: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa178: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1AA178u;
    SET_GPR_U32(ctx, 31, 0x1AA180u);
    ctx->pc = 0x1AA17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA178u;
    // 0x1aa17c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1AA178u, 0x1AA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA180u;
label_1aa180:
    // 0x1aa180: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1AA180u;
    {
        const bool branch_taken_0x1aa180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA180u;
        // 0x1aa184: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa180) {
            ctx->pc = 0x1AA270u;
            goto label_1aa270;
        }
    }
    ctx->pc = 0x1AA188u;
label_1aa188:
    // 0x1aa188: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aa188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa18c: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1AA18Cu;
    SET_GPR_U32(ctx, 31, 0x1AA194u);
    ctx->pc = 0x1AA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA18Cu;
    // 0x1aa190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1AA18Cu, 0x1AA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA194u;
label_1aa194:
    // 0x1aa194: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1aa194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1aa198: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1aa198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1aa19c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1aa19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1aa1a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA1A0u;
    {
        const bool branch_taken_0x1aa1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1A0u;
        // 0x1aa1a4: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1a0) {
            ctx->pc = 0x1AA1C8u;
            goto label_1aa1c8;
        }
    }
    ctx->pc = 0x1AA1A8u;
    // 0x1aa1a8: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1aa1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1aa1ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1aa1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1aa1b0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1aa1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aa1b4: 0x24916a00  addiu       $s1, $a0, 0x6A00
    ctx->pc = 0x1aa1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 27136));
    // 0x1aa1b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1aa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1aa1bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1aa1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1aa1c0: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AA1C0u;
    {
        const bool branch_taken_0x1aa1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1c0) {
            ctx->pc = 0x1AA1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA1C0u;
            // 0x1aa1c4: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA250u;
            goto label_1aa250;
        }
    }
    ctx->pc = 0x1AA1C8u;
label_1aa1c8:
    // 0x1aa1c8: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x1aa1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1aa1cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1aa1d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1aa1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1aa1d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1aa1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1aa1d8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1aa1dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aa1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aa1e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA1E0u;
    {
        const bool branch_taken_0x1aa1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1E0u;
        // 0x1aa1e4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1e0) {
            ctx->pc = 0x1AA200u;
            goto label_1aa200;
        }
    }
    ctx->pc = 0x1AA1E8u;
    // 0x1aa1e8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1aa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1aa1ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA1ECu;
    {
        const bool branch_taken_0x1aa1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1ECu;
        // 0x1aa1f0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1ec) {
            ctx->pc = 0x1AA1FCu;
            goto label_1aa1fc;
        }
    }
    ctx->pc = 0x1AA1F4u;
    // 0x1aa1f4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA1F4u;
    {
        const bool branch_taken_0x1aa1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1F4u;
        // 0x1aa1f8: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1f4) {
            ctx->pc = 0x1AA20Cu;
            goto label_1aa20c;
        }
    }
    ctx->pc = 0x1AA1FCu;
label_1aa1fc:
    // 0x1aa1fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1aa1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1aa200:
    // 0x1aa200: 0xc4407180  lwc1        $f0, 0x7180($v0)
    ctx->pc = 0x1aa200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA204u;
    {
        const bool branch_taken_0x1aa204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA204u;
        // 0x1aa208: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa204) {
            ctx->pc = 0x1AA224u;
            goto label_1aa224;
        }
    }
    ctx->pc = 0x1AA20Cu;
label_1aa20c:
    // 0x1aa20c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA20Cu;
    {
        const bool branch_taken_0x1aa20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA20Cu;
        // 0x1aa210: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa20c) {
            ctx->pc = 0x1AA21Cu;
            goto label_1aa21c;
        }
    }
    ctx->pc = 0x1AA214u;
    // 0x1aa214: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA214u;
    {
        const bool branch_taken_0x1aa214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa214) {
            ctx->pc = 0x1AA218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA214u;
            // 0x1aa218: 0x8e0501e4  lw          $a1, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA228u;
            goto label_1aa228;
        }
    }
    ctx->pc = 0x1AA21Cu;
label_1aa21c:
    // 0x1aa21c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1aa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1aa220: 0xc4540948  lwc1        $f20, 0x948($v0)
    ctx->pc = 0x1aa220u;
    { uint32_t bits = FAST_READ32(0x3F0948u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1aa224:
    // 0x1aa224: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1aa224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1aa228:
    // 0x1aa228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa22c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa230: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aa230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa234: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1AA234u;
    SET_GPR_U32(ctx, 31, 0x1AA23Cu);
    ctx->pc = 0x1AA238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA234u;
    // 0x1aa238: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1AA234u, 0x1AA23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA23Cu;
label_1aa23c:
    // 0x1aa23c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1aa23cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1aa240: 0xc06a48c  jal         func_1A9230
    ctx->pc = 0x1AA240u;
    SET_GPR_U32(ctx, 31, 0x1AA248u);
    ctx->pc = 0x1AA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA240u;
    // 0x1aa244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9230u, 0x1AA240u, 0x1AA248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA248u;
label_1aa248:
    // 0x1aa248: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AA248u;
    {
        const bool branch_taken_0x1aa248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA248u;
        // 0x1aa24c: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa248) {
            ctx->pc = 0x1AA274u;
            goto label_1aa274;
        }
    }
    ctx->pc = 0x1AA250u;
label_1aa250:
    // 0x1aa250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa258: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aa258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa25c: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1AA25Cu;
    SET_GPR_U32(ctx, 31, 0x1AA264u);
    ctx->pc = 0x1AA260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA25Cu;
    // 0x1aa260: 0x8e0501e4  lw          $a1, 0x1E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1AA25Cu, 0x1AA264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA264u;
label_1aa264:
    // 0x1aa264: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1aa264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa268: 0xc06a48c  jal         func_1A9230
    ctx->pc = 0x1AA268u;
    SET_GPR_U32(ctx, 31, 0x1AA270u);
    ctx->pc = 0x1AA26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA268u;
    // 0x1aa26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9230u, 0x1AA268u, 0x1AA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA270u;
label_1aa270:
    // 0x1aa270: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x1aa270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1aa274:
    // 0x1aa274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aa278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa27c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1aa27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa280: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1aa280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1aa284: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1aa284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1aa288: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aa288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa28c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1aa28cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1aa290: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1aa290u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1aa294: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1aa294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa298: 0x0  nop
    ctx->pc = 0x1aa298u;
    // NOP
    // 0x1aa29c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA29Cu;
    {
        const bool branch_taken_0x1aa29c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA29Cu;
        // 0x1aa2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa29c) {
            ctx->pc = 0x1AA2A8u;
            goto label_1aa2a8;
        }
    }
    ctx->pc = 0x1AA2A4u;
    // 0x1aa2a4: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1aa2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_1aa2a8:
    // 0x1aa2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa2ac:
    // 0x1aa2ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa2acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa2b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa2b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa2b8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1aa2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2BCu;
        // 0x1aa2c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA2C4u;
    // 0x1aa2c4: 0x0  nop
    ctx->pc = 0x1aa2c4u;
    // NOP
    ctx->pc = 0x1aa2c8u;
}
