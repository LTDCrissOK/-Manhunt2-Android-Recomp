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

// Function: sub_001D3048
// Address: 0x1d3048 - 0x1d3198
void sub_001D3048_0x1d3048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3048_0x1d3048");
#endif

    switch (ctx->pc) {
        case 0x1d3048u: goto label_1d3048;
        case 0x1d304cu: goto label_1d304c;
        case 0x1d3050u: goto label_1d3050;
        case 0x1d3054u: goto label_1d3054;
        case 0x1d3058u: goto label_1d3058;
        case 0x1d305cu: goto label_1d305c;
        case 0x1d3060u: goto label_1d3060;
        case 0x1d3064u: goto label_1d3064;
        case 0x1d3068u: goto label_1d3068;
        case 0x1d306cu: goto label_1d306c;
        case 0x1d3070u: goto label_1d3070;
        case 0x1d3074u: goto label_1d3074;
        case 0x1d3078u: goto label_1d3078;
        case 0x1d307cu: goto label_1d307c;
        case 0x1d3080u: goto label_1d3080;
        case 0x1d3084u: goto label_1d3084;
        case 0x1d3088u: goto label_1d3088;
        case 0x1d308cu: goto label_1d308c;
        case 0x1d3090u: goto label_1d3090;
        case 0x1d3094u: goto label_1d3094;
        case 0x1d3098u: goto label_1d3098;
        case 0x1d309cu: goto label_1d309c;
        case 0x1d30a0u: goto label_1d30a0;
        case 0x1d30a4u: goto label_1d30a4;
        case 0x1d30a8u: goto label_1d30a8;
        case 0x1d30acu: goto label_1d30ac;
        case 0x1d30b0u: goto label_1d30b0;
        case 0x1d30b4u: goto label_1d30b4;
        case 0x1d30b8u: goto label_1d30b8;
        case 0x1d30bcu: goto label_1d30bc;
        case 0x1d30c0u: goto label_1d30c0;
        case 0x1d30c4u: goto label_1d30c4;
        case 0x1d30c8u: goto label_1d30c8;
        case 0x1d30ccu: goto label_1d30cc;
        case 0x1d30d0u: goto label_1d30d0;
        case 0x1d30d4u: goto label_1d30d4;
        case 0x1d30d8u: goto label_1d30d8;
        case 0x1d30dcu: goto label_1d30dc;
        case 0x1d30e0u: goto label_1d30e0;
        case 0x1d30e4u: goto label_1d30e4;
        case 0x1d30e8u: goto label_1d30e8;
        case 0x1d30ecu: goto label_1d30ec;
        case 0x1d30f0u: goto label_1d30f0;
        case 0x1d30f4u: goto label_1d30f4;
        case 0x1d30f8u: goto label_1d30f8;
        case 0x1d30fcu: goto label_1d30fc;
        case 0x1d3100u: goto label_1d3100;
        case 0x1d3104u: goto label_1d3104;
        case 0x1d3108u: goto label_1d3108;
        case 0x1d310cu: goto label_1d310c;
        case 0x1d3110u: goto label_1d3110;
        case 0x1d3114u: goto label_1d3114;
        case 0x1d3118u: goto label_1d3118;
        case 0x1d311cu: goto label_1d311c;
        case 0x1d3120u: goto label_1d3120;
        case 0x1d3124u: goto label_1d3124;
        case 0x1d3128u: goto label_1d3128;
        case 0x1d312cu: goto label_1d312c;
        case 0x1d3130u: goto label_1d3130;
        case 0x1d3134u: goto label_1d3134;
        case 0x1d3138u: goto label_1d3138;
        case 0x1d313cu: goto label_1d313c;
        case 0x1d3140u: goto label_1d3140;
        case 0x1d3144u: goto label_1d3144;
        case 0x1d3148u: goto label_1d3148;
        case 0x1d314cu: goto label_1d314c;
        case 0x1d3150u: goto label_1d3150;
        case 0x1d3154u: goto label_1d3154;
        case 0x1d3158u: goto label_1d3158;
        case 0x1d315cu: goto label_1d315c;
        case 0x1d3160u: goto label_1d3160;
        case 0x1d3164u: goto label_1d3164;
        case 0x1d3168u: goto label_1d3168;
        case 0x1d316cu: goto label_1d316c;
        case 0x1d3170u: goto label_1d3170;
        case 0x1d3174u: goto label_1d3174;
        case 0x1d3178u: goto label_1d3178;
        case 0x1d317cu: goto label_1d317c;
        case 0x1d3180u: goto label_1d3180;
        case 0x1d3184u: goto label_1d3184;
        case 0x1d3188u: goto label_1d3188;
        case 0x1d318cu: goto label_1d318c;
        case 0x1d3190u: goto label_1d3190;
        case 0x1d3194u: goto label_1d3194;
        default: break;
    }

    ctx->pc = 0x1d3048u;

