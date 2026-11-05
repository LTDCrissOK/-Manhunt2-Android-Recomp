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

// Function: sub_003E0130
// Address: 0x3e0130 - 0x3e02f8
void sub_003E0130_0x3e0130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0130_0x3e0130");
#endif

    switch (ctx->pc) {
        case 0x3e0130u: goto label_3e0130;
        case 0x3e0134u: goto label_3e0134;
        case 0x3e0138u: goto label_3e0138;
        case 0x3e013cu: goto label_3e013c;
        case 0x3e0140u: goto label_3e0140;
        case 0x3e0144u: goto label_3e0144;
        case 0x3e0148u: goto label_3e0148;
        case 0x3e014cu: goto label_3e014c;
        case 0x3e0150u: goto label_3e0150;
        case 0x3e0154u: goto label_3e0154;
        case 0x3e0158u: goto label_3e0158;
        case 0x3e015cu: goto label_3e015c;
        case 0x3e0160u: goto label_3e0160;
        case 0x3e0164u: goto label_3e0164;
        case 0x3e0168u: goto label_3e0168;
        case 0x3e016cu: goto label_3e016c;
        case 0x3e0170u: goto label_3e0170;
        case 0x3e0174u: goto label_3e0174;
        case 0x3e0178u: goto label_3e0178;
        case 0x3e017cu: goto label_3e017c;
        case 0x3e0180u: goto label_3e0180;
        case 0x3e0184u: goto label_3e0184;
        case 0x3e0188u: goto label_3e0188;
        case 0x3e018cu: goto label_3e018c;
        case 0x3e0190u: goto label_3e0190;
        case 0x3e0194u: goto label_3e0194;
        case 0x3e0198u: goto label_3e0198;
        case 0x3e019cu: goto label_3e019c;
        case 0x3e01a0u: goto label_3e01a0;
        case 0x3e01a4u: goto label_3e01a4;
        case 0x3e01a8u: goto label_3e01a8;
        case 0x3e01acu: goto label_3e01ac;
        case 0x3e01b0u: goto label_3e01b0;
        case 0x3e01b4u: goto label_3e01b4;
        case 0x3e01b8u: goto label_3e01b8;
        case 0x3e01bcu: goto label_3e01bc;
        case 0x3e01c0u: goto label_3e01c0;
        case 0x3e01c4u: goto label_3e01c4;
        case 0x3e01c8u: goto label_3e01c8;
        case 0x3e01ccu: goto label_3e01cc;
        case 0x3e01d0u: goto label_3e01d0;
        case 0x3e01d4u: goto label_3e01d4;
        case 0x3e01d8u: goto label_3e01d8;
        case 0x3e01dcu: goto label_3e01dc;
        case 0x3e01e0u: goto label_3e01e0;
        case 0x3e01e4u: goto label_3e01e4;
        case 0x3e01e8u: goto label_3e01e8;
        case 0x3e01ecu: goto label_3e01ec;
        case 0x3e01f0u: goto label_3e01f0;
        case 0x3e01f4u: goto label_3e01f4;
        case 0x3e01f8u: goto label_3e01f8;
        case 0x3e01fcu: goto label_3e01fc;
        case 0x3e0200u: goto label_3e0200;
        case 0x3e0204u: goto label_3e0204;
        case 0x3e0208u: goto label_3e0208;
        case 0x3e020cu: goto label_3e020c;
        case 0x3e0210u: goto label_3e0210;
        case 0x3e0214u: goto label_3e0214;
        case 0x3e0218u: goto label_3e0218;
        case 0x3e021cu: goto label_3e021c;
        case 0x3e0220u: goto label_3e0220;
        case 0x3e0224u: goto label_3e0224;
        case 0x3e0228u: goto label_3e0228;
        case 0x3e022cu: goto label_3e022c;
        case 0x3e0230u: goto label_3e0230;
        case 0x3e0234u: goto label_3e0234;
        case 0x3e0238u: goto label_3e0238;
        case 0x3e023cu: goto label_3e023c;
        case 0x3e0240u: goto label_3e0240;
        case 0x3e0244u: goto label_3e0244;
        case 0x3e0248u: goto label_3e0248;
        case 0x3e024cu: goto label_3e024c;
        case 0x3e0250u: goto label_3e0250;
        case 0x3e0254u: goto label_3e0254;
        case 0x3e0258u: goto label_3e0258;
        case 0x3e025cu: goto label_3e025c;
        case 0x3e0260u: goto label_3e0260;
        case 0x3e0264u: goto label_3e0264;
        case 0x3e0268u: goto label_3e0268;
        case 0x3e026cu: goto label_3e026c;
        case 0x3e0270u: goto label_3e0270;
        case 0x3e0274u: goto label_3e0274;
        case 0x3e0278u: goto label_3e0278;
        case 0x3e027cu: goto label_3e027c;
        case 0x3e0280u: goto label_3e0280;
        case 0x3e0284u: goto label_3e0284;
        case 0x3e0288u: goto label_3e0288;
        case 0x3e028cu: goto label_3e028c;
        case 0x3e0290u: goto label_3e0290;
        case 0x3e0294u: goto label_3e0294;
        case 0x3e0298u: goto label_3e0298;
        case 0x3e029cu: goto label_3e029c;
        case 0x3e02a0u: goto label_3e02a0;
        case 0x3e02a4u: goto label_3e02a4;
        case 0x3e02a8u: goto label_3e02a8;
        case 0x3e02acu: goto label_3e02ac;
        case 0x3e02b0u: goto label_3e02b0;
        case 0x3e02b4u: goto label_3e02b4;
        case 0x3e02b8u: goto label_3e02b8;
        case 0x3e02bcu: goto label_3e02bc;
        case 0x3e02c0u: goto label_3e02c0;
        case 0x3e02c4u: goto label_3e02c4;
        case 0x3e02c8u: goto label_3e02c8;
        case 0x3e02ccu: goto label_3e02cc;
        case 0x3e02d0u: goto label_3e02d0;
        case 0x3e02d4u: goto label_3e02d4;
        case 0x3e02d8u: goto label_3e02d8;
        case 0x3e02dcu: goto label_3e02dc;
        case 0x3e02e0u: goto label_3e02e0;
        case 0x3e02e4u: goto label_3e02e4;
        case 0x3e02e8u: goto label_3e02e8;
        case 0x3e02ecu: goto label_3e02ec;
        case 0x3e02f0u: goto label_3e02f0;
        case 0x3e02f4u: goto label_3e02f4;
        default: break;
    }

    ctx->pc = 0x3e0130u;

