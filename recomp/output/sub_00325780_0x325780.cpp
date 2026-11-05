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

// Function: sub_00325780
// Address: 0x325780 - 0x3258f0
void sub_00325780_0x325780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325780_0x325780");
#endif

    switch (ctx->pc) {
        case 0x325780u: goto label_325780;
        case 0x325784u: goto label_325784;
        case 0x325788u: goto label_325788;
        case 0x32578cu: goto label_32578c;
        case 0x325790u: goto label_325790;
        case 0x325794u: goto label_325794;
        case 0x325798u: goto label_325798;
        case 0x32579cu: goto label_32579c;
        case 0x3257a0u: goto label_3257a0;
        case 0x3257a4u: goto label_3257a4;
        case 0x3257a8u: goto label_3257a8;
        case 0x3257acu: goto label_3257ac;
        case 0x3257b0u: goto label_3257b0;
        case 0x3257b4u: goto label_3257b4;
        case 0x3257b8u: goto label_3257b8;
        case 0x3257bcu: goto label_3257bc;
        case 0x3257c0u: goto label_3257c0;
        case 0x3257c4u: goto label_3257c4;
        case 0x3257c8u: goto label_3257c8;
        case 0x3257ccu: goto label_3257cc;
        case 0x3257d0u: goto label_3257d0;
        case 0x3257d4u: goto label_3257d4;
        case 0x3257d8u: goto label_3257d8;
        case 0x3257dcu: goto label_3257dc;
        case 0x3257e0u: goto label_3257e0;
        case 0x3257e4u: goto label_3257e4;
        case 0x3257e8u: goto label_3257e8;
        case 0x3257ecu: goto label_3257ec;
        case 0x3257f0u: goto label_3257f0;
        case 0x3257f4u: goto label_3257f4;
        case 0x3257f8u: goto label_3257f8;
        case 0x3257fcu: goto label_3257fc;
        case 0x325800u: goto label_325800;
        case 0x325804u: goto label_325804;
        case 0x325808u: goto label_325808;
        case 0x32580cu: goto label_32580c;
        case 0x325810u: goto label_325810;
        case 0x325814u: goto label_325814;
        case 0x325818u: goto label_325818;
        case 0x32581cu: goto label_32581c;
        case 0x325820u: goto label_325820;
        case 0x325824u: goto label_325824;
        case 0x325828u: goto label_325828;
        case 0x32582cu: goto label_32582c;
        case 0x325830u: goto label_325830;
        case 0x325834u: goto label_325834;
        case 0x325838u: goto label_325838;
        case 0x32583cu: goto label_32583c;
        case 0x325840u: goto label_325840;
        case 0x325844u: goto label_325844;
        case 0x325848u: goto label_325848;
        case 0x32584cu: goto label_32584c;
        case 0x325850u: goto label_325850;
        case 0x325854u: goto label_325854;
        case 0x325858u: goto label_325858;
        case 0x32585cu: goto label_32585c;
        case 0x325860u: goto label_325860;
        case 0x325864u: goto label_325864;
        case 0x325868u: goto label_325868;
        case 0x32586cu: goto label_32586c;
        case 0x325870u: goto label_325870;
        case 0x325874u: goto label_325874;
        case 0x325878u: goto label_325878;
        case 0x32587cu: goto label_32587c;
        case 0x325880u: goto label_325880;
        case 0x325884u: goto label_325884;
        case 0x325888u: goto label_325888;
        case 0x32588cu: goto label_32588c;
        case 0x325890u: goto label_325890;
        case 0x325894u: goto label_325894;
        case 0x325898u: goto label_325898;
        case 0x32589cu: goto label_32589c;
        case 0x3258a0u: goto label_3258a0;
        case 0x3258a4u: goto label_3258a4;
        case 0x3258a8u: goto label_3258a8;
        case 0x3258acu: goto label_3258ac;
        case 0x3258b0u: goto label_3258b0;
        case 0x3258b4u: goto label_3258b4;
        case 0x3258b8u: goto label_3258b8;
        case 0x3258bcu: goto label_3258bc;
        case 0x3258c0u: goto label_3258c0;
        case 0x3258c4u: goto label_3258c4;
        case 0x3258c8u: goto label_3258c8;
        case 0x3258ccu: goto label_3258cc;
        case 0x3258d0u: goto label_3258d0;
        case 0x3258d4u: goto label_3258d4;
        case 0x3258d8u: goto label_3258d8;
        case 0x3258dcu: goto label_3258dc;
        case 0x3258e0u: goto label_3258e0;
        case 0x3258e4u: goto label_3258e4;
        case 0x3258e8u: goto label_3258e8;
        case 0x3258ecu: goto label_3258ec;
        default: break;
    }

    ctx->pc = 0x325780u;

