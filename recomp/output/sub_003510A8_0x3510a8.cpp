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

// Function: sub_003510A8
// Address: 0x3510a8 - 0x351370
void sub_003510A8_0x3510a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003510A8_0x3510a8");
#endif

    switch (ctx->pc) {
        case 0x3510a8u: goto label_3510a8;
        case 0x3510acu: goto label_3510ac;
        case 0x3510b0u: goto label_3510b0;
        case 0x3510b4u: goto label_3510b4;
        case 0x3510b8u: goto label_3510b8;
        case 0x3510bcu: goto label_3510bc;
        case 0x3510c0u: goto label_3510c0;
        case 0x3510c4u: goto label_3510c4;
        case 0x3510c8u: goto label_3510c8;
        case 0x3510ccu: goto label_3510cc;
        case 0x3510d0u: goto label_3510d0;
        case 0x3510d4u: goto label_3510d4;
        case 0x3510d8u: goto label_3510d8;
        case 0x3510dcu: goto label_3510dc;
        case 0x3510e0u: goto label_3510e0;
        case 0x3510e4u: goto label_3510e4;
        case 0x3510e8u: goto label_3510e8;
        case 0x3510ecu: goto label_3510ec;
        case 0x3510f0u: goto label_3510f0;
        case 0x3510f4u: goto label_3510f4;
        case 0x3510f8u: goto label_3510f8;
        case 0x3510fcu: goto label_3510fc;
        case 0x351100u: goto label_351100;
        case 0x351104u: goto label_351104;
        case 0x351108u: goto label_351108;
        case 0x35110cu: goto label_35110c;
        case 0x351110u: goto label_351110;
        case 0x351114u: goto label_351114;
        case 0x351118u: goto label_351118;
        case 0x35111cu: goto label_35111c;
        case 0x351120u: goto label_351120;
        case 0x351124u: goto label_351124;
        case 0x351128u: goto label_351128;
        case 0x35112cu: goto label_35112c;
        case 0x351130u: goto label_351130;
        case 0x351134u: goto label_351134;
        case 0x351138u: goto label_351138;
        case 0x35113cu: goto label_35113c;
        case 0x351140u: goto label_351140;
        case 0x351144u: goto label_351144;
        case 0x351148u: goto label_351148;
        case 0x35114cu: goto label_35114c;
        case 0x351150u: goto label_351150;
        case 0x351154u: goto label_351154;
        case 0x351158u: goto label_351158;
        case 0x35115cu: goto label_35115c;
        case 0x351160u: goto label_351160;
        case 0x351164u: goto label_351164;
        case 0x351168u: goto label_351168;
        case 0x35116cu: goto label_35116c;
        case 0x351170u: goto label_351170;
        case 0x351174u: goto label_351174;
        case 0x351178u: goto label_351178;
        case 0x35117cu: goto label_35117c;
        case 0x351180u: goto label_351180;
        case 0x351184u: goto label_351184;
        case 0x351188u: goto label_351188;
        case 0x35118cu: goto label_35118c;
        case 0x351190u: goto label_351190;
        case 0x351194u: goto label_351194;
        case 0x351198u: goto label_351198;
        case 0x35119cu: goto label_35119c;
        case 0x3511a0u: goto label_3511a0;
        case 0x3511a4u: goto label_3511a4;
        case 0x3511a8u: goto label_3511a8;
        case 0x3511acu: goto label_3511ac;
        case 0x3511b0u: goto label_3511b0;
        case 0x3511b4u: goto label_3511b4;
        case 0x3511b8u: goto label_3511b8;
        case 0x3511bcu: goto label_3511bc;
        case 0x3511c0u: goto label_3511c0;
        case 0x3511c4u: goto label_3511c4;
        case 0x3511c8u: goto label_3511c8;
        case 0x3511ccu: goto label_3511cc;
        case 0x3511d0u: goto label_3511d0;
        case 0x3511d4u: goto label_3511d4;
        case 0x3511d8u: goto label_3511d8;
        case 0x3511dcu: goto label_3511dc;
        case 0x3511e0u: goto label_3511e0;
        case 0x3511e4u: goto label_3511e4;
        case 0x3511e8u: goto label_3511e8;
        case 0x3511ecu: goto label_3511ec;
        case 0x3511f0u: goto label_3511f0;
        case 0x3511f4u: goto label_3511f4;
        case 0x3511f8u: goto label_3511f8;
        case 0x3511fcu: goto label_3511fc;
        case 0x351200u: goto label_351200;
        case 0x351204u: goto label_351204;
        case 0x351208u: goto label_351208;
        case 0x35120cu: goto label_35120c;
        case 0x351210u: goto label_351210;
        case 0x351214u: goto label_351214;
        case 0x351218u: goto label_351218;
        case 0x35121cu: goto label_35121c;
        case 0x351220u: goto label_351220;
        case 0x351224u: goto label_351224;
        case 0x351228u: goto label_351228;
        case 0x35122cu: goto label_35122c;
        case 0x351230u: goto label_351230;
        case 0x351234u: goto label_351234;
        case 0x351238u: goto label_351238;
        case 0x35123cu: goto label_35123c;
        case 0x351240u: goto label_351240;
        case 0x351244u: goto label_351244;
        case 0x351248u: goto label_351248;
        case 0x35124cu: goto label_35124c;
        case 0x351250u: goto label_351250;
        case 0x351254u: goto label_351254;
        case 0x351258u: goto label_351258;
        case 0x35125cu: goto label_35125c;
        case 0x351260u: goto label_351260;
        case 0x351264u: goto label_351264;
        case 0x351268u: goto label_351268;
        case 0x35126cu: goto label_35126c;
        case 0x351270u: goto label_351270;
        case 0x351274u: goto label_351274;
        case 0x351278u: goto label_351278;
        case 0x35127cu: goto label_35127c;
        case 0x351280u: goto label_351280;
        case 0x351284u: goto label_351284;
        case 0x351288u: goto label_351288;
        case 0x35128cu: goto label_35128c;
        case 0x351290u: goto label_351290;
        case 0x351294u: goto label_351294;
        case 0x351298u: goto label_351298;
        case 0x35129cu: goto label_35129c;
        case 0x3512a0u: goto label_3512a0;
        case 0x3512a4u: goto label_3512a4;
        case 0x3512a8u: goto label_3512a8;
        case 0x3512acu: goto label_3512ac;
        case 0x3512b0u: goto label_3512b0;
        case 0x3512b4u: goto label_3512b4;
        case 0x3512b8u: goto label_3512b8;
        case 0x3512bcu: goto label_3512bc;
        case 0x3512c0u: goto label_3512c0;
        case 0x3512c4u: goto label_3512c4;
        case 0x3512c8u: goto label_3512c8;
        case 0x3512ccu: goto label_3512cc;
        case 0x3512d0u: goto label_3512d0;
        case 0x3512d4u: goto label_3512d4;
        case 0x3512d8u: goto label_3512d8;
        case 0x3512dcu: goto label_3512dc;
        case 0x3512e0u: goto label_3512e0;
        case 0x3512e4u: goto label_3512e4;
        case 0x3512e8u: goto label_3512e8;
        case 0x3512ecu: goto label_3512ec;
        case 0x3512f0u: goto label_3512f0;
        case 0x3512f4u: goto label_3512f4;
        case 0x3512f8u: goto label_3512f8;
        case 0x3512fcu: goto label_3512fc;
        case 0x351300u: goto label_351300;
        case 0x351304u: goto label_351304;
        case 0x351308u: goto label_351308;
        case 0x35130cu: goto label_35130c;
        case 0x351310u: goto label_351310;
        case 0x351314u: goto label_351314;
        case 0x351318u: goto label_351318;
        case 0x35131cu: goto label_35131c;
        case 0x351320u: goto label_351320;
        case 0x351324u: goto label_351324;
        case 0x351328u: goto label_351328;
        case 0x35132cu: goto label_35132c;
        case 0x351330u: goto label_351330;
        case 0x351334u: goto label_351334;
        case 0x351338u: goto label_351338;
        case 0x35133cu: goto label_35133c;
        case 0x351340u: goto label_351340;
        case 0x351344u: goto label_351344;
        case 0x351348u: goto label_351348;
        case 0x35134cu: goto label_35134c;
        case 0x351350u: goto label_351350;
        case 0x351354u: goto label_351354;
        case 0x351358u: goto label_351358;
        case 0x35135cu: goto label_35135c;
        case 0x351360u: goto label_351360;
        case 0x351364u: goto label_351364;
        case 0x351368u: goto label_351368;
        case 0x35136cu: goto label_35136c;
        default: break;
    }

    ctx->pc = 0x3510a8u;

