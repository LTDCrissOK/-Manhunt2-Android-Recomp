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

// Function: sub_0020F148
// Address: 0x20f148 - 0x20f278
void sub_0020F148_0x20f148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F148_0x20f148");
#endif

    switch (ctx->pc) {
        case 0x20f148u: goto label_20f148;
        case 0x20f14cu: goto label_20f14c;
        case 0x20f150u: goto label_20f150;
        case 0x20f154u: goto label_20f154;
        case 0x20f158u: goto label_20f158;
        case 0x20f15cu: goto label_20f15c;
        case 0x20f160u: goto label_20f160;
        case 0x20f164u: goto label_20f164;
        case 0x20f168u: goto label_20f168;
        case 0x20f16cu: goto label_20f16c;
        case 0x20f170u: goto label_20f170;
        case 0x20f174u: goto label_20f174;
        case 0x20f178u: goto label_20f178;
        case 0x20f17cu: goto label_20f17c;
        case 0x20f180u: goto label_20f180;
        case 0x20f184u: goto label_20f184;
        case 0x20f188u: goto label_20f188;
        case 0x20f18cu: goto label_20f18c;
        case 0x20f190u: goto label_20f190;
        case 0x20f194u: goto label_20f194;
        case 0x20f198u: goto label_20f198;
        case 0x20f19cu: goto label_20f19c;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1a4u: goto label_20f1a4;
        case 0x20f1a8u: goto label_20f1a8;
        case 0x20f1acu: goto label_20f1ac;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1b4u: goto label_20f1b4;
        case 0x20f1b8u: goto label_20f1b8;
        case 0x20f1bcu: goto label_20f1bc;
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1c4u: goto label_20f1c4;
        case 0x20f1c8u: goto label_20f1c8;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f1d0u: goto label_20f1d0;
        case 0x20f1d4u: goto label_20f1d4;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1dcu: goto label_20f1dc;
        case 0x20f1e0u: goto label_20f1e0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f1e8u: goto label_20f1e8;
        case 0x20f1ecu: goto label_20f1ec;
        case 0x20f1f0u: goto label_20f1f0;
        case 0x20f1f4u: goto label_20f1f4;
        case 0x20f1f8u: goto label_20f1f8;
        case 0x20f1fcu: goto label_20f1fc;
        case 0x20f200u: goto label_20f200;
        case 0x20f204u: goto label_20f204;
        case 0x20f208u: goto label_20f208;
        case 0x20f20cu: goto label_20f20c;
        case 0x20f210u: goto label_20f210;
        case 0x20f214u: goto label_20f214;
        case 0x20f218u: goto label_20f218;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f220u: goto label_20f220;
        case 0x20f224u: goto label_20f224;
        case 0x20f228u: goto label_20f228;
        case 0x20f22cu: goto label_20f22c;
        case 0x20f230u: goto label_20f230;
        case 0x20f234u: goto label_20f234;
        case 0x20f238u: goto label_20f238;
        case 0x20f23cu: goto label_20f23c;
        case 0x20f240u: goto label_20f240;
        case 0x20f244u: goto label_20f244;
        case 0x20f248u: goto label_20f248;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f250u: goto label_20f250;
        case 0x20f254u: goto label_20f254;
        case 0x20f258u: goto label_20f258;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f260u: goto label_20f260;
        case 0x20f264u: goto label_20f264;
        case 0x20f268u: goto label_20f268;
        case 0x20f26cu: goto label_20f26c;
        case 0x20f270u: goto label_20f270;
        case 0x20f274u: goto label_20f274;
        default: break;
    }

    ctx->pc = 0x20f148u;

label_20f148:
    // 0x20f148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20f14c:
    // 0x20f14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20f150:
    // 0x20f150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20f154:
    // 0x20f154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20f158:
    // 0x20f158: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20f158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f15c:
    // 0x20f15c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20f160:
    // 0x20f160: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x20f160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_20f164:
    // 0x20f164: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20f168:
    // 0x20f168: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_20f16c:
    if (ctx->pc == 0x20F16Cu) {
        ctx->pc = 0x20F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F168u;
        // 0x20f16c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F170u;
        goto label_20f170;
    }
    ctx->pc = 0x20F168u;
    {
        const bool branch_taken_0x20f168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F168u;
        // 0x20f16c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f168) {
            ctx->pc = 0x20F25Cu;
            goto label_20f25c;
        }
    }
    ctx->pc = 0x20F170u;
label_20f170:
    // 0x20f170: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x20f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_20f174:
    // 0x20f174: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x20f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_20f178:
    // 0x20f178: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_20f17c:
    if (ctx->pc == 0x20F17Cu) {
        ctx->pc = 0x20F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F178u;
        // 0x20f17c: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F180u;
        goto label_20f180;
    }
    ctx->pc = 0x20F178u;
    {
        const bool branch_taken_0x20f178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F178u;
        // 0x20f17c: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f178) {
            ctx->pc = 0x20F23Cu;
            goto label_20f23c;
        }
    }
    ctx->pc = 0x20F180u;
