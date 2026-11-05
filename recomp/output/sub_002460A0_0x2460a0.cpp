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

// Function: sub_002460A0
// Address: 0x2460a0 - 0x246318
void sub_002460A0_0x2460a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002460A0_0x2460a0");
#endif

    switch (ctx->pc) {
        case 0x2460a0u: goto label_2460a0;
        case 0x2460a4u: goto label_2460a4;
        case 0x2460a8u: goto label_2460a8;
        case 0x2460acu: goto label_2460ac;
        case 0x2460b0u: goto label_2460b0;
        case 0x2460b4u: goto label_2460b4;
        case 0x2460b8u: goto label_2460b8;
        case 0x2460bcu: goto label_2460bc;
        case 0x2460c0u: goto label_2460c0;
        case 0x2460c4u: goto label_2460c4;
        case 0x2460c8u: goto label_2460c8;
        case 0x2460ccu: goto label_2460cc;
        case 0x2460d0u: goto label_2460d0;
        case 0x2460d4u: goto label_2460d4;
        case 0x2460d8u: goto label_2460d8;
        case 0x2460dcu: goto label_2460dc;
        case 0x2460e0u: goto label_2460e0;
        case 0x2460e4u: goto label_2460e4;
        case 0x2460e8u: goto label_2460e8;
        case 0x2460ecu: goto label_2460ec;
        case 0x2460f0u: goto label_2460f0;
        case 0x2460f4u: goto label_2460f4;
        case 0x2460f8u: goto label_2460f8;
        case 0x2460fcu: goto label_2460fc;
        case 0x246100u: goto label_246100;
        case 0x246104u: goto label_246104;
        case 0x246108u: goto label_246108;
        case 0x24610cu: goto label_24610c;
        case 0x246110u: goto label_246110;
        case 0x246114u: goto label_246114;
        case 0x246118u: goto label_246118;
        case 0x24611cu: goto label_24611c;
        case 0x246120u: goto label_246120;
        case 0x246124u: goto label_246124;
        case 0x246128u: goto label_246128;
        case 0x24612cu: goto label_24612c;
        case 0x246130u: goto label_246130;
        case 0x246134u: goto label_246134;
        case 0x246138u: goto label_246138;
        case 0x24613cu: goto label_24613c;
        case 0x246140u: goto label_246140;
        case 0x246144u: goto label_246144;
        case 0x246148u: goto label_246148;
        case 0x24614cu: goto label_24614c;
        case 0x246150u: goto label_246150;
        case 0x246154u: goto label_246154;
        case 0x246158u: goto label_246158;
        case 0x24615cu: goto label_24615c;
        case 0x246160u: goto label_246160;
        case 0x246164u: goto label_246164;
        case 0x246168u: goto label_246168;
        case 0x24616cu: goto label_24616c;
        case 0x246170u: goto label_246170;
        case 0x246174u: goto label_246174;
        case 0x246178u: goto label_246178;
        case 0x24617cu: goto label_24617c;
        case 0x246180u: goto label_246180;
        case 0x246184u: goto label_246184;
        case 0x246188u: goto label_246188;
        case 0x24618cu: goto label_24618c;
        case 0x246190u: goto label_246190;
        case 0x246194u: goto label_246194;
        case 0x246198u: goto label_246198;
        case 0x24619cu: goto label_24619c;
        case 0x2461a0u: goto label_2461a0;
        case 0x2461a4u: goto label_2461a4;
        case 0x2461a8u: goto label_2461a8;
        case 0x2461acu: goto label_2461ac;
        case 0x2461b0u: goto label_2461b0;
        case 0x2461b4u: goto label_2461b4;
        case 0x2461b8u: goto label_2461b8;
        case 0x2461bcu: goto label_2461bc;
        case 0x2461c0u: goto label_2461c0;
        case 0x2461c4u: goto label_2461c4;
        case 0x2461c8u: goto label_2461c8;
        case 0x2461ccu: goto label_2461cc;
        case 0x2461d0u: goto label_2461d0;
        case 0x2461d4u: goto label_2461d4;
        case 0x2461d8u: goto label_2461d8;
        case 0x2461dcu: goto label_2461dc;
        case 0x2461e0u: goto label_2461e0;
        case 0x2461e4u: goto label_2461e4;
        case 0x2461e8u: goto label_2461e8;
        case 0x2461ecu: goto label_2461ec;
        case 0x2461f0u: goto label_2461f0;
        case 0x2461f4u: goto label_2461f4;
        case 0x2461f8u: goto label_2461f8;
        case 0x2461fcu: goto label_2461fc;
        case 0x246200u: goto label_246200;
        case 0x246204u: goto label_246204;
        case 0x246208u: goto label_246208;
        case 0x24620cu: goto label_24620c;
        case 0x246210u: goto label_246210;
        case 0x246214u: goto label_246214;
        case 0x246218u: goto label_246218;
        case 0x24621cu: goto label_24621c;
        case 0x246220u: goto label_246220;
        case 0x246224u: goto label_246224;
        case 0x246228u: goto label_246228;
        case 0x24622cu: goto label_24622c;
        case 0x246230u: goto label_246230;
        case 0x246234u: goto label_246234;
        case 0x246238u: goto label_246238;
        case 0x24623cu: goto label_24623c;
        case 0x246240u: goto label_246240;
        case 0x246244u: goto label_246244;
        case 0x246248u: goto label_246248;
        case 0x24624cu: goto label_24624c;
        case 0x246250u: goto label_246250;
        case 0x246254u: goto label_246254;
        case 0x246258u: goto label_246258;
        case 0x24625cu: goto label_24625c;
        case 0x246260u: goto label_246260;
        case 0x246264u: goto label_246264;
        case 0x246268u: goto label_246268;
        case 0x24626cu: goto label_24626c;
        case 0x246270u: goto label_246270;
        case 0x246274u: goto label_246274;
        case 0x246278u: goto label_246278;
        case 0x24627cu: goto label_24627c;
        case 0x246280u: goto label_246280;
        case 0x246284u: goto label_246284;
        case 0x246288u: goto label_246288;
        case 0x24628cu: goto label_24628c;
        case 0x246290u: goto label_246290;
        case 0x246294u: goto label_246294;
        case 0x246298u: goto label_246298;
        case 0x24629cu: goto label_24629c;
        case 0x2462a0u: goto label_2462a0;
        case 0x2462a4u: goto label_2462a4;
        case 0x2462a8u: goto label_2462a8;
        case 0x2462acu: goto label_2462ac;
        case 0x2462b0u: goto label_2462b0;
        case 0x2462b4u: goto label_2462b4;
        case 0x2462b8u: goto label_2462b8;
        case 0x2462bcu: goto label_2462bc;
        case 0x2462c0u: goto label_2462c0;
        case 0x2462c4u: goto label_2462c4;
        case 0x2462c8u: goto label_2462c8;
        case 0x2462ccu: goto label_2462cc;
        case 0x2462d0u: goto label_2462d0;
        case 0x2462d4u: goto label_2462d4;
        case 0x2462d8u: goto label_2462d8;
        case 0x2462dcu: goto label_2462dc;
        case 0x2462e0u: goto label_2462e0;
        case 0x2462e4u: goto label_2462e4;
        case 0x2462e8u: goto label_2462e8;
        case 0x2462ecu: goto label_2462ec;
        case 0x2462f0u: goto label_2462f0;
        case 0x2462f4u: goto label_2462f4;
        case 0x2462f8u: goto label_2462f8;
        case 0x2462fcu: goto label_2462fc;
        case 0x246300u: goto label_246300;
        case 0x246304u: goto label_246304;
        case 0x246308u: goto label_246308;
        case 0x24630cu: goto label_24630c;
        case 0x246310u: goto label_246310;
        case 0x246314u: goto label_246314;
        default: break;
    }

    ctx->pc = 0x2460a0u;