label_3510a8:
    // 0x3510a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3510a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3510ac:
    // 0x3510ac: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3510acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_3510b0:
    // 0x3510b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3510b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3510b4:
    // 0x3510b4: 0x2444be50  addiu       $a0, $v0, -0x41B0
    ctx->pc = 0x3510b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
label_3510b8:
    // 0x3510b8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3510b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_3510bc:
    // 0x3510bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3510bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3510c0:
    // 0x3510c0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3510c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3510c4:
    // 0x3510c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3510c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3510c8:
    // 0x3510c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3510c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3510cc:
    // 0x3510cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3510ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3510d0:
    // 0x3510d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3510d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3510d4:
    // 0x3510d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3510d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3510d8:
    // 0x3510d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3510d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_3510dc:
    // 0x3510dc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x3510dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3510e0:
    // 0x3510e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3510e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3510e4:
    // 0x3510e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3510e8:
    if (ctx->pc == 0x3510E8u) {
        ctx->pc = 0x3510E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510E4u;
        // 0x3510e8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3510ECu;
        goto label_3510ec;
    }
    ctx->pc = 0x3510E4u;
    {
        const bool branch_taken_0x3510e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510E4u;
        // 0x3510e8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510e4) {
            ctx->pc = 0x3510F0u;
            goto label_3510f0;
        }
    }
    ctx->pc = 0x3510ECu;
