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

// Function: sub_00170158
// Address: 0x170158 - 0x17028c
void sub_00170158_0x170158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170158_0x170158");
#endif

    switch (ctx->pc) {
        case 0x170158u: goto label_170158;
        case 0x17015cu: goto label_17015c;
        case 0x170160u: goto label_170160;
        case 0x170164u: goto label_170164;
        case 0x170168u: goto label_170168;
        case 0x17016cu: goto label_17016c;
        case 0x170170u: goto label_170170;
        case 0x170174u: goto label_170174;
        case 0x170178u: goto label_170178;
        case 0x17017cu: goto label_17017c;
        case 0x170180u: goto label_170180;
        case 0x170184u: goto label_170184;
        case 0x170188u: goto label_170188;
        case 0x17018cu: goto label_17018c;
        case 0x170190u: goto label_170190;
        case 0x170194u: goto label_170194;
        case 0x170198u: goto label_170198;
        case 0x17019cu: goto label_17019c;
        case 0x1701a0u: goto label_1701a0;
        case 0x1701a4u: goto label_1701a4;
        case 0x1701a8u: goto label_1701a8;
        case 0x1701acu: goto label_1701ac;
        case 0x1701b0u: goto label_1701b0;
        case 0x1701b4u: goto label_1701b4;
        case 0x1701b8u: goto label_1701b8;
        case 0x1701bcu: goto label_1701bc;
        case 0x1701c0u: goto label_1701c0;
        case 0x1701c4u: goto label_1701c4;
        case 0x1701c8u: goto label_1701c8;
        case 0x1701ccu: goto label_1701cc;
        case 0x1701d0u: goto label_1701d0;
        case 0x1701d4u: goto label_1701d4;
        case 0x1701d8u: goto label_1701d8;
        case 0x1701dcu: goto label_1701dc;
        case 0x1701e0u: goto label_1701e0;
        case 0x1701e4u: goto label_1701e4;
        case 0x1701e8u: goto label_1701e8;
        case 0x1701ecu: goto label_1701ec;
        case 0x1701f0u: goto label_1701f0;
        case 0x1701f4u: goto label_1701f4;
        case 0x1701f8u: goto label_1701f8;
        case 0x1701fcu: goto label_1701fc;
        case 0x170200u: goto label_170200;
        case 0x170204u: goto label_170204;
        case 0x170208u: goto label_170208;
        case 0x17020cu: goto label_17020c;
        case 0x170210u: goto label_170210;
        case 0x170214u: goto label_170214;
        case 0x170218u: goto label_170218;
        case 0x17021cu: goto label_17021c;
        case 0x170220u: goto label_170220;
        case 0x170224u: goto label_170224;
        case 0x170228u: goto label_170228;
        case 0x17022cu: goto label_17022c;
        case 0x170230u: goto label_170230;
        case 0x170234u: goto label_170234;
        case 0x170238u: goto label_170238;
        case 0x17023cu: goto label_17023c;
        case 0x170240u: goto label_170240;
        case 0x170244u: goto label_170244;
        case 0x170248u: goto label_170248;
        case 0x17024cu: goto label_17024c;
        case 0x170250u: goto label_170250;
        case 0x170254u: goto label_170254;
        case 0x170258u: goto label_170258;
        case 0x17025cu: goto label_17025c;
        case 0x170260u: goto label_170260;
        case 0x170264u: goto label_170264;
        case 0x170268u: goto label_170268;
        case 0x17026cu: goto label_17026c;
        case 0x170270u: goto label_170270;
        case 0x170274u: goto label_170274;
        case 0x170278u: goto label_170278;
        case 0x17027cu: goto label_17027c;
        case 0x170280u: goto label_170280;
        case 0x170284u: goto label_170284;
        case 0x170288u: goto label_170288;
        default: break;
    }

    ctx->pc = 0x170158u;

label_170158:
    // 0x170158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17015c:
    // 0x17015c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_170160:
    // 0x170160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_170164:
    // 0x170164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170168:
    // 0x170168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17016c:
    // 0x17016c: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x17016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_170170:
    // 0x170170: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_170174:
    if (ctx->pc == 0x170174u) {
        ctx->pc = 0x170174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170170u;
        // 0x170174: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170178u;
        goto label_170178;
    }
    ctx->pc = 0x170170u;
    {
        const bool branch_taken_0x170170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170170u;
        // 0x170174: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170170) {
            ctx->pc = 0x17018Cu;
            goto label_17018c;
        }
    }
    ctx->pc = 0x170178u;
label_170178:
    // 0x170178: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x170178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_17017c:
    // 0x17017c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_170180:
    if (ctx->pc == 0x170180u) {
        ctx->pc = 0x170180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17017Cu;
        // 0x170180: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170184u;
        goto label_170184;
    }
    ctx->pc = 0x17017Cu;
    {
        const bool branch_taken_0x17017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17017c) {
            ctx->pc = 0x170180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17017Cu;
            // 0x170180: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170190u;
            goto label_170190;
        }
    }
    ctx->pc = 0x170184u;
label_170184:
    // 0x170184: 0xc05d37c  jal         func_174DF0