label_2460a0:
    // 0x2460a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2460a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2460a4:
    // 0x2460a4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2460a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2460a8:
    // 0x2460a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2460a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2460ac:
    // 0x2460ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2460acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2460b0:
    // 0x2460b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2460b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2460b4:
    // 0x2460b4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2460b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2460b8:
    // 0x2460b8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2460b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2460bc:
    // 0x2460bc: 0x8e240388  lw          $a0, 0x388($s1)
    ctx->pc = 0x2460bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_2460c0:
    // 0x2460c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2460c4:
    if (ctx->pc == 0x2460C4u) {
        ctx->pc = 0x2460C8u;
        goto label_2460c8;
    }
    ctx->pc = 0x2460C0u;
    {
        const bool branch_taken_0x2460c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460c0) {
            ctx->pc = 0x2460D0u;
            goto label_2460d0;
        }
    }
    ctx->pc = 0x2460C8u;
label_2460c8:
    // 0x2460c8: 0xc09bf28  jal         func_26FCA0
label_2460cc:
    if (ctx->pc == 0x2460CCu) {
        ctx->pc = 0x2460D0u;
        goto label_2460d0;
    }
    ctx->pc = 0x2460C8u;
    SET_GPR_U32(ctx, 31, 0x2460D0u);
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x2460C8u, 0x2460D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460D0u;
label_2460d0:
    // 0x2460d0: 0xc0899bc  jal         func_2266F0