label_20f180:
    // 0x20f180: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x20f180u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_20f184:
    // 0x20f184: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x20f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_20f188:
    // 0x20f188: 0x40f809  jalr        $v0
label_20f18c:
    if (ctx->pc == 0x20F18Cu) {
        ctx->pc = 0x20F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F188u;
        // 0x20f18c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F190u;
        goto label_20f190;
    }
    ctx->pc = 0x20F188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F190u);
        ctx->pc = 0x20F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F188u;
        // 0x20f18c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F188u, 0x20F190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F190u;
label_20f190:
    // 0x20f190: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_20f194:
    if (ctx->pc == 0x20F194u) {
        ctx->pc = 0x20F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F190u;
        // 0x20f194: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F198u;
        goto label_20f198;
    }
    ctx->pc = 0x20F190u;
    {
        const bool branch_taken_0x20f190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F190u;
        // 0x20f194: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f190) {
            ctx->pc = 0x20F1B8u;
            goto label_20f1b8;
        }
    }
    ctx->pc = 0x20F198u;
label_20f198:
    // 0x20f198: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x20f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_20f19c:
    // 0x20f19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20f19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f1a0:
    // 0x20f1a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f1a4:
    // 0x20f1a4: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x20f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_20f1a8:
    // 0x20f1a8: 0x40f809  jalr        $v0
label_20f1ac:
    if (ctx->pc == 0x20F1ACu) {
        ctx->pc = 0x20F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1A8u;
        // 0x20f1ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1B0u;
        goto label_20f1b0;
    }
    ctx->pc = 0x20F1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F1B0u);
        ctx->pc = 0x20F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1A8u;
        // 0x20f1ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1A8u, 0x20F1B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F1B0u;
label_20f1b0:
    // 0x20f1b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20f1b4:
    if (ctx->pc == 0x20F1B4u) {
        ctx->pc = 0x20F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1B0u;
        // 0x20f1b4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1B8u;
        goto label_20f1b8;
    }
    ctx->pc = 0x20F1B0u;
    {
        const bool branch_taken_0x20f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1B0u;
        // 0x20f1b4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1b0) {
            ctx->pc = 0x20F1BCu;
            goto label_20f1bc;
        }
    }
    ctx->pc = 0x20F1B8u;
label_20f1b8:
    // 0x20f1b8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x20f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_20f1bc:
    // 0x20f1bc: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x20f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_20f1c0:
    // 0x20f1c0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x20f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_20f1c4:
    // 0x20f1c4: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x20f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_20f1c8:
    // 0x20f1c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20f1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_20f1cc:
    // 0x20f1cc: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_20f1d0:
    if (ctx->pc == 0x20F1D0u) {
        ctx->pc = 0x20F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1CCu;
        // 0x20f1d0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1D4u;
        goto label_20f1d4;
    }
    ctx->pc = 0x20F1CCu;
    {
        const bool branch_taken_0x20f1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1CCu;
        // 0x20f1d0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1cc) {
            ctx->pc = 0x20F1E8u;
            goto label_20f1e8;
        }
    }
    ctx->pc = 0x20F1D4u;
label_20f1d4:
    // 0x20f1d4: 0xde4200c0  ld          $v0, 0xC0($s2)
    ctx->pc = 0x20f1d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 192)));
label_20f1d8:
    // 0x20f1d8: 0x3c030180  lui         $v1, 0x180
    ctx->pc = 0x20f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
label_20f1dc:
    // 0x20f1dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20f1e0:
    // 0x20f1e0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_20f1e4:
    if (ctx->pc == 0x20F1E4u) {
        ctx->pc = 0x20F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1E0u;
        // 0x20f1e4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1E8u;
        goto label_20f1e8;
    }
    ctx->pc = 0x20F1E0u;
    {
        const bool branch_taken_0x20f1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1E0u;
        // 0x20f1e4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1e0) {
            ctx->pc = 0x20F258u;
            goto label_20f258;
        }
    }
    ctx->pc = 0x20F1E8u;
label_20f1e8:
    // 0x20f1e8: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x20f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_20f1ec:
    // 0x20f1ec: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x20f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_20f1f0:
    // 0x20f1f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20f1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_20f1f4:
    // 0x20f1f4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_20f1f8:
    if (ctx->pc == 0x20F1F8u) {
        ctx->pc = 0x20F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F4u;
        // 0x20f1f8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1FCu;
        goto label_20f1fc;
    }
    ctx->pc = 0x20F1F4u;
    {
        const bool branch_taken_0x20f1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F4u;
        // 0x20f1f8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1f4) {
            ctx->pc = 0x20F210u;
            goto label_20f210;
        }
    }
    ctx->pc = 0x20F1FCu;