label_170188:
    if (ctx->pc == 0x170188u) {
        ctx->pc = 0x17018Cu;
        goto label_17018c;
    }
    ctx->pc = 0x170184u;
    SET_GPR_U32(ctx, 31, 0x17018Cu);
    ctx->pc = 0x174DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174DF0u, 0x170184u, 0x17018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17018Cu;
label_17018c:
    // 0x17018c: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x17018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_170190:
    // 0x170190: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_170194:
    if (ctx->pc == 0x170194u) {
        ctx->pc = 0x170194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170190u;
        // 0x170194: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170198u;
        goto label_170198;
    }
    ctx->pc = 0x170190u;
    {
        const bool branch_taken_0x170190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170190u;
        // 0x170194: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170190) {
            ctx->pc = 0x170238u;
            goto label_170238;
        }
    }
    ctx->pc = 0x170198u;
label_170198:
    // 0x170198: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x170198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17019c:
    // 0x17019c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17019cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1701a0:
    // 0x1701a0: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1701a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1701a4:
    // 0x1701a4: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1701a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1701a8:
    // 0x1701a8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1701ac:
    if (ctx->pc == 0x1701ACu) {
        ctx->pc = 0x1701ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701A8u;
        // 0x1701ac: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1701B0u;
        goto label_1701b0;
    }
    ctx->pc = 0x1701A8u;
    {
        const bool branch_taken_0x1701a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701A8u;
        // 0x1701ac: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701a8) {
            ctx->pc = 0x170244u;
            goto label_170244;
        }
    }
    ctx->pc = 0x1701B0u;
label_1701b0:
    // 0x1701b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1701b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1701b4:
    // 0x1701b4: 0x2442f230  addiu       $v0, $v0, -0xDD0
    ctx->pc = 0x1701b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963760));
label_1701b8:
    // 0x1701b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1701b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1701bc:
    // 0x1701bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1701bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1701c0:
    // 0x1701c0: 0x800008  jr          $a0
label_1701c4:
    if (ctx->pc == 0x1701C4u) {
        ctx->pc = 0x1701C8u;
        goto label_1701c8;
    }
    ctx->pc = 0x1701C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1701C8u: goto label_1701c8;
            case 0x1701E4u: goto label_1701e4;
            case 0x1701ECu: goto label_1701ec;
            case 0x170200u: goto label_170200;
            case 0x170210u: goto label_170210;
            case 0x17021Cu: goto label_17021c;
            case 0x170228u: goto label_170228;
            case 0x170234u: goto label_170234;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1701C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1701C8u;
label_1701c8:
    // 0x1701c8: 0xc05d166  jal         func_174598
label_1701cc:
    if (ctx->pc == 0x1701CCu) {
        ctx->pc = 0x1701CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701C8u;
        // 0x1701cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1701D0u;
        goto label_1701d0;
    }
    ctx->pc = 0x1701C8u;
    SET_GPR_U32(ctx, 31, 0x1701D0u);
    ctx->pc = 0x1701CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701C8u;
    // 0x1701cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174598u, 0x1701C8u, 0x1701D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701D0u;
label_1701d0:
    // 0x1701d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1701d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1701d4:
    // 0x1701d4: 0xc05d150  jal         func_174540
label_1701d8:
    if (ctx->pc == 0x1701D8u) {
        ctx->pc = 0x1701D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701D4u;
        // 0x1701d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1701DCu;
        goto label_1701dc;
    }
    ctx->pc = 0x1701D4u;
    SET_GPR_U32(ctx, 31, 0x1701DCu);
    ctx->pc = 0x1701D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701D4u;
    // 0x1701d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174540u, 0x1701D4u, 0x1701DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701DCu;
label_1701dc:
    // 0x1701dc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1701e0:
    if (ctx->pc == 0x1701E0u) {
        ctx->pc = 0x1701E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701DCu;
        // 0x1701e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1701E4u;
        goto label_1701e4;
    }
    ctx->pc = 0x1701DCu;
    {
        const bool branch_taken_0x1701dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701DCu;
        // 0x1701e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701dc) {
            ctx->pc = 0x17024Cu;
            goto label_17024c;
        }
    }
    ctx->pc = 0x1701E4u;
label_1701e4:
    // 0x1701e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1701e8:
    if (ctx->pc == 0x1701E8u) {
        ctx->pc = 0x1701E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701E4u;
        // 0x1701e8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1701ECu;
        goto label_1701ec;
    }
    ctx->pc = 0x1701E4u;
    {
        const bool branch_taken_0x1701e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701E4u;
        // 0x1701e8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701e4) {
            ctx->pc = 0x170204u;
            goto label_170204;
        }
    }
    ctx->pc = 0x1701ECu;
label_1701ec:
    // 0x1701ec: 0xc05d1a8  jal         func_1746A0
label_1701f0:
    if (ctx->pc == 0x1701F0u) {
        ctx->pc = 0x1701F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701ECu;
        // 0x1701f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1701F4u;
        goto label_1701f4;
    }
    ctx->pc = 0x1701ECu;
    SET_GPR_U32(ctx, 31, 0x1701F4u);
    ctx->pc = 0x1701F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701ECu;
    // 0x1701f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1746A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746A0u, 0x1701ECu, 0x1701F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701F4u;