label_2460d4:
    if (ctx->pc == 0x2460D4u) {
        ctx->pc = 0x2460D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460D0u;
        // 0x2460d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460D8u;
        goto label_2460d8;
    }
    ctx->pc = 0x2460D0u;
    SET_GPR_U32(ctx, 31, 0x2460D8u);
    ctx->pc = 0x2460D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460D0u;
    // 0x2460d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2460D0u, 0x2460D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460D8u;
label_2460d8:
    // 0x2460d8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2460dc:
    if (ctx->pc == 0x2460DCu) {
        ctx->pc = 0x2460DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460D8u;
        // 0x2460dc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460E0u;
        goto label_2460e0;
    }
    ctx->pc = 0x2460D8u;
    {
        const bool branch_taken_0x2460d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460d8) {
            ctx->pc = 0x2460DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2460D8u;
            // 0x2460dc: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246108u;
            goto label_246108;
        }
    }
    ctx->pc = 0x2460E0u;
label_2460e0:
    // 0x2460e0: 0xc0899bc  jal         func_2266F0
label_2460e4:
    if (ctx->pc == 0x2460E4u) {
        ctx->pc = 0x2460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460E0u;
        // 0x2460e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460E8u;
        goto label_2460e8;
    }
    ctx->pc = 0x2460E0u;
    SET_GPR_U32(ctx, 31, 0x2460E8u);
    ctx->pc = 0x2460E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460E0u;
    // 0x2460e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2460E0u, 0x2460E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460E8u;
label_2460e8:
    // 0x2460e8: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x2460e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_2460ec:
    // 0x2460ec: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_2460f0:
    if (ctx->pc == 0x2460F0u) {
        ctx->pc = 0x2460F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460ECu;
        // 0x2460f0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460F4u;
        goto label_2460f4;
    }
    ctx->pc = 0x2460ECu;
    {
        const bool branch_taken_0x2460ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460ec) {
            ctx->pc = 0x2460F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2460ECu;
            // 0x2460f0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246108u;
            goto label_246108;
        }
    }
    ctx->pc = 0x2460F4u;
label_2460f4:
    // 0x2460f4: 0xc0899bc  jal         func_2266F0
label_2460f8:
    if (ctx->pc == 0x2460F8u) {
        ctx->pc = 0x2460F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460F4u;
        // 0x2460f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460FCu;
        goto label_2460fc;
    }
    ctx->pc = 0x2460F4u;
    SET_GPR_U32(ctx, 31, 0x2460FCu);
    ctx->pc = 0x2460F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460F4u;
    // 0x2460f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2460F4u, 0x2460FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460FCu;
label_2460fc:
    // 0x2460fc: 0xc098514  jal         func_261450