label_3510ec:
    // 0x3510ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3510ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3510f0:
    // 0x3510f0: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_3510f4:
    if (ctx->pc == 0x3510F4u) {
        ctx->pc = 0x3510F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510F0u;
        // 0x3510f4: 0x3c12005c  lui         $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3510F8u;
        goto label_3510f8;
    }
    ctx->pc = 0x3510F0u;
    {
        const bool branch_taken_0x3510f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510F0u;
        // 0x3510f4: 0x3c12005c  lui         $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510f0) {
            ctx->pc = 0x351184u;
            goto label_351184;
        }
    }
    ctx->pc = 0x3510F8u;
label_3510f8:
    // 0x3510f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3510f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3510fc:
    // 0x3510fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3510fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351100:
    // 0x351100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351104:
    // 0x351104: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x351104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_351108:
    // 0x351108: 0x40f809  jalr        $v0
label_35110c:
    if (ctx->pc == 0x35110Cu) {
        ctx->pc = 0x35110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351108u;
        // 0x35110c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351110u;
        goto label_351110;
    }
    ctx->pc = 0x351108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351110u);
        ctx->pc = 0x35110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351108u;
        // 0x35110c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351108u, 0x351110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351110u;
label_351110:
    // 0x351110: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x351110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351114:
    // 0x351114: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x351114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_351118:
    // 0x351118: 0x40f809  jalr        $v0
label_35111c:
    if (ctx->pc == 0x35111Cu) {
        ctx->pc = 0x35111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351118u;
        // 0x35111c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351120u;
        goto label_351120;
    }
    ctx->pc = 0x351118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351120u);
        ctx->pc = 0x35111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351118u;
        // 0x35111c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351118u, 0x351120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351120u;
label_351120:
    // 0x351120: 0x2663be50  addiu       $v1, $s3, -0x41B0
    ctx->pc = 0x351120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950480));
label_351124:
    // 0x351124: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_351128:
    if (ctx->pc == 0x351128u) {
        ctx->pc = 0x351128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351124u;
        // 0x351128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35112Cu;
        goto label_35112c;
    }
    ctx->pc = 0x351124u;
    {
        const bool branch_taken_0x351124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351124u;
        // 0x351128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351124) {
            ctx->pc = 0x351158u;
            goto label_351158;
        }
    }
    ctx->pc = 0x35112Cu;
label_35112c:
    // 0x35112c: 0xc0fbc98  jal         func_3EF260
label_351130:
    if (ctx->pc == 0x351130u) {
        ctx->pc = 0x351130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35112Cu;
        // 0x351130: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351134u;
        goto label_351134;
    }
    ctx->pc = 0x35112Cu;
    SET_GPR_U32(ctx, 31, 0x351134u);
    ctx->pc = 0x351130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35112Cu;
    // 0x351130: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF260u, 0x35112Cu, 0x351134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351134u;
label_351134:
    // 0x351134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351138:
    // 0x351138: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_35113c:
    if (ctx->pc == 0x35113Cu) {
        ctx->pc = 0x35113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351138u;
        // 0x35113c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351140u;
        goto label_351140;
    }
    ctx->pc = 0x351138u;
    {
        const bool branch_taken_0x351138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351138u;
        // 0x35113c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351138) {
            ctx->pc = 0x35116Cu;
            goto label_35116c;
        }
    }
    ctx->pc = 0x351140u;