label_3e0130:
    // 0x3e0130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e0134:
    // 0x3e0134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e0134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e0138:
    // 0x3e0138: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e0138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3e013c:
    // 0x3e013c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e013cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0140:
    // 0x3e0140: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e0140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3e0144:
    // 0x3e0144: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e0144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e0148:
    // 0x3e0148: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e0148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3e014c:
    // 0x3e014c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e014cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0150:
    // 0x3e0150: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e0150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_3e0154:
    // 0x3e0154: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e0154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0158:
    // 0x3e0158: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e0158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_3e015c:
    // 0x3e015c: 0x26150008  addiu       $s5, $s0, 0x8
    ctx->pc = 0x3e015cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3e0160:
    // 0x3e0160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e0160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3e0164:
    // 0x3e0164: 0x24161000  addiu       $s6, $zero, 0x1000
    ctx->pc = 0x3e0164u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_3e0168:
    // 0x3e0168: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3e016c:
    if (ctx->pc == 0x3E016Cu) {
        ctx->pc = 0x3E016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0168u;
        // 0x3e016c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0170u;
        goto label_3e0170;
    }
    ctx->pc = 0x3E0168u;
    {
        const bool branch_taken_0x3e0168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0168u;
        // 0x3e016c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0168) {
            ctx->pc = 0x3E0294u;
            goto label_3e0294;
        }
    }
    ctx->pc = 0x3E0170u;
label_3e0170:
    // 0x3e0170: 0x26021008  addiu       $v0, $s0, 0x1008
    ctx->pc = 0x3e0170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4104));