label_246100:
    if (ctx->pc == 0x246100u) {
        ctx->pc = 0x246100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460FCu;
        // 0x246100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246104u;
        goto label_246104;
    }
    ctx->pc = 0x2460FCu;
    SET_GPR_U32(ctx, 31, 0x246104u);
    ctx->pc = 0x246100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460FCu;
    // 0x246100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x2460FCu, 0x246104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246104u;
label_246104:
    // 0x246104: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x246104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_246108:
    // 0x246108: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x246108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_24610c:
    // 0x24610c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x24610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_246110:
    // 0x246110: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_246114:
    if (ctx->pc == 0x246114u) {
        ctx->pc = 0x246114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246110u;
        // 0x246114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246118u;
        goto label_246118;
    }
    ctx->pc = 0x246110u;
    {
        const bool branch_taken_0x246110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x246114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246110u;
        // 0x246114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246110) {
            ctx->pc = 0x246124u;
            goto label_246124;
        }
    }
    ctx->pc = 0x246118u;
label_246118:
    // 0x246118: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x246118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_24611c:
    // 0x24611c: 0x2442f87e  addiu       $v0, $v0, -0x782
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965374));
label_246120:
    // 0x246120: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x246120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_246124:
    // 0x246124: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_246128:
    if (ctx->pc == 0x246128u) {
        ctx->pc = 0x24612Cu;
        goto label_24612c;
    }
    ctx->pc = 0x246124u;
    {
        const bool branch_taken_0x246124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246124) {
            ctx->pc = 0x246158u;
            goto label_246158;
        }
    }
    ctx->pc = 0x24612Cu;
label_24612c:
    // 0x24612c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_246130:
    if (ctx->pc == 0x246130u) {
        ctx->pc = 0x246130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24612Cu;
        // 0x246130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246134u;
        goto label_246134;
    }
    ctx->pc = 0x24612Cu;
    {
        const bool branch_taken_0x24612c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x246130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24612Cu;
        // 0x246130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24612c) {
            ctx->pc = 0x246140u;
            goto label_246140;
        }
    }
    ctx->pc = 0x246134u;
label_246134:
    // 0x246134: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x246134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_246138:
    // 0x246138: 0x2442f87a  addiu       $v0, $v0, -0x786
    ctx->pc = 0x246138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965370));
label_24613c:
    // 0x24613c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24613cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_246140:
    // 0x246140: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_246144:
    if (ctx->pc == 0x246144u) {
        ctx->pc = 0x246148u;
        goto label_246148;
    }
    ctx->pc = 0x246140u;
    {
        const bool branch_taken_0x246140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246140) {
            ctx->pc = 0x246158u;
            goto label_246158;
        }
    }
    ctx->pc = 0x246148u;
label_246148:
    // 0x246148: 0xc06b686  jal         func_1ADA18
label_24614c:
    if (ctx->pc == 0x24614Cu) {
        ctx->pc = 0x246150u;
        goto label_246150;
    }
    ctx->pc = 0x246148u;
    SET_GPR_U32(ctx, 31, 0x246150u);
    ctx->pc = 0x1ADA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA18u, 0x246148u, 0x246150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246150u;
label_246150:
    // 0x246150: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_246154:
    if (ctx->pc == 0x246154u) {
        ctx->pc = 0x246154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246150u;
        // 0x246154: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246158u;
        goto label_246158;
    }
    ctx->pc = 0x246150u;
    {
        const bool branch_taken_0x246150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246150u;
        // 0x246154: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246150) {
            ctx->pc = 0x246300u;
            goto label_246300;
        }
    }
    ctx->pc = 0x246158u;
label_246158:
    // 0x246158: 0xc06b686  jal         func_1ADA18
label_24615c:
    if (ctx->pc == 0x24615Cu) {
        ctx->pc = 0x24615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246158u;
        // 0x24615c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246160u;
        goto label_246160;
    }
    ctx->pc = 0x246158u;
    SET_GPR_U32(ctx, 31, 0x246160u);
    ctx->pc = 0x24615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246158u;
    // 0x24615c: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA18u, 0x246158u, 0x246160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246160u;