label_351140:
    // 0x351140: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x351140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351144:
    // 0x351144: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x351144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_351148:
    // 0x351148: 0x60f809  jalr        $v1
label_35114c:
    if (ctx->pc == 0x35114Cu) {
        ctx->pc = 0x351150u;
        goto label_351150;
    }
    ctx->pc = 0x351148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351150u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351148u, 0x351150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351150u;
label_351150:
    // 0x351150: 0x10000007  b           . + 4 + (0x7 << 2)
label_351154:
    if (ctx->pc == 0x351154u) {
        ctx->pc = 0x351154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351150u;
        // 0x351154: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351158u;
        goto label_351158;
    }
    ctx->pc = 0x351150u;
    {
        const bool branch_taken_0x351150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351150u;
        // 0x351154: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351150) {
            ctx->pc = 0x351170u;
            goto label_351170;
        }
    }
    ctx->pc = 0x351158u;
label_351158:
    // 0x351158: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x351158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_35115c:
    // 0x35115c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_351160:
    if (ctx->pc == 0x351160u) {
        ctx->pc = 0x351160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35115Cu;
        // 0x351160: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351164u;
        goto label_351164;
    }
    ctx->pc = 0x35115Cu;
    {
        const bool branch_taken_0x35115c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35115c) {
            ctx->pc = 0x351160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35115Cu;
            // 0x351160: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351170u;
            goto label_351170;
        }
    }
    ctx->pc = 0x351164u;
label_351164:
    // 0x351164: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x351164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_351168:
    // 0x351168: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x351168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_35116c:
    // 0x35116c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x35116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351170:
    // 0x351170: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351174:
    if (ctx->pc == 0x351174u) {
        ctx->pc = 0x351174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351170u;
        // 0x351174: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351178u;
        goto label_351178;
    }
    ctx->pc = 0x351170u;
    {
        const bool branch_taken_0x351170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351170u;
        // 0x351174: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351170) {
            ctx->pc = 0x35117Cu;
            goto label_35117c;
        }
    }
    ctx->pc = 0x351178u;
label_351178:
    // 0x351178: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35117c:
    // 0x35117c: 0x5600ffe0  bnel        $s0, $zero, . + 4 + (-0x20 << 2)
label_351180:
    if (ctx->pc == 0x351180u) {
        ctx->pc = 0x351180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35117Cu;
        // 0x351180: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351184u;
        goto label_351184;
    }
    ctx->pc = 0x35117Cu;
    {
        const bool branch_taken_0x35117c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x35117c) {
            ctx->pc = 0x351180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35117Cu;
            // 0x351180: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351100;
        }
    }
    ctx->pc = 0x351184u;
label_351184:
    // 0x351184: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x351184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_351188:
    // 0x351188: 0x2643be70  addiu       $v1, $s2, -0x4190
    ctx->pc = 0x351188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
label_35118c:
    // 0x35118c: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x35118cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_351190:
    // 0x351190: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x351190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_351194:
    // 0x351194: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x351194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_351198:
    // 0x351198: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x351198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_35119c:
    // 0x35119c: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x35119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_3511a0:
    // 0x3511a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3511a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3511a4:
    // 0x3511a4: 0x3c01451c  lui         $at, 0x451C
    ctx->pc = 0x3511a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17692 << 16));
label_3511a8:
    // 0x3511a8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x3511a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_3511ac:
    // 0x3511ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3511acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3511b0:
    // 0x3511b0: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x3511b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3511b4:
    // 0x3511b4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3511b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_3511b8:
    // 0x3511b8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3511b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3511bc:
    // 0x3511bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3511bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3511c0:
    // 0x3511c0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3511c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3511c4:
    // 0x3511c4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3511c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3511c8:
    // 0x3511c8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3511c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3511cc:
    // 0x3511cc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3511ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3511d0:
    // 0x3511d0: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x3511d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_3511d4:
    // 0x3511d4: 0x10000056  b           . + 4 + (0x56 << 2)
label_3511d8:
    if (ctx->pc == 0x3511D8u) {
        ctx->pc = 0x3511D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511D4u;
        // 0x3511d8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3511DCu;
        goto label_3511dc;
    }
    ctx->pc = 0x3511D4u;
    {
        const bool branch_taken_0x3511d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3511D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511D4u;
        // 0x3511d8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3511d4) {
            ctx->pc = 0x351330u;
            goto label_351330;
        }
    }
    ctx->pc = 0x3511DCu;
