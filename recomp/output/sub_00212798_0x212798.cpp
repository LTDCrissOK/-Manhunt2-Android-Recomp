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

// Function: sub_00212798
// Address: 0x212798 - 0x212918
void sub_00212798_0x212798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212798_0x212798");
#endif

    switch (ctx->pc) {
        case 0x212798u: goto label_212798;
        case 0x21279cu: goto label_21279c;
        case 0x2127a0u: goto label_2127a0;
        case 0x2127a4u: goto label_2127a4;
        case 0x2127a8u: goto label_2127a8;
        case 0x2127acu: goto label_2127ac;
        case 0x2127b0u: goto label_2127b0;
        case 0x2127b4u: goto label_2127b4;
        case 0x2127b8u: goto label_2127b8;
        case 0x2127bcu: goto label_2127bc;
        case 0x2127c0u: goto label_2127c0;
        case 0x2127c4u: goto label_2127c4;
        case 0x2127c8u: goto label_2127c8;
        case 0x2127ccu: goto label_2127cc;
        case 0x2127d0u: goto label_2127d0;
        case 0x2127d4u: goto label_2127d4;
        case 0x2127d8u: goto label_2127d8;
        case 0x2127dcu: goto label_2127dc;
        case 0x2127e0u: goto label_2127e0;
        case 0x2127e4u: goto label_2127e4;
        case 0x2127e8u: goto label_2127e8;
        case 0x2127ecu: goto label_2127ec;
        case 0x2127f0u: goto label_2127f0;
        case 0x2127f4u: goto label_2127f4;
        case 0x2127f8u: goto label_2127f8;
        case 0x2127fcu: goto label_2127fc;
        case 0x212800u: goto label_212800;
        case 0x212804u: goto label_212804;
        case 0x212808u: goto label_212808;
        case 0x21280cu: goto label_21280c;
        case 0x212810u: goto label_212810;
        case 0x212814u: goto label_212814;
        case 0x212818u: goto label_212818;
        case 0x21281cu: goto label_21281c;
        case 0x212820u: goto label_212820;
        case 0x212824u: goto label_212824;
        case 0x212828u: goto label_212828;
        case 0x21282cu: goto label_21282c;
        case 0x212830u: goto label_212830;
        case 0x212834u: goto label_212834;
        case 0x212838u: goto label_212838;
        case 0x21283cu: goto label_21283c;
        case 0x212840u: goto label_212840;
        case 0x212844u: goto label_212844;
        case 0x212848u: goto label_212848;
        case 0x21284cu: goto label_21284c;
        case 0x212850u: goto label_212850;
        case 0x212854u: goto label_212854;
        case 0x212858u: goto label_212858;
        case 0x21285cu: goto label_21285c;
        case 0x212860u: goto label_212860;
        case 0x212864u: goto label_212864;
        case 0x212868u: goto label_212868;
        case 0x21286cu: goto label_21286c;
        case 0x212870u: goto label_212870;
        case 0x212874u: goto label_212874;
        case 0x212878u: goto label_212878;
        case 0x21287cu: goto label_21287c;
        case 0x212880u: goto label_212880;
        case 0x212884u: goto label_212884;
        case 0x212888u: goto label_212888;
        case 0x21288cu: goto label_21288c;
        case 0x212890u: goto label_212890;
        case 0x212894u: goto label_212894;
        case 0x212898u: goto label_212898;
        case 0x21289cu: goto label_21289c;
        case 0x2128a0u: goto label_2128a0;
        case 0x2128a4u: goto label_2128a4;
        case 0x2128a8u: goto label_2128a8;
        case 0x2128acu: goto label_2128ac;
        case 0x2128b0u: goto label_2128b0;
        case 0x2128b4u: goto label_2128b4;
        case 0x2128b8u: goto label_2128b8;
        case 0x2128bcu: goto label_2128bc;
        case 0x2128c0u: goto label_2128c0;
        case 0x2128c4u: goto label_2128c4;
        case 0x2128c8u: goto label_2128c8;
        case 0x2128ccu: goto label_2128cc;
        case 0x2128d0u: goto label_2128d0;
        case 0x2128d4u: goto label_2128d4;
        case 0x2128d8u: goto label_2128d8;
        case 0x2128dcu: goto label_2128dc;
        case 0x2128e0u: goto label_2128e0;
        case 0x2128e4u: goto label_2128e4;
        case 0x2128e8u: goto label_2128e8;
        case 0x2128ecu: goto label_2128ec;
        case 0x2128f0u: goto label_2128f0;
        case 0x2128f4u: goto label_2128f4;
        case 0x2128f8u: goto label_2128f8;
        case 0x2128fcu: goto label_2128fc;
        case 0x212900u: goto label_212900;
        case 0x212904u: goto label_212904;
        case 0x212908u: goto label_212908;
        case 0x21290cu: goto label_21290c;
        case 0x212910u: goto label_212910;
        case 0x212914u: goto label_212914;
        default: break;
    }

    ctx->pc = 0x212798u;