label_3e0174:
    // 0x3e0174: 0xae16202c  sw          $s6, 0x202C($s0)
    ctx->pc = 0x3e0174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8236), GPR_U32(ctx, 22));
label_3e0178:
    // 0x3e0178: 0xae022028  sw          $v0, 0x2028($s0)
    ctx->pc = 0x3e0178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8232), GPR_U32(ctx, 2));
label_3e017c:
    // 0x3e017c: 0x1000000f  b           . + 4 + (0xF << 2)
label_3e0180:
    if (ctx->pc == 0x3E0180u) {
        ctx->pc = 0x3E0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E017Cu;
        // 0x3e0180: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0184u;
        goto label_3e0184;
    }
    ctx->pc = 0x3E017Cu;
    {
        const bool branch_taken_0x3e017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E017Cu;
        // 0x3e0180: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e017c) {
            ctx->pc = 0x3E01BCu;
            goto label_3e01bc;
        }
    }
    ctx->pc = 0x3E0184u;
label_3e0184:
    // 0x3e0184: 0x0  nop
    ctx->pc = 0x3e0184u;
    // NOP
label_3e0188:
    // 0x3e0188: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3e018c:
    if (ctx->pc == 0x3E018Cu) {
        ctx->pc = 0x3E018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0188u;
        // 0x3e018c: 0x26042018  addiu       $a0, $s0, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0190u;
        goto label_3e0190;
    }
    ctx->pc = 0x3E0188u;
    {
        const bool branch_taken_0x3e0188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0188u;
        // 0x3e018c: 0x26042018  addiu       $a0, $s0, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0188) {
            ctx->pc = 0x3E01B4u;
            goto label_3e01b4;
        }
    }
    ctx->pc = 0x3E0190u;
label_3e0190:
    // 0x3e0190: 0xae152018  sw          $s5, 0x2018($s0)
    ctx->pc = 0x3e0190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8216), GPR_U32(ctx, 21));
label_3e0194:
    // 0x3e0194: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e0194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e0198:
    // 0x3e0198: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e0198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e019c:
    // 0x3e019c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e01a0:
    // 0x3e01a0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3e01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3e01a4:
    // 0x3e01a4: 0x40f809  jalr        $v0
label_3e01a8:
    if (ctx->pc == 0x3E01A8u) {
        ctx->pc = 0x3E01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01A4u;
        // 0x3e01a8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01ACu;
        goto label_3e01ac;
    }
    ctx->pc = 0x3E01A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E01ACu);
        ctx->pc = 0x3E01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01A4u;
        // 0x3e01a8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E01A4u, 0x3E01ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E01ACu;
label_3e01ac:
    // 0x3e01ac: 0xae02201c  sw          $v0, 0x201C($s0)
    ctx->pc = 0x3e01acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8220), GPR_U32(ctx, 2));
label_3e01b0:
    // 0x3e01b0: 0x26042018  addiu       $a0, $s0, 0x2018
    ctx->pc = 0x3e01b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
label_3e01b4:
    // 0x3e01b4: 0xc0e03c2  jal         func_380F08
label_3e01b8:
    if (ctx->pc == 0x3E01B8u) {
        ctx->pc = 0x3E01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01B4u;
        // 0x3e01b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01BCu;
        goto label_3e01bc;
    }
    ctx->pc = 0x3E01B4u;
    SET_GPR_U32(ctx, 31, 0x3E01BCu);
    ctx->pc = 0x3E01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E01B4u;
    // 0x3e01b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380F08u, 0x3E01B4u, 0x3E01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E01BCu;
label_3e01bc:
    // 0x3e01bc: 0x8e02202c  lw          $v0, 0x202C($s0)
    ctx->pc = 0x3e01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8236)));
label_3e01c0:
    // 0x3e01c0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3e01c4:
    if (ctx->pc == 0x3E01C4u) {
        ctx->pc = 0x3E01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01C0u;
        // 0x3e01c4: 0xae112014  sw          $s1, 0x2014($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8212), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01C8u;
        goto label_3e01c8;
    }
    ctx->pc = 0x3E01C0u;
    {
        const bool branch_taken_0x3e01c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e01c0) {
            ctx->pc = 0x3E01C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E01C0u;
            // 0x3e01c4: 0xae112014  sw          $s1, 0x2014($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8212), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E01F8u;
            goto label_3e01f8;
        }
    }
    ctx->pc = 0x3E01C8u;