label_325780:
    // 0x325780: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x325780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_325784:
    // 0x325784: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x325784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_325788:
    // 0x325788: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x325788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_32578c:
    // 0x32578c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32578cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_325790:
    // 0x325790: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x325790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_325794:
    // 0x325794: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x325794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_325798:
    // 0x325798: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x325798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_32579c:
    // 0x32579c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x32579cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3257a0:
    // 0x3257a0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3257a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_3257a4:
    // 0x3257a4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3257a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_3257a8:
    // 0x3257a8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x3257a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_3257ac:
    // 0x3257ac: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x3257acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_3257b0:
    // 0x3257b0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3257b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3257b4:
    // 0x3257b4: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x3257b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_3257b8:
    // 0x3257b8: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
label_3257bc:
    if (ctx->pc == 0x3257BCu) {
        ctx->pc = 0x3257BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257B8u;
        // 0x3257bc: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3257C0u;
        goto label_3257c0;
    }
    ctx->pc = 0x3257B8u;
    {
        const bool branch_taken_0x3257b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257B8u;
        // 0x3257bc: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257b8) {
            ctx->pc = 0x3258ACu;
            goto label_3258ac;
        }
    }
    ctx->pc = 0x3257C0u;
label_3257c0:
    // 0x3257c0: 0xc6740020  lwc1        $f20, 0x20($s3)
    ctx->pc = 0x3257c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3257c4:
    // 0x3257c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3257c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3257c8:
    // 0x3257c8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3257c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3257cc:
    // 0x3257cc: 0x26740010  addiu       $s4, $s3, 0x10
    ctx->pc = 0x3257ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3257d0:
    // 0x3257d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3257d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3257d4:
    // 0x3257d4: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
label_3257d8:
    if (ctx->pc == 0x3257D8u) {
        ctx->pc = 0x3257D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257D4u;
        // 0x3257d8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3257DCu;
        goto label_3257dc;
    }
    ctx->pc = 0x3257D4u;
    {
        const bool branch_taken_0x3257d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3257D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257D4u;
        // 0x3257d8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257d4) {
            ctx->pc = 0x325820u;
            goto label_325820;
        }
    }
    ctx->pc = 0x3257DCu;
label_3257dc:
    // 0x3257dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3257dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3257e0:
    // 0x3257e0: 0xc0c9240  jal         func_324900
label_3257e4:
    if (ctx->pc == 0x3257E4u) {
        ctx->pc = 0x3257E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257E0u;
        // 0x3257e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3257E8u;
        goto label_3257e8;
    }
    ctx->pc = 0x3257E0u;
    SET_GPR_U32(ctx, 31, 0x3257E8u);
    ctx->pc = 0x3257E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3257E0u;
    // 0x3257e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324900u, 0x3257E0u, 0x3257E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257E8u;
label_3257e8:
    // 0x3257e8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_3257ec:
    if (ctx->pc == 0x3257ECu) {
        ctx->pc = 0x3257ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257E8u;
        // 0x3257ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3257F0u;
        goto label_3257f0;
    }
    ctx->pc = 0x3257E8u;
    {
        const bool branch_taken_0x3257e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257E8u;
        // 0x3257ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257e8) {
            ctx->pc = 0x32589Cu;
            goto label_32589c;
        }
    }
    ctx->pc = 0x3257F0u;