label_212798:
    // 0x212798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21279c:
    // 0x21279c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2127a0:
    // 0x2127a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2127a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2127a4:
    // 0x2127a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2127a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2127a8:
    // 0x2127a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2127a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2127ac:
    // 0x2127ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2127acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2127b0:
    // 0x2127b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2127b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2127b4:
    // 0x2127b4: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x2127b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2127b8:
    // 0x2127b8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2127b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2127bc:
    // 0x2127bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2127c0:
    if (ctx->pc == 0x2127C0u) {
        ctx->pc = 0x2127C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127BCu;
        // 0x2127c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127C4u;
        goto label_2127c4;
    }
    ctx->pc = 0x2127BCu;
    {
        const bool branch_taken_0x2127bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2127C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127BCu;
        // 0x2127c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127bc) {
            ctx->pc = 0x2127D0u;
            goto label_2127d0;
        }
    }
    ctx->pc = 0x2127C4u;
label_2127c4:
    // 0x2127c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2127c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2127c8:
    // 0x2127c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2127cc:
    if (ctx->pc == 0x2127CCu) {
        ctx->pc = 0x2127D0u;
        goto label_2127d0;
    }
    ctx->pc = 0x2127C8u;
    {
        const bool branch_taken_0x2127c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2127c8) {
            ctx->pc = 0x2127D4u;
            goto label_2127d4;
        }
    }
    ctx->pc = 0x2127D0u;
label_2127d0:
    // 0x2127d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2127d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2127d4:
    // 0x2127d4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_2127d8:
    if (ctx->pc == 0x2127D8u) {
        ctx->pc = 0x2127D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127D4u;
        // 0x2127d8: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127DCu;
        goto label_2127dc;
    }
    ctx->pc = 0x2127D4u;
    {
        const bool branch_taken_0x2127d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2127d4) {
            ctx->pc = 0x2127D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2127D4u;
            // 0x2127d8: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2127E8u;
            goto label_2127e8;
        }
    }
    ctx->pc = 0x2127DCu;
label_2127dc:
    // 0x2127dc: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
label_2127e0:
    if (ctx->pc == 0x2127E0u) {
        ctx->pc = 0x2127E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127DCu;
        // 0x2127e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127E4u;
        goto label_2127e4;
    }
    ctx->pc = 0x2127DCu;
    {
        const bool branch_taken_0x2127dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127DCu;
        // 0x2127e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127dc) {
            ctx->pc = 0x212900u;
            goto label_212900;
        }
    }
    ctx->pc = 0x2127E4u;
label_2127e4:
    // 0x2127e4: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2127e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2127e8:
    // 0x2127e8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2127e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2127ec:
    // 0x2127ec: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
label_2127f0:
    if (ctx->pc == 0x2127F0u) {
        ctx->pc = 0x2127F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127ECu;
        // 0x2127f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127F4u;
        goto label_2127f4;
    }
    ctx->pc = 0x2127ECu;
    {
        const bool branch_taken_0x2127ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127ECu;
        // 0x2127f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127ec) {
            ctx->pc = 0x212900u;
            goto label_212900;
        }
    }
    ctx->pc = 0x2127F4u;
label_2127f4:
    // 0x2127f4: 0xc07509e  jal         func_1D4278
label_2127f8:
    if (ctx->pc == 0x2127F8u) {
        ctx->pc = 0x2127FCu;
        goto label_2127fc;
    }
    ctx->pc = 0x2127F4u;
    SET_GPR_U32(ctx, 31, 0x2127FCu);
    ctx->pc = 0x1D4278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4278u, 0x2127F4u, 0x2127FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127FCu;
label_2127fc:
    // 0x2127fc: 0x8e4401b0  lw          $a0, 0x1B0($s2)
    ctx->pc = 0x2127fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_212800:
    // 0x212800: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