label_3e01c8:
    // 0x3e01c8: 0x8e02201c  lw          $v0, 0x201C($s0)
    ctx->pc = 0x3e01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8220)));
label_3e01cc:
    // 0x3e01cc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3e01d0:
    if (ctx->pc == 0x3E01D0u) {
        ctx->pc = 0x3E01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01CCu;
        // 0x3e01d0: 0x26042018  addiu       $a0, $s0, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01D4u;
        goto label_3e01d4;
    }
    ctx->pc = 0x3E01CCu;
    {
        const bool branch_taken_0x3e01cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01CCu;
        // 0x3e01d0: 0x26042018  addiu       $a0, $s0, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e01cc) {
            ctx->pc = 0x3E01B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e01b4;
        }
    }
    ctx->pc = 0x3E01D4u;
label_3e01d4:
    // 0x3e01d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e01d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e01d8:
    // 0x3e01d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e01dc:
    // 0x3e01dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3e01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3e01e0:
    // 0x3e01e0: 0x40f809  jalr        $v0
label_3e01e4:
    if (ctx->pc == 0x3E01E4u) {
        ctx->pc = 0x3E01E8u;
        goto label_3e01e8;
    }
    ctx->pc = 0x3E01E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E01E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E01E0u, 0x3E01E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E01E8u;
label_3e01e8:
    // 0x3e01e8: 0x5040ffe7  beql        $v0, $zero, . + 4 + (-0x19 << 2)
label_3e01ec:
    if (ctx->pc == 0x3E01ECu) {
        ctx->pc = 0x3E01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01E8u;
        // 0x3e01ec: 0x8e02201c  lw          $v0, 0x201C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01F0u;
        goto label_3e01f0;
    }
    ctx->pc = 0x3E01E8u;
    {
        const bool branch_taken_0x3e01e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e01e8) {
            ctx->pc = 0x3E01ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E01E8u;
            // 0x3e01ec: 0x8e02201c  lw          $v0, 0x201C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0188;
        }
    }
    ctx->pc = 0x3E01F0u;
label_3e01f0:
    // 0x3e01f0: 0x8e02202c  lw          $v0, 0x202C($s0)
    ctx->pc = 0x3e01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8236)));
label_3e01f4:
    // 0x3e01f4: 0xae112014  sw          $s1, 0x2014($s0)
    ctx->pc = 0x3e01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8212), GPR_U32(ctx, 17));
label_3e01f8:
    // 0x3e01f8: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x3e01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3e01fc:
    // 0x3e01fc: 0xae022010  sw          $v0, 0x2010($s0)
    ctx->pc = 0x3e01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8208), GPR_U32(ctx, 2));
label_3e0200:
    // 0x3e0200: 0x8e022010  lw          $v0, 0x2010($s0)
    ctx->pc = 0x3e0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8208)));
label_3e0204:
    // 0x3e0204: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e0204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0208:
    // 0x3e0208: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x3e0208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3e020c:
    // 0x3e020c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e020cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0210:
    // 0x3e0210: 0x243880a  movz        $s1, $s2, $v1
    ctx->pc = 0x3e0210u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_3e0214:
    // 0x3e0214: 0x56240010  bnel        $s1, $a0, . + 4 + (0x10 << 2)
label_3e0218:
    if (ctx->pc == 0x3E0218u) {
        ctx->pc = 0x3E0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0214u;
        // 0x3e0218: 0x8e052014  lw          $a1, 0x2014($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E021Cu;
        goto label_3e021c;
    }
    ctx->pc = 0x3E0214u;
    {
        const bool branch_taken_0x3e0214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e0214) {
            ctx->pc = 0x3E0218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0214u;
            // 0x3e0218: 0x8e052014  lw          $a1, 0x2014($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0258u;
            goto label_3e0258;
        }
    }
    ctx->pc = 0x3E021Cu;