label_1d3048:
    // 0x1d3048: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d3048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d304c:
    // 0x1d304c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d304cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d3050:
    // 0x1d3050: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1d3050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1d3054:
    // 0x1d3054: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1d3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1d3058:
    // 0x1d3058: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d3058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d305c:
    // 0x1d305c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1d305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1d3060:
    // 0x1d3060: 0x24558e90  addiu       $s5, $v0, -0x7170
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
label_1d3064:
    // 0x1d3064: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1d3064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1d3068:
    // 0x1d3068: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1d3068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1d306c:
    // 0x1d306c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d306cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d3070:
    // 0x1d3070: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1d3070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1d3074:
    // 0x1d3074: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d3074u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d3078:
    // 0x1d3078: 0x86510076  lh          $s1, 0x76($s2)
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 118)));
label_1d307c:
    // 0x1d307c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d307cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d3080:
    // 0x1d3080: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d3080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d3084:
    // 0x1d3084: 0x101742  srl         $v0, $s0, 29
    ctx->pc = 0x1d3084u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d3088:
    // 0x1d3088: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d3088u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d308c:
    // 0x1d308c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d308cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d3090:
    // 0x1d3090: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d3090u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d3094:
    // 0x1d3094: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1d3094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d3098:
    // 0x1d3098: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d3098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d309c:
    // 0x1d309c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d309cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d30a0:
    // 0x1d30a0: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1d30a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d30a4:
    // 0x1d30a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d30a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d30a8:
    // 0x1d30a8: 0xe0f809  jalr        $a3
label_1d30ac:
    if (ctx->pc == 0x1D30ACu) {
        ctx->pc = 0x1D30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30A8u;
        // 0x1d30ac: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D30B0u;
        goto label_1d30b0;
    }
    ctx->pc = 0x1D30A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D30B0u);
        ctx->pc = 0x1D30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30A8u;
        // 0x1d30ac: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D30A8u, 0x1D30B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D30B0u;
label_1d30b0:
    // 0x1d30b0: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d30b0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d30b4:
    // 0x1d30b4: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_1d30b8:
    if (ctx->pc == 0x1D30B8u) {
        ctx->pc = 0x1D30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30B4u;
        // 0x1d30b8: 0x8e530094  lw          $s3, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D30BCu;
        goto label_1d30bc;
    }
    ctx->pc = 0x1D30B4u;
    {
        const bool branch_taken_0x1d30b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d30b4) {
            ctx->pc = 0x1D30B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D30B4u;
            // 0x1d30b8: 0x8e530094  lw          $s3, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D30C8u;
            goto label_1d30c8;
        }
    }
    ctx->pc = 0x1D30BCu;
label_1d30bc:
    // 0x1d30bc: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d30bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d30c0:
    // 0x1d30c0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1d30c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1d30c4:
    // 0x1d30c4: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d30c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d30c8:
    // 0x1d30c8: 0x26540040  addiu       $s4, $s2, 0x40
    ctx->pc = 0x1d30c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1d30cc:
    // 0x1d30cc: 0x86510074  lh          $s1, 0x74($s2)
    ctx->pc = 0x1d30ccu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d30d0:
    // 0x1d30d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d30d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d30d4:
    // 0x1d30d4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d30d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d30d8:
    // 0x1d30d8: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d30d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d30dc:
    // 0x1d30dc: 0x101742  srl         $v0, $s0, 29
    ctx->pc = 0x1d30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d30e0:
    // 0x1d30e0: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d30e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d30e4:
    // 0x1d30e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d30e8:
    // 0x1d30e8: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d30e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d30ec:
    // 0x1d30ec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1d30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d30f0:
    // 0x1d30f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d30f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d30f4:
    // 0x1d30f4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d30f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d30f8:
    // 0x1d30f8: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1d30f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d30fc:
    // 0x1d30fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d30fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3100:
    // 0x1d3100: 0xe0f809  jalr        $a3