label_212804:
    if (ctx->pc == 0x212804u) {
        ctx->pc = 0x212804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212800u;
        // 0x212804: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212808u;
        goto label_212808;
    }
    ctx->pc = 0x212800u;
    {
        const bool branch_taken_0x212800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x212804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212800u;
        // 0x212804: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212800) {
            ctx->pc = 0x212900u;
            goto label_212900;
        }
    }
    ctx->pc = 0x212808u;
label_212808:
    // 0x212808: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x212808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_21280c:
    // 0x21280c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_212810:
    if (ctx->pc == 0x212810u) {
        ctx->pc = 0x212810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21280Cu;
        // 0x212810: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212814u;
        goto label_212814;
    }
    ctx->pc = 0x21280Cu;
    {
        const bool branch_taken_0x21280c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21280Cu;
        // 0x212810: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21280c) {
            ctx->pc = 0x212900u;
            goto label_212900;
        }
    }
    ctx->pc = 0x212814u;
label_212814:
    // 0x212814: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x212814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_212818:
    // 0x212818: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21281c:
    // 0x21281c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_212820:
    // 0x212820: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x212820u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_212824:
    // 0x212824: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_212828:
    if (ctx->pc == 0x212828u) {
        ctx->pc = 0x212828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212824u;
        // 0x212828: 0x8c8300c0  lw          $v1, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21282Cu;
        goto label_21282c;
    }
    ctx->pc = 0x212824u;
    {
        const bool branch_taken_0x212824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x212824) {
            ctx->pc = 0x212828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212824u;
            // 0x212828: 0x8c8300c0  lw          $v1, 0xC0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21283Cu;
            goto label_21283c;
        }
    }
    ctx->pc = 0x21282Cu;
label_21282c:
    // 0x21282c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x21282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_212830:
    // 0x212830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x212830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_212834:
    // 0x212834: 0x10000005  b           . + 4 + (0x5 << 2)
label_212838:
    if (ctx->pc == 0x212838u) {
        ctx->pc = 0x212838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212834u;
        // 0x212838: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21283Cu;
        goto label_21283c;
    }
    ctx->pc = 0x212834u;
    {
        const bool branch_taken_0x212834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212834u;
        // 0x212838: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212834) {
            ctx->pc = 0x21284Cu;
            goto label_21284c;
        }
    }
    ctx->pc = 0x21283Cu;
label_21283c:
    // 0x21283c: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x21283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_212840:
    // 0x212840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x212840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_212844:
    // 0x212844: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x212844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_212848:
    // 0x212848: 0xac8300c0  sw          $v1, 0xC0($a0)
    ctx->pc = 0x212848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 3));
label_21284c:
    // 0x21284c: 0xc0f773a  jal         func_3DDCE8
label_212850:
    if (ctx->pc == 0x212850u) {
        ctx->pc = 0x212854u;
        goto label_212854;
    }
    ctx->pc = 0x21284Cu;
    SET_GPR_U32(ctx, 31, 0x212854u);
    ctx->pc = 0x3DDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDCE8u, 0x21284Cu, 0x212854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212854u;
label_212854:
    // 0x212854: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x212854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_212858:
    // 0x212858: 0x8e5101b4  lw          $s1, 0x1B4($s2)
    ctx->pc = 0x212858u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_21285c:
    // 0x21285c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x21285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_212860:
    // 0x212860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_212864:
    // 0x212864: 0xc0f70ce  jal         func_3DC338
label_212868:
    if (ctx->pc == 0x212868u) {
        ctx->pc = 0x212868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212864u;
        // 0x212868: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21286Cu;
        goto label_21286c;
    }
    ctx->pc = 0x212864u;
    SET_GPR_U32(ctx, 31, 0x21286Cu);
    ctx->pc = 0x212868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212864u;
    // 0x212868: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x212864u, 0x21286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21286Cu;
label_21286c:
    // 0x21286c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_212870:
    if (ctx->pc == 0x212870u) {
        ctx->pc = 0x212870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21286Cu;
        // 0x212870: 0x26220080  addiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212874u;
        goto label_212874;
    }
    ctx->pc = 0x21286Cu;
    {
        const bool branch_taken_0x21286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21286Cu;
        // 0x212870: 0x26220080  addiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21286c) {
            ctx->pc = 0x212880u;
            goto label_212880;
        }
    }
    ctx->pc = 0x212874u;
label_212874:
    // 0x212874: 0xc0c4900  jal         func_312400