label_246160:
    // 0x246160: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_246164:
    if (ctx->pc == 0x246164u) {
        ctx->pc = 0x246164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246160u;
        // 0x246164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246168u;
        goto label_246168;
    }
    ctx->pc = 0x246160u;
    {
        const bool branch_taken_0x246160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246160u;
        // 0x246164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246160) {
            ctx->pc = 0x246288u;
            goto label_246288;
        }
    }
    ctx->pc = 0x246168u;
label_246168:
    // 0x246168: 0xc08a1f2  jal         func_2287C8
label_24616c:
    if (ctx->pc == 0x24616Cu) {
        ctx->pc = 0x24616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246168u;
        // 0x24616c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246170u;
        goto label_246170;
    }
    ctx->pc = 0x246168u;
    SET_GPR_U32(ctx, 31, 0x246170u);
    ctx->pc = 0x24616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246168u;
    // 0x24616c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x246168u, 0x246170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246170u;
label_246170:
    // 0x246170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246174:
    // 0x246174: 0xc0f70ce  jal         func_3DC338
label_246178:
    if (ctx->pc == 0x246178u) {
        ctx->pc = 0x246178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246174u;
        // 0x246178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24617Cu;
        goto label_24617c;
    }
    ctx->pc = 0x246174u;
    SET_GPR_U32(ctx, 31, 0x24617Cu);
    ctx->pc = 0x246178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246174u;
    // 0x246178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x246174u, 0x24617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24617Cu;
label_24617c:
    // 0x24617c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_246180:
    if (ctx->pc == 0x246180u) {
        ctx->pc = 0x246180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24617Cu;
        // 0x246180: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x246184u;
        goto label_246184;
    }
    ctx->pc = 0x24617Cu;
    {
        const bool branch_taken_0x24617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24617c) {
            ctx->pc = 0x246180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24617Cu;
            // 0x246180: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x246190u;
            goto label_246190;
        }
    }
    ctx->pc = 0x246184u;
label_246184:
    // 0x246184: 0xc0c4900  jal         func_312400
label_246188:
    if (ctx->pc == 0x246188u) {
        ctx->pc = 0x246188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246184u;
        // 0x246188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24618Cu;
        goto label_24618c;
    }
    ctx->pc = 0x246184u;
    SET_GPR_U32(ctx, 31, 0x24618Cu);
    ctx->pc = 0x246188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246184u;
    // 0x246188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x246184u, 0x24618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24618Cu;
label_24618c:
    // 0x24618c: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x24618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246190:
    // 0x246190: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x246190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_246194:
    // 0x246194: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x246194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_246198:
    // 0x246198: 0x26120080  addiu       $s2, $s0, 0x80
    ctx->pc = 0x246198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_24619c:
    // 0x24619c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24619cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2461a0:
    // 0x2461a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2461a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2461a4:
    // 0x2461a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2461a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2461a8:
    // 0x2461a8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2461a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2461ac:
    // 0x2461ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2461acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2461b0:
    // 0x2461b0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2461b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2461b4:
    // 0x2461b4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2461b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2461b8:
    // 0x2461b8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2461b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2461bc:
    // 0x2461bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2461bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2461c0:
    // 0x2461c0: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2461c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2461c4:
    // 0x2461c4: 0xc0f70ce  jal         func_3DC338
label_2461c8:
    if (ctx->pc == 0x2461C8u) {
        ctx->pc = 0x2461C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461C4u;
        // 0x2461c8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2461CCu;
        goto label_2461cc;
    }
    ctx->pc = 0x2461C4u;
    SET_GPR_U32(ctx, 31, 0x2461CCu);
    ctx->pc = 0x2461C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2461C4u;
    // 0x2461c8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2461C4u, 0x2461CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461CCu;
label_2461cc:
    // 0x2461cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2461d0:
    if (ctx->pc == 0x2461D0u) {
        ctx->pc = 0x2461D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461CCu;
        // 0x2461d0: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2461D4u;
        goto label_2461d4;
    }
    ctx->pc = 0x2461CCu;
    {
        const bool branch_taken_0x2461cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2461cc) {
            ctx->pc = 0x2461D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2461CCu;
            // 0x2461d0: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2461E0u;
            goto label_2461e0;
        }
    }
    ctx->pc = 0x2461D4u;