label_1d3104:
    if (ctx->pc == 0x1D3104u) {
        ctx->pc = 0x1D3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3100u;
        // 0x1d3104: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3108u;
        goto label_1d3108;
    }
    ctx->pc = 0x1D3100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D3108u);
        ctx->pc = 0x1D3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3100u;
        // 0x1d3104: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3100u, 0x1D3108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3108u;
label_1d3108:
    // 0x1d3108: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d3108u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d310c:
    // 0x1d310c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1d3110:
    if (ctx->pc == 0x1D3110u) {
        ctx->pc = 0x1D3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D310Cu;
        // 0x1d3110: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3114u;
        goto label_1d3114;
    }
    ctx->pc = 0x1D310Cu;
    {
        const bool branch_taken_0x1d310c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D310Cu;
        // 0x1d3110: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d310c) {
            ctx->pc = 0x1D311Cu;
            goto label_1d311c;
        }
    }
    ctx->pc = 0x1D3114u;
label_1d3114:
    // 0x1d3114: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d3114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3118:
    // 0x1d3118: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d3118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d311c:
    // 0x1d311c: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x1d311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1d3120:
    // 0x1d3120: 0xc0b19e2  jal         func_2C6788
label_1d3124:
    if (ctx->pc == 0x1D3124u) {
        ctx->pc = 0x1D3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3120u;
        // 0x1d3124: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3128u;
        goto label_1d3128;
    }
    ctx->pc = 0x1D3120u;
    SET_GPR_U32(ctx, 31, 0x1D3128u);
    ctx->pc = 0x1D3124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3120u;
    // 0x1d3124: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6788u, 0x1D3120u, 0x1D3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3128u;
label_1d3128:
    // 0x1d3128: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1d3128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1d312c:
    // 0x1d312c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1d312cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1d3130:
    // 0x1d3130: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d3130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1d3134:
    // 0x1d3134: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1d3134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d3138:
    // 0x1d3138: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d3138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d313c:
    // 0x1d313c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3140:
    // 0x1d3140: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d3140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3144:
    // 0x1d3144: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x1d3144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d3148:
    // 0x1d3148: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d3148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d314c:
    // 0x1d314c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1d314cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d3150:
    // 0x1d3150: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1d3150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d3154:
    // 0x1d3154: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1d3154u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d3158:
    // 0x1d3158: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d3158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d315c:
    // 0x1d315c: 0xfa410080  sqc2        $vf1, 0x80($s2)
    ctx->pc = 0x1d315cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d3160:
    // 0x1d3160: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x1d3160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3164:
    // 0x1d3164: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d3164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d3168:
    // 0x1d3168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d3168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d316c:
    // 0x1d316c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1d316cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3170:
    // 0x1d3170: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d3170u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1d3174:
    // 0x1d3174: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1d3174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d3178:
    // 0x1d3178: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1d3178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d317c:
    // 0x1d317c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1d317cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3180:
    // 0x1d3180: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1d3180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d3184:
    // 0x1d3184: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d3184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d3188:
    // 0x1d3188: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x1d3188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_1d318c:
    // 0x1d318c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1d318cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3190:
    // 0x1d3190: 0x3e00008  jr          $ra
label_1d3194:
    if (ctx->pc == 0x1D3194u) {
        ctx->pc = 0x1D3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3190u;
        // 0x1d3194: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3198u;
        goto label_fallthrough_0x1d3190;
    }
    ctx->pc = 0x1D3190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3190u;
        // 0x1d3194: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d3190:
    ctx->pc = 0x1D3198u;
}