label_3511dc:
    // 0x3511dc: 0x0  nop
    ctx->pc = 0x3511dcu;
    // NOP
label_3511e0:
    // 0x3511e0: 0xc0d27c0  jal         func_349F00
label_3511e4:
    if (ctx->pc == 0x3511E4u) {
        ctx->pc = 0x3511E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511E0u;
        // 0x3511e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3511E8u;
        goto label_3511e8;
    }
    ctx->pc = 0x3511E0u;
    SET_GPR_U32(ctx, 31, 0x3511E8u);
    ctx->pc = 0x3511E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3511E0u;
    // 0x3511e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F00u, 0x3511E0u, 0x3511E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511E8u;
label_3511e8:
    // 0x3511e8: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_3511ec:
    if (ctx->pc == 0x3511ECu) {
        ctx->pc = 0x3511ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511E8u;
        // 0x3511ec: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3511F0u;
        goto label_3511f0;
    }
    ctx->pc = 0x3511E8u;
    {
        const bool branch_taken_0x3511e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3511e8) {
            ctx->pc = 0x3511ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3511E8u;
            // 0x3511ec: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3512B0u;
            goto label_3512b0;
        }
    }
    ctx->pc = 0x3511F0u;
label_3511f0:
    // 0x3511f0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3511f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3511f4:
    // 0x3511f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3511f8:
    if (ctx->pc == 0x3511F8u) {
        ctx->pc = 0x3511F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511F4u;
        // 0x3511f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3511FCu;
        goto label_3511fc;
    }
    ctx->pc = 0x3511F4u;
    {
        const bool branch_taken_0x3511f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3511F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511F4u;
        // 0x3511f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3511f4) {
            ctx->pc = 0x351224u;
            goto label_351224;
        }
    }
    ctx->pc = 0x3511FCu;
label_3511fc:
    // 0x3511fc: 0xc0d1e7e  jal         func_3479F8
label_351200:
    if (ctx->pc == 0x351200u) {
        ctx->pc = 0x351200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511FCu;
        // 0x351200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351204u;
        goto label_351204;
    }
    ctx->pc = 0x3511FCu;
    SET_GPR_U32(ctx, 31, 0x351204u);
    ctx->pc = 0x351200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3511FCu;
    // 0x351200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3479F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3479F8u, 0x3511FCu, 0x351204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351204u;
label_351204:
    // 0x351204: 0xc0d244a  jal         func_349128
label_351208:
    if (ctx->pc == 0x351208u) {
        ctx->pc = 0x351208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351204u;
        // 0x351208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35120Cu;
        goto label_35120c;
    }
    ctx->pc = 0x351204u;
    SET_GPR_U32(ctx, 31, 0x35120Cu);
    ctx->pc = 0x351208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351204u;
    // 0x351208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349128u, 0x351204u, 0x35120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35120Cu;
label_35120c:
    // 0x35120c: 0xc0d27c4  jal         func_349F10
label_351210:
    if (ctx->pc == 0x351210u) {
        ctx->pc = 0x351210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35120Cu;
        // 0x351210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351214u;
        goto label_351214;
    }
    ctx->pc = 0x35120Cu;
    SET_GPR_U32(ctx, 31, 0x351214u);
    ctx->pc = 0x351210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35120Cu;
    // 0x351210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F10u, 0x35120Cu, 0x351214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351214u;
label_351214:
    // 0x351214: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
label_351218:
    if (ctx->pc == 0x351218u) {
        ctx->pc = 0x351218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351214u;
        // 0x351218: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35121Cu;
        goto label_35121c;
    }
    ctx->pc = 0x351214u;
    {
        const bool branch_taken_0x351214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351214) {
            ctx->pc = 0x351218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351214u;
            // 0x351218: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351300u;
            goto label_351300;
        }
    }
    ctx->pc = 0x35121Cu;
label_35121c:
    // 0x35121c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_351220:
    if (ctx->pc == 0x351220u) {
        ctx->pc = 0x351220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35121Cu;
        // 0x351220: 0x2643be70  addiu       $v1, $s2, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351224u;
        goto label_351224;
    }
    ctx->pc = 0x35121Cu;
    {
        const bool branch_taken_0x35121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35121Cu;
        // 0x351220: 0x2643be70  addiu       $v1, $s2, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35121c) {
            ctx->pc = 0x35131Cu;
            goto label_35131c;
        }
    }
    ctx->pc = 0x351224u;