label_2461d4:
    // 0x2461d4: 0xc0c4900  jal         func_312400
label_2461d8:
    if (ctx->pc == 0x2461D8u) {
        ctx->pc = 0x2461D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461D4u;
        // 0x2461d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2461DCu;
        goto label_2461dc;
    }
    ctx->pc = 0x2461D4u;
    SET_GPR_U32(ctx, 31, 0x2461DCu);
    ctx->pc = 0x2461D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2461D4u;
    // 0x2461d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2461D4u, 0x2461DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461DCu;
label_2461dc:
    // 0x2461dc: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2461dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2461e0:
    // 0x2461e0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2461e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2461e4:
    // 0x2461e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2461e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2461e8:
    // 0x2461e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2461e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2461ec:
    // 0x2461ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2461ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2461f0:
    // 0x2461f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2461f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2461f4:
    // 0x2461f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2461f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2461f8:
    // 0x2461f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2461f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2461fc:
    // 0x2461fc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2461fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246200:
    // 0x246200: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x246200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_246204:
    // 0x246204: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x246204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246208:
    // 0x246208: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x246208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_24620c:
    // 0x24620c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x24620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246210:
    // 0x246210: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x246210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_246214:
    // 0x246214: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x246214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_246218:
    // 0x246218: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x246218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_24621c:
    // 0x24621c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x24621cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_246220:
    // 0x246220: 0xc0b1b16  jal         func_2C6C58
label_246224:
    if (ctx->pc == 0x246224u) {
        ctx->pc = 0x246224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246220u;
        // 0x246224: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246228u;
        goto label_246228;
    }
    ctx->pc = 0x246220u;
    SET_GPR_U32(ctx, 31, 0x246228u);
    ctx->pc = 0x246224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246220u;
    // 0x246224: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C58u, 0x246220u, 0x246228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246228u;
label_246228:
    // 0x246228: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x246228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_24622c:
    // 0x24622c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246230:
    // 0x246230: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x246230u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_246234:
    // 0x246234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246238:
    // 0x246238: 0xac620190  sw          $v0, 0x190($v1)
    ctx->pc = 0x246238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 400), GPR_U32(ctx, 2));
label_24623c:
    // 0x24623c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24623cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246240:
    // 0x246240: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x246240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_246244:
    // 0x246244: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x246244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_246248:
    // 0x246248: 0x60f809  jalr        $v1
label_24624c:
    if (ctx->pc == 0x24624Cu) {
        ctx->pc = 0x24624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246248u;
        // 0x24624c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246250u;
        goto label_246250;
    }
    ctx->pc = 0x246248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x246250u);
        ctx->pc = 0x24624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246248u;
        // 0x24624c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246248u, 0x246250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246250u;
label_246250:
    // 0x246250: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x246250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_246254:
    // 0x246254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_246258:
    // 0x246258: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x246258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_24625c:
    // 0x24625c: 0xf8610060  sqc2        $vf1, 0x60($v1)
    ctx->pc = 0x24625cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_246260:
    // 0x246260: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x246260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_246264:
    // 0x246264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246268:
    // 0x246268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24626c:
    // 0x24626c: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x24626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_246270:
    // 0x246270: 0x40f809  jalr        $v0
label_246274:
    if (ctx->pc == 0x246274u) {
        ctx->pc = 0x246274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246270u;
        // 0x246274: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246278u;
        goto label_246278;
    }
    ctx->pc = 0x246270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246278u);
        ctx->pc = 0x246274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246270u;
        // 0x246274: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246270u, 0x246278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246278u;
label_246278:
    // 0x246278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x246278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24627c:
    // 0x24627c: 0xc094ec2  jal         func_253B08
label_246280:
    if (ctx->pc == 0x246280u) {
        ctx->pc = 0x246280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24627Cu;
        // 0x246280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246284u;
        goto label_246284;
    }
    ctx->pc = 0x24627Cu;
    SET_GPR_U32(ctx, 31, 0x246284u);
    ctx->pc = 0x246280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24627Cu;
    // 0x246280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B08u, 0x24627Cu, 0x246284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246284u;