label_3e021c:
    // 0x3e021c: 0x8e022014  lw          $v0, 0x2014($s0)
    ctx->pc = 0x3e021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8212)));
label_3e0220:
    // 0x3e0220: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e0220u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e0224:
    // 0x3e0224: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e0224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e0228:
    // 0x3e0228: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e0228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e022c:
    // 0x3e022c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e0230:
    // 0x3e0230: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x3e0230u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e0234:
    // 0x3e0234: 0xae022014  sw          $v0, 0x2014($s0)
    ctx->pc = 0x3e0234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8212), GPR_U32(ctx, 2));
label_3e0238:
    // 0x3e0238: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e0238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e023c:
    // 0x3e023c: 0x8e02200c  lw          $v0, 0x200C($s0)
    ctx->pc = 0x3e023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8204)));
label_3e0240:
    // 0x3e0240: 0x8e032010  lw          $v1, 0x2010($s0)
    ctx->pc = 0x3e0240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8208)));
label_3e0244:
    // 0x3e0244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e0244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e0248:
    // 0x3e0248: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e0248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e024c:
    // 0x3e024c: 0xae02200c  sw          $v0, 0x200C($s0)
    ctx->pc = 0x3e024cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8204), GPR_U32(ctx, 2));
label_3e0250:
    // 0x3e0250: 0x10000010  b           . + 4 + (0x10 << 2)
label_3e0254:
    if (ctx->pc == 0x3E0254u) {
        ctx->pc = 0x3E0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0250u;
        // 0x3e0254: 0xae032010  sw          $v1, 0x2010($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0258u;
        goto label_3e0258;
    }
    ctx->pc = 0x3E0250u;
    {
        const bool branch_taken_0x3e0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0250u;
        // 0x3e0254: 0xae032010  sw          $v1, 0x2010($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0250) {
            ctx->pc = 0x3E0294u;
            goto label_3e0294;
        }
    }
    ctx->pc = 0x3E0258u;
label_3e0258:
    // 0x3e0258: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e0258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e025c:
    // 0x3e025c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e025cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0260:
    // 0x3e0260: 0xc0efa49  jal         func_3BE924
label_3e0264:
    if (ctx->pc == 0x3E0264u) {
        ctx->pc = 0x3E0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0260u;
        // 0x3e0264: 0x291a021  addu        $s4, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0268u;
        goto label_3e0268;
    }
    ctx->pc = 0x3E0260u;
    SET_GPR_U32(ctx, 31, 0x3E0268u);
    ctx->pc = 0x3E0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0260u;
    // 0x3e0264: 0x291a021  addu        $s4, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3E0260u, 0x3E0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0268u;
label_3e0268:
    // 0x3e0268: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x3e0268u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_3e026c:
    // 0x3e026c: 0x8e02200c  lw          $v0, 0x200C($s0)
    ctx->pc = 0x3e026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8204)));
label_3e0270:
    // 0x3e0270: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x3e0270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3e0274:
    // 0x3e0274: 0x8e032014  lw          $v1, 0x2014($s0)
    ctx->pc = 0x3e0274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8212)));
label_3e0278:
    // 0x3e0278: 0x8e042010  lw          $a0, 0x2010($s0)
    ctx->pc = 0x3e0278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8208)));
label_3e027c:
    // 0x3e027c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3e0280:
    // 0x3e0280: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e0280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e0284:
    // 0x3e0284: 0xae02200c  sw          $v0, 0x200C($s0)
    ctx->pc = 0x3e0284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8204), GPR_U32(ctx, 2));
label_3e0288:
    // 0x3e0288: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x3e0288u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3e028c:
    // 0x3e028c: 0xae032014  sw          $v1, 0x2014($s0)
    ctx->pc = 0x3e028cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8212), GPR_U32(ctx, 3));
label_3e0290:
    // 0x3e0290: 0xae042010  sw          $a0, 0x2010($s0)
    ctx->pc = 0x3e0290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8208), GPR_U32(ctx, 4));