label_3257f0:
    // 0x3257f0: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x3257f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_3257f4:
    // 0x3257f4: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x3257f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3257f8:
    // 0x3257f8: 0x9605001e  lhu         $a1, 0x1E($s0)
    ctx->pc = 0x3257f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_3257fc:
    // 0x3257fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3257fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_325800:
    // 0x325800: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_325804:
    // 0x325804: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x325804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_325808:
    // 0x325808: 0x2c0f809  jalr        $s6
label_32580c:
    if (ctx->pc == 0x32580Cu) {
        ctx->pc = 0x32580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325808u;
        // 0x32580c: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325810u;
        goto label_325810;
    }
    ctx->pc = 0x325808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x325810u);
        ctx->pc = 0x32580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325808u;
        // 0x32580c: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325808u, 0x325810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325810u;
label_325810:
    // 0x325810: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_325814:
    if (ctx->pc == 0x325814u) {
        ctx->pc = 0x325814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325810u;
        // 0x325814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325818u;
        goto label_325818;
    }
    ctx->pc = 0x325810u;
    {
        const bool branch_taken_0x325810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325810u;
        // 0x325814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325810) {
            ctx->pc = 0x32589Cu;
            goto label_32589c;
        }
    }
    ctx->pc = 0x325818u;
label_325818:
    // 0x325818: 0x10000026  b           . + 4 + (0x26 << 2)
label_32581c:
    if (ctx->pc == 0x32581Cu) {
        ctx->pc = 0x32581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325818u;
        // 0x32581c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325820u;
        goto label_325820;
    }
    ctx->pc = 0x325818u;
    {
        const bool branch_taken_0x325818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325818u;
        // 0x32581c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325818) {
            ctx->pc = 0x3258B4u;
            goto label_3258b4;
        }
    }
    ctx->pc = 0x325820u;
label_325820:
    // 0x325820: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x325820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_325824:
    // 0x325824: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x325824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_325828:
    // 0x325828: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x325828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32582c:
    // 0x32582c: 0x46141001  sub.s       $f0, $f2, $f20
    ctx->pc = 0x32582cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_325830:
    // 0x325830: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x325830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_325834:
    // 0x325834: 0x0  nop
    ctx->pc = 0x325834u;
    // NOP
label_325838:
    // 0x325838: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_32583c:
    if (ctx->pc == 0x32583Cu) {
        ctx->pc = 0x32583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325838u;
        // 0x32583c: 0x46141040  add.s       $f1, $f2, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x325840u;
        goto label_325840;
    }
    ctx->pc = 0x325838u;
    {
        const bool branch_taken_0x325838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325838u;
        // 0x32583c: 0x46141040  add.s       $f1, $f2, $f20 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325838) {
            ctx->pc = 0x325874u;
            goto label_325874;
        }
    }
    ctx->pc = 0x325840u;
label_325840:
    // 0x325840: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x325840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_325844:
    // 0x325844: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x325844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_325848:
    // 0x325848: 0x0  nop
    ctx->pc = 0x325848u;
    // NOP
label_32584c:
    // 0x32584c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_325850:
    if (ctx->pc == 0x325850u) {
        ctx->pc = 0x325850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32584Cu;
        // 0x325850: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325854u;
        goto label_325854;
    }
    ctx->pc = 0x32584Cu;
    {
        const bool branch_taken_0x32584c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32584c) {
            ctx->pc = 0x325850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32584Cu;
            // 0x325850: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32588Cu;
            goto label_32588c;
        }
    }
    ctx->pc = 0x325854u;
label_325854:
    // 0x325854: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x325854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_325858:
    // 0x325858: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x325858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_32585c:
    // 0x32585c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32585cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_325860:
    // 0x325860: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x325860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_325864:
    // 0x325864: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x325864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_325868:
    // 0x325868: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x325868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_32586c:
    // 0x32586c: 0x10000007  b           . + 4 + (0x7 << 2)
label_325870:
    if (ctx->pc == 0x325870u) {
        ctx->pc = 0x325870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32586Cu;
        // 0x325870: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325874u;
        goto label_325874;
    }
    ctx->pc = 0x32586Cu;
    {
        const bool branch_taken_0x32586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32586Cu;
        // 0x325870: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32586c) {
            ctx->pc = 0x32588Cu;
            goto label_32588c;
        }
    }
    ctx->pc = 0x325874u;