label_212878:
    if (ctx->pc == 0x212878u) {
        ctx->pc = 0x212878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212874u;
        // 0x212878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21287Cu;
        goto label_21287c;
    }
    ctx->pc = 0x212874u;
    SET_GPR_U32(ctx, 31, 0x21287Cu);
    ctx->pc = 0x212878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212874u;
    // 0x212878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x212874u, 0x21287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21287Cu;
label_21287c:
    // 0x21287c: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x21287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_212880:
    // 0x212880: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x212880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_212884:
    // 0x212884: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x212884u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_212888:
    // 0x212888: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x212888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_21288c:
    // 0x21288c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x21288cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_212890:
    // 0x212890: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x212890u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_212894:
    // 0x212894: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x212894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_212898:
    // 0x212898: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x212898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21289c:
    // 0x21289c: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x21289cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2128a0:
    // 0x2128a0: 0x26130070  addiu       $s3, $s0, 0x70
    ctx->pc = 0x2128a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2128a4:
    // 0x2128a4: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x2128a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_2128a8:
    // 0x2128a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2128a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2128ac:
    // 0x2128ac: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x2128acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2128b0:
    // 0x2128b0: 0x8e4401b0  lw          $a0, 0x1B0($s2)
    ctx->pc = 0x2128b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_2128b4:
    // 0x2128b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2128b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2128b8:
    // 0x2128b8: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2128b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2128bc:
    // 0x2128bc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2128bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2128c0:
    // 0x2128c0: 0x40f809  jalr        $v0
label_2128c4:
    if (ctx->pc == 0x2128C4u) {
        ctx->pc = 0x2128C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128C0u;
        // 0x2128c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128C8u;
        goto label_2128c8;
    }
    ctx->pc = 0x2128C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2128C8u);
        ctx->pc = 0x2128C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128C0u;
        // 0x2128c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2128C0u, 0x2128C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2128C8u;
label_2128c8:
    // 0x2128c8: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x2128c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_2128cc:
    // 0x2128cc: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2128ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2128d0:
    // 0x2128d0: 0xc0c48da  jal         func_312368
label_2128d4:
    if (ctx->pc == 0x2128D4u) {
        ctx->pc = 0x2128D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128D0u;
        // 0x2128d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128D8u;
        goto label_2128d8;
    }
    ctx->pc = 0x2128D0u;
    SET_GPR_U32(ctx, 31, 0x2128D8u);
    ctx->pc = 0x2128D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2128D0u;
    // 0x2128d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x2128D0u, 0x2128D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2128D8u;
label_2128d8:
    // 0x2128d8: 0x8e4401b0  lw          $a0, 0x1B0($s2)
    ctx->pc = 0x2128d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_2128dc:
    // 0x2128dc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2128dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2128e0:
    // 0x2128e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2128e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2128e4:
    // 0x2128e4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2128e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_2128e8:
    // 0x2128e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2128e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2128ec:
    // 0x2128ec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2128f0:
    if (ctx->pc == 0x2128F0u) {
        ctx->pc = 0x2128F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128ECu;
        // 0x2128f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128F4u;
        goto label_2128f4;
    }
    ctx->pc = 0x2128ECu;
    {
        const bool branch_taken_0x2128ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2128F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128ECu;
        // 0x2128f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128ec) {
            ctx->pc = 0x212900u;
            goto label_212900;
        }
    }
    ctx->pc = 0x2128F4u;
label_2128f4:
    // 0x2128f4: 0xc09c3d4  jal         func_270F50
label_2128f8:
    if (ctx->pc == 0x2128F8u) {
        ctx->pc = 0x2128F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128F4u;
        // 0x2128f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128FCu;
        goto label_2128fc;
    }
    ctx->pc = 0x2128F4u;
    SET_GPR_U32(ctx, 31, 0x2128FCu);
    ctx->pc = 0x2128F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2128F4u;
    // 0x2128f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270F50u, 0x2128F4u, 0x2128FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2128FCu;
label_2128fc:
    // 0x2128fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2128fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212900:
    // 0x212900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_212904:
    // 0x212904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212908:
    // 0x212908: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x212908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21290c:
    // 0x21290c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212910:
    // 0x212910: 0x3e00008  jr          $ra
label_212914:
    if (ctx->pc == 0x212914u) {
        ctx->pc = 0x212914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212910u;
        // 0x212914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212918u;
        goto label_fallthrough_0x212910;
    }
    ctx->pc = 0x212910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212910u;
        // 0x212914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212910:
    ctx->pc = 0x212918u;
}