label_3e0294:
    // 0x3e0294: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
label_3e0298:
    if (ctx->pc == 0x3E0298u) {
        ctx->pc = 0x3E0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0294u;
        // 0x3e0298: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E029Cu;
        goto label_3e029c;
    }
    ctx->pc = 0x3E0294u;
    {
        const bool branch_taken_0x3e0294 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3E0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0294u;
        // 0x3e0298: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0294) {
            ctx->pc = 0x3E02D0u;
            goto label_3e02d0;
        }
    }
    ctx->pc = 0x3E029Cu;
label_3e029c:
    // 0x3e029c: 0x8e022010  lw          $v0, 0x2010($s0)
    ctx->pc = 0x3e029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8208)));
label_3e02a0:
    // 0x3e02a0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_3e02a4:
    if (ctx->pc == 0x3E02A4u) {
        ctx->pc = 0x3E02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02A0u;
        // 0x3e02a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E02A8u;
        goto label_3e02a8;
    }
    ctx->pc = 0x3E02A0u;
    {
        const bool branch_taken_0x3e02a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02A0u;
        // 0x3e02a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e02a0) {
            ctx->pc = 0x3E0208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0208;
        }
    }
    ctx->pc = 0x3E02A8u;
label_3e02a8:
    // 0x3e02a8: 0x8e02201c  lw          $v0, 0x201C($s0)
    ctx->pc = 0x3e02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8220)));
label_3e02ac:
    // 0x3e02ac: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_3e02b0:
    if (ctx->pc == 0x3E02B0u) {
        ctx->pc = 0x3E02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02ACu;
        // 0x3e02b0: 0x26021008  addiu       $v0, $s0, 0x1008 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E02B4u;
        goto label_3e02b4;
    }
    ctx->pc = 0x3E02ACu;
    {
        const bool branch_taken_0x3e02ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02ACu;
        // 0x3e02b0: 0x26021008  addiu       $v0, $s0, 0x1008 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e02ac) {
            ctx->pc = 0x3E0174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0174;
        }
    }
    ctx->pc = 0x3E02B4u;
label_3e02b4:
    // 0x3e02b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e02b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e02b8:
    // 0x3e02b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e02b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e02bc:
    // 0x3e02bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3e02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3e02c0:
    // 0x3e02c0: 0x40f809  jalr        $v0
label_3e02c4:
    if (ctx->pc == 0x3E02C4u) {
        ctx->pc = 0x3E02C8u;
        goto label_3e02c8;
    }
    ctx->pc = 0x3E02C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E02C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E02C0u, 0x3E02C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E02C8u;
label_3e02c8:
    // 0x3e02c8: 0x1040ffa9  beqz        $v0, . + 4 + (-0x57 << 2)
label_3e02cc:
    if (ctx->pc == 0x3E02CCu) {
        ctx->pc = 0x3E02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02C8u;
        // 0x3e02cc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E02D0u;
        goto label_3e02d0;
    }
    ctx->pc = 0x3E02C8u;
    {
        const bool branch_taken_0x3e02c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02C8u;
        // 0x3e02cc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e02c8) {
            ctx->pc = 0x3E0170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0170;
        }
    }
    ctx->pc = 0x3E02D0u;
label_3e02d0:
    // 0x3e02d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e02d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e02d4:
    // 0x3e02d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e02d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e02d8:
    // 0x3e02d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e02d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e02dc:
    // 0x3e02dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e02dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e02e0:
    // 0x3e02e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e02e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e02e4:
    // 0x3e02e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e02e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3e02e8:
    // 0x3e02e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e02e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e02ec:
    // 0x3e02ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e02ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3e02f0:
    // 0x3e02f0: 0x3e00008  jr          $ra
label_3e02f4:
    if (ctx->pc == 0x3E02F4u) {
        ctx->pc = 0x3E02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02F0u;
        // 0x3e02f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E02F8u;
        goto label_fallthrough_0x3e02f0;
    }
    ctx->pc = 0x3E02F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02F0u;
        // 0x3e02f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E02F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e02f0:
    ctx->pc = 0x3E02F8u;
}