label_351224:
    // 0x351224: 0xc0d244a  jal         func_349128
label_351228:
    if (ctx->pc == 0x351228u) {
        ctx->pc = 0x351228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351224u;
        // 0x351228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35122Cu;
        goto label_35122c;
    }
    ctx->pc = 0x351224u;
    SET_GPR_U32(ctx, 31, 0x35122Cu);
    ctx->pc = 0x351228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351224u;
    // 0x351228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349128u, 0x351224u, 0x35122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35122Cu;
label_35122c:
    // 0x35122c: 0xc0d23c8  jal         func_348F20
label_351230:
    if (ctx->pc == 0x351230u) {
        ctx->pc = 0x351230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35122Cu;
        // 0x351230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351234u;
        goto label_351234;
    }
    ctx->pc = 0x35122Cu;
    SET_GPR_U32(ctx, 31, 0x351234u);
    ctx->pc = 0x351230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35122Cu;
    // 0x351230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348F20u, 0x35122Cu, 0x351234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351234u;
label_351234:
    // 0x351234: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x351234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_351238:
    // 0x351238: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x351238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_35123c:
    // 0x35123c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35123cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_351240:
    // 0x351240: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x351240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351244:
    // 0x351244: 0xc0f6a9a  jal         func_3DAA68
label_351248:
    if (ctx->pc == 0x351248u) {
        ctx->pc = 0x351248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351244u;
        // 0x351248: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35124Cu;
        goto label_35124c;
    }
    ctx->pc = 0x351244u;
    SET_GPR_U32(ctx, 31, 0x35124Cu);
    ctx->pc = 0x351248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351244u;
    // 0x351248: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x351244u, 0x35124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35124Cu;
label_35124c:
    // 0x35124c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x35124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351250:
    // 0x351250: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x351250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351254:
    // 0x351254: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x351254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_351258:
    // 0x351258: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x351258u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_35125c:
    // 0x35125c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35125cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_351260:
    // 0x351260: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x351260u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_351264:
    // 0x351264: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x351264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_351268:
    // 0x351268: 0x0  nop
    ctx->pc = 0x351268u;
    // NOP
label_35126c:
    // 0x35126c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_351270:
    if (ctx->pc == 0x351270u) {
        ctx->pc = 0x351274u;
        goto label_351274;
    }
    ctx->pc = 0x35126Cu;
    {
        const bool branch_taken_0x35126c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35126c) {
            ctx->pc = 0x351284u;
            goto label_351284;
        }
    }
    ctx->pc = 0x351274u;
label_351274:
    // 0x351274: 0xc0a03d8  jal         func_280F60
label_351278:
    if (ctx->pc == 0x351278u) {
        ctx->pc = 0x35127Cu;
        goto label_35127c;
    }
    ctx->pc = 0x351274u;
    SET_GPR_U32(ctx, 31, 0x35127Cu);
    ctx->pc = 0x280F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F60u, 0x351274u, 0x35127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35127Cu;
label_35127c:
    // 0x35127c: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
label_351280:
    if (ctx->pc == 0x351280u) {
        ctx->pc = 0x351280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35127Cu;
        // 0x351280: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351284u;
        goto label_351284;
    }
    ctx->pc = 0x35127Cu;
    {
        const bool branch_taken_0x35127c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x35127c) {
            ctx->pc = 0x351280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35127Cu;
            // 0x351280: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351298u;
            goto label_351298;
        }
    }
    ctx->pc = 0x351284u;
label_351284:
    // 0x351284: 0xc0d27c4  jal         func_349F10
label_351288:
    if (ctx->pc == 0x351288u) {
        ctx->pc = 0x351288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351284u;
        // 0x351288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35128Cu;
        goto label_35128c;
    }
    ctx->pc = 0x351284u;
    SET_GPR_U32(ctx, 31, 0x35128Cu);
    ctx->pc = 0x351288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351284u;
    // 0x351288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F10u, 0x351284u, 0x35128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35128Cu;
label_35128c:
    // 0x35128c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_351290:
    if (ctx->pc == 0x351290u) {
        ctx->pc = 0x351290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35128Cu;
        // 0x351290: 0x2643be70  addiu       $v1, $s2, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351294u;
        goto label_351294;
    }
    ctx->pc = 0x35128Cu;
    {
        const bool branch_taken_0x35128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35128Cu;
        // 0x351290: 0x2643be70  addiu       $v1, $s2, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35128c) {
            ctx->pc = 0x35131Cu;
            goto label_35131c;
        }
    }
    ctx->pc = 0x351294u;