label_1701f4:
    // 0x1701f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1701f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1701f8:
    // 0x1701f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1701fc:
    if (ctx->pc == 0x1701FCu) {
        ctx->pc = 0x1701FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F8u;
        // 0x1701fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170200u;
        goto label_170200;
    }
    ctx->pc = 0x1701F8u;
    {
        const bool branch_taken_0x1701f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F8u;
        // 0x1701fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701f8) {
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x170200u;
label_170200:
    // 0x170200: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x170200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_170204:
    // 0x170204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170208:
    // 0x170208: 0x1000000f  b           . + 4 + (0xF << 2)
label_17020c:
    if (ctx->pc == 0x17020Cu) {
        ctx->pc = 0x17020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170208u;
        // 0x17020c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170210u;
        goto label_170210;
    }
    ctx->pc = 0x170208u;
    {
        const bool branch_taken_0x170208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170208u;
        // 0x17020c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170208) {
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x170210u;
label_170210:
    // 0x170210: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x170210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_170214:
    // 0x170214: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_170218:
    if (ctx->pc == 0x170218u) {
        ctx->pc = 0x170218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170214u;
        // 0x170218: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17021Cu;
        goto label_17021c;
    }
    ctx->pc = 0x170214u;
    {
        const bool branch_taken_0x170214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170214) {
            ctx->pc = 0x170218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170214u;
            // 0x170218: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17022Cu;
            goto label_17022c;
        }
    }
    ctx->pc = 0x17021Cu;
label_17021c:
    // 0x17021c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17021cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_170220:
    // 0x170220: 0x10000009  b           . + 4 + (0x9 << 2)
label_170224:
    if (ctx->pc == 0x170224u) {
        ctx->pc = 0x170224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170220u;
        // 0x170224: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170228u;
        goto label_170228;
    }
    ctx->pc = 0x170220u;
    {
        const bool branch_taken_0x170220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170220u;
        // 0x170224: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170220) {
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x170228u;
label_170228:
    // 0x170228: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x170228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17022c:
    // 0x17022c: 0x10000006  b           . + 4 + (0x6 << 2)
label_170230:
    if (ctx->pc == 0x170230u) {
        ctx->pc = 0x170230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17022Cu;
        // 0x170230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170234u;
        goto label_170234;
    }
    ctx->pc = 0x17022Cu;
    {
        const bool branch_taken_0x17022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17022Cu;
        // 0x170230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17022c) {
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x170234u;
label_170234:
    // 0x170234: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x170234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_170238:
    // 0x170238: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x170238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17023c:
    // 0x17023c: 0x10000002  b           . + 4 + (0x2 << 2)
label_170240:
    if (ctx->pc == 0x170240u) {
        ctx->pc = 0x170240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17023Cu;
        // 0x170240: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170244u;
        goto label_170244;
    }
    ctx->pc = 0x17023Cu;
    {
        const bool branch_taken_0x17023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17023Cu;
        // 0x170240: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17023c) {
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x170244u;
label_170244:
    // 0x170244: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x170244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_170248:
    // 0x170248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17024c:
    // 0x17024c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17024cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_170250:
    // 0x170250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_170254:
    // 0x170254: 0x3e00008  jr          $ra
label_170258:
    if (ctx->pc == 0x170258u) {
        ctx->pc = 0x170258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170254u;
        // 0x170258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17025Cu;
        goto label_17025c;
    }
    ctx->pc = 0x170254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170254u;
        // 0x170258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17025Cu;
label_17025c:
    // 0x17025c: 0x0  nop
    ctx->pc = 0x17025cu;
    // NOP
label_170260:
    // 0x170260: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x170260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170264:
    // 0x170264: 0x8ce300b4  lw          $v1, 0xB4($a3)
    ctx->pc = 0x170264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
label_170268:
    // 0x170268: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x170268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_17026c:
    // 0x17026c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_170270:
    if (ctx->pc == 0x170270u) {
        ctx->pc = 0x170270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17026Cu;
        // 0x170270: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170274u;
        goto label_170274;
    }
    ctx->pc = 0x17026Cu;
    {
        const bool branch_taken_0x17026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17026Cu;
        // 0x170270: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17026c) {
            ctx->pc = 0x1702ECu;
            return;
        }
    }
    ctx->pc = 0x170274u;
label_170274:
    // 0x170274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_170278:
    // 0x170278: 0x2442f260  addiu       $v0, $v0, -0xDA0
    ctx->pc = 0x170278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
label_17027c:
    // 0x17027c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_170280:
    // 0x170280: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x170280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_170284:
    // 0x170284: 0x800008  jr          $a0
label_170288:
    if (ctx->pc == 0x170288u) {
        ctx->pc = 0x17028Cu;
        goto label_fallthrough_0x170284;
    }
    ctx->pc = 0x170284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170284u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x170284:
    ctx->pc = 0x17028Cu;
}