label_325874:
    // 0x325874: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x325874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_325878:
    // 0x325878: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x325878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32587c:
    // 0x32587c: 0x0  nop
    ctx->pc = 0x32587cu;
    // NOP
label_325880:
    // 0x325880: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_325884:
    if (ctx->pc == 0x325884u) {
        ctx->pc = 0x325888u;
        goto label_325888;
    }
    ctx->pc = 0x325880u;
    {
        const bool branch_taken_0x325880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325880) {
            ctx->pc = 0x32589Cu;
            goto label_32589c;
        }
    }
    ctx->pc = 0x325888u;
label_325888:
    // 0x325888: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x325888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_32588c:
    // 0x32588c: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x32588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_325890:
    // 0x325890: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x325890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_325894:
    // 0x325894: 0x1000ffce  b           . + 4 + (-0x32 << 2)
label_325898:
    if (ctx->pc == 0x325898u) {
        ctx->pc = 0x325898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325894u;
        // 0x325898: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32589Cu;
        goto label_32589c;
    }
    ctx->pc = 0x325894u;
    {
        const bool branch_taken_0x325894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325894u;
        // 0x325898: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325894) {
            ctx->pc = 0x3257D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3257d0;
        }
    }
    ctx->pc = 0x32589Cu;
label_32589c:
    // 0x32589c: 0x123d0003  beq         $s1, $sp, . + 4 + (0x3 << 2)
label_3258a0:
    if (ctx->pc == 0x3258A0u) {
        ctx->pc = 0x3258A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32589Cu;
        // 0x3258a0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3258A4u;
        goto label_3258a4;
    }
    ctx->pc = 0x32589Cu;
    {
        const bool branch_taken_0x32589c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x3258A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32589Cu;
        // 0x3258a0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32589c) {
            ctx->pc = 0x3258ACu;
            goto label_3258ac;
        }
    }
    ctx->pc = 0x3258A4u;
label_3258a4:
    // 0x3258a4: 0x1000ffca  b           . + 4 + (-0x36 << 2)
label_3258a8:
    if (ctx->pc == 0x3258A8u) {
        ctx->pc = 0x3258A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258A4u;
        // 0x3258a8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3258ACu;
        goto label_3258ac;
    }
    ctx->pc = 0x3258A4u;
    {
        const bool branch_taken_0x3258a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3258A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258A4u;
        // 0x3258a8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258a4) {
            ctx->pc = 0x3257D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3257d0;
        }
    }
    ctx->pc = 0x3258ACu;
label_3258ac:
    // 0x3258ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3258acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3258b0:
    // 0x3258b0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x3258b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3258b4:
    // 0x3258b4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x3258b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_3258b8:
    // 0x3258b8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x3258b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3258bc:
    // 0x3258bc: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x3258bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_3258c0:
    // 0x3258c0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x3258c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3258c4:
    // 0x3258c4: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x3258c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_3258c8:
    // 0x3258c8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x3258c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3258cc:
    // 0x3258cc: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x3258ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_3258d0:
    // 0x3258d0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3258d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3258d4:
    // 0x3258d4: 0x3e00008  jr          $ra
label_3258d8:
    if (ctx->pc == 0x3258D8u) {
        ctx->pc = 0x3258D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258D4u;
        // 0x3258d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3258DCu;
        goto label_3258dc;
    }
    ctx->pc = 0x3258D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3258D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258D4u;
        // 0x3258d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3258D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3258DCu;
label_3258dc:
    // 0x3258dc: 0x0  nop
    ctx->pc = 0x3258dcu;
    // NOP
label_3258e0:
    // 0x3258e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3258e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3258e4:
    // 0x3258e4: 0x0  nop
    ctx->pc = 0x3258e4u;
    // NOP
label_3258e8:
    // 0x3258e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3258e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3258ec:
    // 0x3258ec: 0x0  nop
    ctx->pc = 0x3258ecu;
    // NOP
    ctx->pc = 0x3258f0u;
}