label_246284:
    // 0x246284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246288:
    // 0x246288: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x246288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_24628c:
    // 0x24628c: 0xc08fed2  jal         func_23FB48
label_246290:
    if (ctx->pc == 0x246290u) {
        ctx->pc = 0x246290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24628Cu;
        // 0x246290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246294u;
        goto label_246294;
    }
    ctx->pc = 0x24628Cu;
    SET_GPR_U32(ctx, 31, 0x246294u);
    ctx->pc = 0x246290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24628Cu;
    // 0x246290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x24628Cu, 0x246294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246294u;
label_246294:
    // 0x246294: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x246294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_246298:
    // 0x246298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24629c:
    // 0x24629c: 0xc08fed2  jal         func_23FB48
label_2462a0:
    if (ctx->pc == 0x2462A0u) {
        ctx->pc = 0x2462A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24629Cu;
        // 0x2462a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2462A4u;
        goto label_2462a4;
    }
    ctx->pc = 0x24629Cu;
    SET_GPR_U32(ctx, 31, 0x2462A4u);
    ctx->pc = 0x2462A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24629Cu;
    // 0x2462a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x24629Cu, 0x2462A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462A4u;
label_2462a4:
    // 0x2462a4: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x2462a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2462a8:
    // 0x2462a8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2462a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2462ac:
    // 0x2462ac: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x2462acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2462b0:
    // 0x2462b0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2462b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2462b4:
    // 0x2462b4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2462b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2462b8:
    // 0x2462b8: 0x40f809  jalr        $v0
label_2462bc:
    if (ctx->pc == 0x2462BCu) {
        ctx->pc = 0x2462C0u;
        goto label_2462c0;
    }
    ctx->pc = 0x2462B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2462C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2462B8u, 0x2462C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2462C0u;
label_2462c0:
    // 0x2462c0: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x2462c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2462c4:
    // 0x2462c4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2462c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2462c8:
    // 0x2462c8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2462c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2462cc:
    // 0x2462cc: 0x40f809  jalr        $v0
label_2462d0:
    if (ctx->pc == 0x2462D0u) {
        ctx->pc = 0x2462D4u;
        goto label_2462d4;
    }
    ctx->pc = 0x2462CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2462D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2462CCu, 0x2462D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2462D4u;
label_2462d4:
    // 0x2462d4: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x2462d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2462d8:
    // 0x2462d8: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x2462d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_2462dc:
    // 0x2462dc: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2462dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_2462e0:
    // 0x2462e0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2462e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_2462e4:
    // 0x2462e4: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x2462e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_2462e8:
    // 0x2462e8: 0xc07682a  jal         func_1DA0A8
label_2462ec:
    if (ctx->pc == 0x2462ECu) {
        ctx->pc = 0x2462ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462E8u;
        // 0x2462ec: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2462F0u;
        goto label_2462f0;
    }
    ctx->pc = 0x2462E8u;
    SET_GPR_U32(ctx, 31, 0x2462F0u);
    ctx->pc = 0x2462ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462E8u;
    // 0x2462ec: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x2462E8u, 0x2462F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462F0u;
label_2462f0:
    // 0x2462f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2462f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2462f4:
    // 0x2462f4: 0xae200fd0  sw          $zero, 0xFD0($s1)
    ctx->pc = 0x2462f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4048), GPR_U32(ctx, 0));
label_2462f8:
    // 0x2462f8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x2462f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
label_2462fc:
    // 0x2462fc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2462fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_246300:
    // 0x246300: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x246300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_246304:
    // 0x246304: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x246304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_246308:
    // 0x246308: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x246308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_24630c:
    // 0x24630c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x24630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_246310:
    // 0x246310: 0x3e00008  jr          $ra
label_246314:
    if (ctx->pc == 0x246314u) {
        ctx->pc = 0x246314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246310u;
        // 0x246314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246318u;
        goto label_fallthrough_0x246310;
    }
    ctx->pc = 0x246310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246310u;
        // 0x246314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x246310:
    ctx->pc = 0x246318u;
}