label_351294:
    // 0x351294: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x351294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351298:
    // 0x351298: 0xc0fbc50  jal         func_3EF140
label_35129c:
    if (ctx->pc == 0x35129Cu) {
        ctx->pc = 0x35129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351298u;
        // 0x35129c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3512A0u;
        goto label_3512a0;
    }
    ctx->pc = 0x351298u;
    SET_GPR_U32(ctx, 31, 0x3512A0u);
    ctx->pc = 0x35129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351298u;
    // 0x35129c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF140u, 0x351298u, 0x3512A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512A0u;
label_3512a0:
    // 0x3512a0: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_3512a4:
    if (ctx->pc == 0x3512A4u) {
        ctx->pc = 0x3512A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512A0u;
        // 0x3512a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3512A8u;
        goto label_3512a8;
    }
    ctx->pc = 0x3512A0u;
    {
        const bool branch_taken_0x3512a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3512A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512A0u;
        // 0x3512a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512a0) {
            ctx->pc = 0x351330u;
            goto label_351330;
        }
    }
    ctx->pc = 0x3512A8u;
label_3512a8:
    // 0x3512a8: 0x10000018  b           . + 4 + (0x18 << 2)
label_3512ac:
    if (ctx->pc == 0x3512ACu) {
        ctx->pc = 0x3512B0u;
        goto label_3512b0;
    }
    ctx->pc = 0x3512A8u;
    {
        const bool branch_taken_0x3512a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3512a8) {
            ctx->pc = 0x35130Cu;
            goto label_35130c;
        }
    }
    ctx->pc = 0x3512B0u;
label_3512b0:
    // 0x3512b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3512b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3512b4:
    // 0x3512b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3512b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3512b8:
    // 0x3512b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3512b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3512bc:
    // 0x3512bc: 0xc0f6a9a  jal         func_3DAA68
label_3512c0:
    if (ctx->pc == 0x3512C0u) {
        ctx->pc = 0x3512C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512BCu;
        // 0x3512c0: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3512C4u;
        goto label_3512c4;
    }
    ctx->pc = 0x3512BCu;
    SET_GPR_U32(ctx, 31, 0x3512C4u);
    ctx->pc = 0x3512C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3512BCu;
    // 0x3512c0: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x3512BCu, 0x3512C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512C4u;
label_3512c4:
    // 0x3512c4: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x3512c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3512c8:
    // 0x3512c8: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x3512c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3512cc:
    // 0x3512cc: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x3512ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3512d0:
    // 0x3512d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3512d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_3512d4:
    // 0x3512d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3512d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_3512d8:
    // 0x3512d8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3512d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_3512dc:
    // 0x3512dc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x3512dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3512e0:
    // 0x3512e0: 0x0  nop
    ctx->pc = 0x3512e0u;
    // NOP
label_3512e4:
    // 0x3512e4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_3512e8:
    if (ctx->pc == 0x3512E8u) {
        ctx->pc = 0x3512E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512E4u;
        // 0x3512e8: 0x2643be70  addiu       $v1, $s2, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3512ECu;
        goto label_3512ec;
    }
    ctx->pc = 0x3512E4u;
    {
        const bool branch_taken_0x3512e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3512E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512E4u;
        // 0x3512e8: 0x2643be70  addiu       $v1, $s2, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512e4) {
            ctx->pc = 0x35131Cu;
            goto label_35131c;
        }
    }
    ctx->pc = 0x3512ECu;
label_3512ec:
    // 0x3512ec: 0xc0a03d8  jal         func_280F60
label_3512f0:
    if (ctx->pc == 0x3512F0u) {
        ctx->pc = 0x3512F4u;
        goto label_3512f4;
    }
    ctx->pc = 0x3512ECu;
    SET_GPR_U32(ctx, 31, 0x3512F4u);
    ctx->pc = 0x280F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F60u, 0x3512ECu, 0x3512F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512F4u;
label_3512f4:
    // 0x3512f4: 0x10530009  beq         $v0, $s3, . + 4 + (0x9 << 2)
label_3512f8:
    if (ctx->pc == 0x3512F8u) {
        ctx->pc = 0x3512F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512F4u;
        // 0x3512f8: 0x2643be70  addiu       $v1, $s2, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3512FCu;
        goto label_3512fc;
    }
    ctx->pc = 0x3512F4u;
    {
        const bool branch_taken_0x3512f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3512F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3512F4u;
        // 0x3512f8: 0x2643be70  addiu       $v1, $s2, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512f4) {
            ctx->pc = 0x35131Cu;
            goto label_35131c;
        }
    }
    ctx->pc = 0x3512FCu;