label_20f1fc:
    // 0x20f1fc: 0xde0200c0  ld          $v0, 0xC0($s0)
    ctx->pc = 0x20f1fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 192)));
label_20f200:
    // 0x20f200: 0x3c030180  lui         $v1, 0x180
    ctx->pc = 0x20f200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
label_20f204:
    // 0x20f204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20f204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20f208:
    // 0x20f208: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_20f20c:
    if (ctx->pc == 0x20F20Cu) {
        ctx->pc = 0x20F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F208u;
        // 0x20f20c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F210u;
        goto label_20f210;
    }
    ctx->pc = 0x20F208u;
    {
        const bool branch_taken_0x20f208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F208u;
        // 0x20f20c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f208) {
            ctx->pc = 0x20F258u;
            goto label_20f258;
        }
    }
    ctx->pc = 0x20F210u;
label_20f210:
    // 0x20f210: 0x8cc200b0  lw          $v0, 0xB0($a2)
    ctx->pc = 0x20f210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
label_20f214:
    // 0x20f214: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x20f214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_20f218:
    // 0x20f218: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_20f21c:
    // 0x20f21c: 0x14440010  bne         $v0, $a0, . + 4 + (0x10 << 2)
label_20f220:
    if (ctx->pc == 0x20F220u) {
        ctx->pc = 0x20F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F21Cu;
        // 0x20f220: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F224u;
        goto label_20f224;
    }
    ctx->pc = 0x20F21Cu;
    {
        const bool branch_taken_0x20f21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F21Cu;
        // 0x20f220: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f21c) {
            ctx->pc = 0x20F260u;
            goto label_20f260;
        }
    }
    ctx->pc = 0x20F224u;
label_20f224:
    // 0x20f224: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x20f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
label_20f228:
    // 0x20f228: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20f228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_20f22c:
    // 0x20f22c: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
label_20f230:
    if (ctx->pc == 0x20F230u) {
        ctx->pc = 0x20F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F22Cu;
        // 0x20f230: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F234u;
        goto label_20f234;
    }
    ctx->pc = 0x20F22Cu;
    {
        const bool branch_taken_0x20f22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20f22c) {
            ctx->pc = 0x20F230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F22Cu;
            // 0x20f230: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F264u;
            goto label_20f264;
        }
    }
    ctx->pc = 0x20F234u;
label_20f234:
    // 0x20f234: 0x10000008  b           . + 4 + (0x8 << 2)
label_20f238:
    if (ctx->pc == 0x20F238u) {
        ctx->pc = 0x20F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F234u;
        // 0x20f238: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F23Cu;
        goto label_20f23c;
    }
    ctx->pc = 0x20F234u;
    {
        const bool branch_taken_0x20f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F234u;
        // 0x20f238: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f234) {
            ctx->pc = 0x20F258u;
            goto label_20f258;
        }
    }
    ctx->pc = 0x20F23Cu;
label_20f23c:
    // 0x20f23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f240:
    // 0x20f240: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f244:
    // 0x20f244: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x20f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_20f248:
    // 0x20f248: 0x40f809  jalr        $v0
label_20f24c:
    if (ctx->pc == 0x20F24Cu) {
        ctx->pc = 0x20F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F248u;
        // 0x20f24c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F250u;
        goto label_20f250;
    }
    ctx->pc = 0x20F248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F250u);
        ctx->pc = 0x20F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F248u;
        // 0x20f24c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F248u, 0x20F250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F250u;
label_20f250:
    // 0x20f250: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20f254:
    if (ctx->pc == 0x20F254u) {
        ctx->pc = 0x20F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F250u;
        // 0x20f254: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F258u;
        goto label_20f258;
    }
    ctx->pc = 0x20F250u;
    {
        const bool branch_taken_0x20f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F250u;
        // 0x20f254: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f250) {
            ctx->pc = 0x20F25Cu;
            goto label_20f25c;
        }
    }
    ctx->pc = 0x20F258u;
label_20f258:
    // 0x20f258: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x20f258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_20f25c:
    // 0x20f25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f260:
    // 0x20f260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20f264:
    // 0x20f264: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20f264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f268:
    // 0x20f268: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20f268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20f26c:
    // 0x20f26c: 0x3e00008  jr          $ra
label_20f270:
    if (ctx->pc == 0x20F270u) {
        ctx->pc = 0x20F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F26Cu;
        // 0x20f270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F274u;
        goto label_20f274;
    }
    ctx->pc = 0x20F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F26Cu;
        // 0x20f270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F274u;
label_20f274:
    // 0x20f274: 0x0  nop
    ctx->pc = 0x20f274u;
    // NOP
    ctx->pc = 0x20f278u;
}