label_3512fc:
    // 0x3512fc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3512fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351300:
    // 0x351300: 0xc0fbc50  jal         func_3EF140
label_351304:
    if (ctx->pc == 0x351304u) {
        ctx->pc = 0x351304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351300u;
        // 0x351304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351308u;
        goto label_351308;
    }
    ctx->pc = 0x351300u;
    SET_GPR_U32(ctx, 31, 0x351308u);
    ctx->pc = 0x351304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351300u;
    // 0x351304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF140u, 0x351300u, 0x351308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351308u;
label_351308:
    // 0x351308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35130c:
    // 0x35130c: 0xc0d1e40  jal         func_347900
label_351310:
    if (ctx->pc == 0x351310u) {
        ctx->pc = 0x351310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35130Cu;
        // 0x351310: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351314u;
        goto label_351314;
    }
    ctx->pc = 0x35130Cu;
    SET_GPR_U32(ctx, 31, 0x351314u);
    ctx->pc = 0x351310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35130Cu;
    // 0x351310: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x35130Cu, 0x351314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351314u;
label_351314:
    // 0x351314: 0x10000007  b           . + 4 + (0x7 << 2)
label_351318:
    if (ctx->pc == 0x351318u) {
        ctx->pc = 0x351318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351314u;
        // 0x351318: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35131Cu;
        goto label_35131c;
    }
    ctx->pc = 0x351314u;
    {
        const bool branch_taken_0x351314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351314u;
        // 0x351318: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351314) {
            ctx->pc = 0x351334u;
            goto label_351334;
        }
    }
    ctx->pc = 0x35131Cu;
label_35131c:
    // 0x35131c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x35131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_351320:
    // 0x351320: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_351324:
    if (ctx->pc == 0x351324u) {
        ctx->pc = 0x351324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351320u;
        // 0x351324: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351328u;
        goto label_351328;
    }
    ctx->pc = 0x351320u;
    {
        const bool branch_taken_0x351320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351320) {
            ctx->pc = 0x351324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351320u;
            // 0x351324: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351334u;
            goto label_351334;
        }
    }
    ctx->pc = 0x351328u;
label_351328:
    // 0x351328: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x351328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35132c:
    // 0x35132c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x35132cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_351330:
    // 0x351330: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x351330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351334:
    // 0x351334: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351338:
    if (ctx->pc == 0x351338u) {
        ctx->pc = 0x351338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351334u;
        // 0x351338: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35133Cu;
        goto label_35133c;
    }
    ctx->pc = 0x351334u;
    {
        const bool branch_taken_0x351334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351334u;
        // 0x351338: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351334) {
            ctx->pc = 0x351340u;
            goto label_351340;
        }
    }
    ctx->pc = 0x35133Cu;
label_35133c:
    // 0x35133c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x35133cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351340:
    // 0x351340: 0x1600ffa7  bnez        $s0, . + 4 + (-0x59 << 2)
label_351344:
    if (ctx->pc == 0x351344u) {
        ctx->pc = 0x351344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351340u;
        // 0x351344: 0xdfbf0048  ld          $ra, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351348u;
        goto label_351348;
    }
    ctx->pc = 0x351340u;
    {
        const bool branch_taken_0x351340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351340u;
        // 0x351344: 0xdfbf0048  ld          $ra, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351340) {
            ctx->pc = 0x3511E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3511e0;
        }
    }
    ctx->pc = 0x351348u;
label_351348:
    // 0x351348: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x351348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35134c:
    // 0x35134c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x35134cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_351350:
    // 0x351350: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x351350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_351354:
    // 0x351354: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x351354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_351358:
    // 0x351358: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x351358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35135c:
    // 0x35135c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x35135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_351360:
    // 0x351360: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x351360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_351364:
    // 0x351364: 0x3e00008  jr          $ra
label_351368:
    if (ctx->pc == 0x351368u) {
        ctx->pc = 0x351368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351364u;
        // 0x351368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35136Cu;
        goto label_35136c;
    }
    ctx->pc = 0x351364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351364u;
        // 0x351368: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35136Cu;
label_35136c:
    // 0x35136c: 0x0  nop
    ctx->pc = 0x35136cu;
    // NOP
    ctx->pc = 0x351370u;
}
