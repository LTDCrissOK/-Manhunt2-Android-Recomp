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

// Function: sub_003255F8
// Address: 0x3255f8 - 0x325780
void sub_003255F8_0x3255f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003255F8_0x3255f8");
#endif

    switch (ctx->pc) {
        case 0x3255f8u: goto label_3255f8;
        case 0x3255fcu: goto label_3255fc;
        case 0x325600u: goto label_325600;
        case 0x325604u: goto label_325604;
        case 0x325608u: goto label_325608;
        case 0x32560cu: goto label_32560c;
        case 0x325610u: goto label_325610;
        case 0x325614u: goto label_325614;
        case 0x325618u: goto label_325618;
        case 0x32561cu: goto label_32561c;
        case 0x325620u: goto label_325620;
        case 0x325624u: goto label_325624;
        case 0x325628u: goto label_325628;
        case 0x32562cu: goto label_32562c;
        case 0x325630u: goto label_325630;
        case 0x325634u: goto label_325634;
        case 0x325638u: goto label_325638;
        case 0x32563cu: goto label_32563c;
        case 0x325640u: goto label_325640;
        case 0x325644u: goto label_325644;
        case 0x325648u: goto label_325648;
        case 0x32564cu: goto label_32564c;
        case 0x325650u: goto label_325650;
        case 0x325654u: goto label_325654;
        case 0x325658u: goto label_325658;
        case 0x32565cu: goto label_32565c;
        case 0x325660u: goto label_325660;
        case 0x325664u: goto label_325664;
        case 0x325668u: goto label_325668;
        case 0x32566cu: goto label_32566c;
        case 0x325670u: goto label_325670;
        case 0x325674u: goto label_325674;
        case 0x325678u: goto label_325678;
        case 0x32567cu: goto label_32567c;
        case 0x325680u: goto label_325680;
        case 0x325684u: goto label_325684;
        case 0x325688u: goto label_325688;
        case 0x32568cu: goto label_32568c;
        case 0x325690u: goto label_325690;
        case 0x325694u: goto label_325694;
        case 0x325698u: goto label_325698;
        case 0x32569cu: goto label_32569c;
        case 0x3256a0u: goto label_3256a0;
        case 0x3256a4u: goto label_3256a4;
        case 0x3256a8u: goto label_3256a8;
        case 0x3256acu: goto label_3256ac;
        case 0x3256b0u: goto label_3256b0;
        case 0x3256b4u: goto label_3256b4;
        case 0x3256b8u: goto label_3256b8;
        case 0x3256bcu: goto label_3256bc;
        case 0x3256c0u: goto label_3256c0;
        case 0x3256c4u: goto label_3256c4;
        case 0x3256c8u: goto label_3256c8;
        case 0x3256ccu: goto label_3256cc;
        case 0x3256d0u: goto label_3256d0;
        case 0x3256d4u: goto label_3256d4;
        case 0x3256d8u: goto label_3256d8;
        case 0x3256dcu: goto label_3256dc;
        case 0x3256e0u: goto label_3256e0;
        case 0x3256e4u: goto label_3256e4;
        case 0x3256e8u: goto label_3256e8;
        case 0x3256ecu: goto label_3256ec;
        case 0x3256f0u: goto label_3256f0;
        case 0x3256f4u: goto label_3256f4;
        case 0x3256f8u: goto label_3256f8;
        case 0x3256fcu: goto label_3256fc;
        case 0x325700u: goto label_325700;
        case 0x325704u: goto label_325704;
        case 0x325708u: goto label_325708;
        case 0x32570cu: goto label_32570c;
        case 0x325710u: goto label_325710;
        case 0x325714u: goto label_325714;
        case 0x325718u: goto label_325718;
        case 0x32571cu: goto label_32571c;
        case 0x325720u: goto label_325720;
        case 0x325724u: goto label_325724;
        case 0x325728u: goto label_325728;
        case 0x32572cu: goto label_32572c;
        case 0x325730u: goto label_325730;
        case 0x325734u: goto label_325734;
        case 0x325738u: goto label_325738;
        case 0x32573cu: goto label_32573c;
        case 0x325740u: goto label_325740;
        case 0x325744u: goto label_325744;
        case 0x325748u: goto label_325748;
        case 0x32574cu: goto label_32574c;
        case 0x325750u: goto label_325750;
        case 0x325754u: goto label_325754;
        case 0x325758u: goto label_325758;
        case 0x32575cu: goto label_32575c;
        case 0x325760u: goto label_325760;
        case 0x325764u: goto label_325764;
        case 0x325768u: goto label_325768;
        case 0x32576cu: goto label_32576c;
        case 0x325770u: goto label_325770;
        case 0x325774u: goto label_325774;
        case 0x325778u: goto label_325778;
        case 0x32577cu: goto label_32577c;
        default: break;
    }

    ctx->pc = 0x3255f8u;

label_3255f8:
    // 0x3255f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3255f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3255fc:
    // 0x3255fc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3255fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_325600:
    // 0x325600: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x325600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_325604:
    // 0x325604: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x325604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_325608:
    // 0x325608: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x325608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_32560c:
    // 0x32560c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32560cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_325610:
    // 0x325610: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x325610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_325614:
    // 0x325614: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x325614u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_325618:
    // 0x325618: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x325618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_32561c:
    // 0x32561c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x32561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_325620:
    // 0x325620: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x325620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_325624:
    // 0x325624: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x325624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_325628:
    // 0x325628: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x325628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_32562c:
    // 0x32562c: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x32562cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_325630:
    // 0x325630: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
label_325634:
    if (ctx->pc == 0x325634u) {
        ctx->pc = 0x325634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325630u;
        // 0x325634: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325638u;
        goto label_325638;
    }
    ctx->pc = 0x325630u;
    {
        const bool branch_taken_0x325630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x325634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325630u;
        // 0x325634: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325630) {
            ctx->pc = 0x325750u;
            goto label_325750;
        }
    }
    ctx->pc = 0x325638u;
label_325638:
    // 0x325638: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x325638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32563c:
    // 0x32563c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x32563cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_325640:
    // 0x325640: 0x26750010  addiu       $s5, $s3, 0x10
    ctx->pc = 0x325640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_325644:
    // 0x325644: 0x26740020  addiu       $s4, $s3, 0x20
    ctx->pc = 0x325644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_325648:
    // 0x325648: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x325648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32564c:
    // 0x32564c: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
label_325650:
    if (ctx->pc == 0x325650u) {
        ctx->pc = 0x325650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32564Cu;
        // 0x325650: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325654u;
        goto label_325654;
    }
    ctx->pc = 0x32564Cu;
    {
        const bool branch_taken_0x32564c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x325650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32564Cu;
        // 0x325650: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32564c) {
            ctx->pc = 0x325698u;
            goto label_325698;
        }
    }
    ctx->pc = 0x325654u;
label_325654:
    // 0x325654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x325654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_325658:
    // 0x325658: 0xc0c918c  jal         func_324630
label_32565c:
    if (ctx->pc == 0x32565Cu) {
        ctx->pc = 0x32565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325658u;
        // 0x32565c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325660u;
        goto label_325660;
    }
    ctx->pc = 0x325658u;
    SET_GPR_U32(ctx, 31, 0x325660u);
    ctx->pc = 0x32565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325658u;
    // 0x32565c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324630u, 0x325658u, 0x325660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325660u;
label_325660:
    // 0x325660: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_325664:
    if (ctx->pc == 0x325664u) {
        ctx->pc = 0x325664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325660u;
        // 0x325664: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325668u;
        goto label_325668;
    }
    ctx->pc = 0x325660u;
    {
        const bool branch_taken_0x325660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325660u;
        // 0x325664: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325660) {
            ctx->pc = 0x325740u;
            goto label_325740;
        }
    }
    ctx->pc = 0x325668u;
label_325668:
    // 0x325668: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x325668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_32566c:
    // 0x32566c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x32566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_325670:
    // 0x325670: 0x9605001e  lhu         $a1, 0x1E($s0)
    ctx->pc = 0x325670u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_325674:
    // 0x325674: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x325674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_325678:
    // 0x325678: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32567c:
    // 0x32567c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x32567cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_325680:
    // 0x325680: 0x2e0f809  jalr        $s7
label_325684:
    if (ctx->pc == 0x325684u) {
        ctx->pc = 0x325684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325680u;
        // 0x325684: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325688u;
        goto label_325688;
    }
    ctx->pc = 0x325680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x325688u);
        ctx->pc = 0x325684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325680u;
        // 0x325684: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325680u, 0x325688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325688u;
label_325688:
    // 0x325688: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_32568c:
    if (ctx->pc == 0x32568Cu) {
        ctx->pc = 0x32568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325688u;
        // 0x32568c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325690u;
        goto label_325690;
    }
    ctx->pc = 0x325688u;
    {
        const bool branch_taken_0x325688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325688u;
        // 0x32568c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325688) {
            ctx->pc = 0x325740u;
            goto label_325740;
        }
    }
    ctx->pc = 0x325690u;
label_325690:
    // 0x325690: 0x10000031  b           . + 4 + (0x31 << 2)
label_325694:
    if (ctx->pc == 0x325694u) {
        ctx->pc = 0x325694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325690u;
        // 0x325694: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325698u;
        goto label_325698;
    }
    ctx->pc = 0x325690u;
    {
        const bool branch_taken_0x325690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325690u;
        // 0x325694: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325690) {
            ctx->pc = 0x325758u;
            goto label_325758;
        }
    }
    ctx->pc = 0x325698u;
label_325698:
    // 0x325698: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x325698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32569c:
    // 0x32569c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x32569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3256a0:
    // 0x3256a0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3256a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3256a4:
    // 0x3256a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3256a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3256a8:
    // 0x3256a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3256a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3256ac:
    // 0x3256ac: 0x0  nop
    ctx->pc = 0x3256acu;
    // NOP
label_3256b0:
    // 0x3256b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3256b4:
    if (ctx->pc == 0x3256B4u) {
        ctx->pc = 0x3256B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256B0u;
        // 0x3256b4: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3256B8u;
        goto label_3256b8;
    }
    ctx->pc = 0x3256B0u;
    {
        const bool branch_taken_0x3256b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3256B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256B0u;
        // 0x3256b4: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256b0) {
            ctx->pc = 0x3256C8u;
            goto label_3256c8;
        }
    }
    ctx->pc = 0x3256B8u;
label_3256b8:
    // 0x3256b8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3256b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3256bc:
    // 0x3256bc: 0x0  nop
    ctx->pc = 0x3256bcu;
    // NOP
label_3256c0:
    // 0x3256c0: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_3256c4:
    if (ctx->pc == 0x3256C4u) {
        ctx->pc = 0x3256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256C0u;
        // 0x3256c4: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3256C8u;
        goto label_3256c8;
    }
    ctx->pc = 0x3256C0u;
    {
        const bool branch_taken_0x3256c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3256c0) {
            ctx->pc = 0x3256C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3256C0u;
            // 0x3256c4: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x32570Cu;
            goto label_32570c;
        }
    }
    ctx->pc = 0x3256C8u;
label_3256c8:
    // 0x3256c8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3256c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3256cc:
    // 0x3256cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3256ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3256d0:
    // 0x3256d0: 0x0  nop
    ctx->pc = 0x3256d0u;
    // NOP
label_3256d4:
    // 0x3256d4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3256d8:
    if (ctx->pc == 0x3256D8u) {
        ctx->pc = 0x3256D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256D4u;
        // 0x3256d8: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3256DCu;
        goto label_3256dc;
    }
    ctx->pc = 0x3256D4u;
    {
        const bool branch_taken_0x3256d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3256d4) {
            ctx->pc = 0x3256D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3256D4u;
            // 0x3256d8: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3256F0u;
            goto label_3256f0;
        }
    }
    ctx->pc = 0x3256DCu;
label_3256dc:
    // 0x3256dc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3256dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3256e0:
    // 0x3256e0: 0x0  nop
    ctx->pc = 0x3256e0u;
    // NOP
label_3256e4:
    // 0x3256e4: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_3256e8:
    if (ctx->pc == 0x3256E8u) {
        ctx->pc = 0x3256E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256E4u;
        // 0x3256e8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3256ECu;
        goto label_3256ec;
    }
    ctx->pc = 0x3256E4u;
    {
        const bool branch_taken_0x3256e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3256e4) {
            ctx->pc = 0x3256E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3256E4u;
            // 0x3256e8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325730u;
            goto label_325730;
        }
    }
    ctx->pc = 0x3256ECu;
label_3256ec:
    // 0x3256ec: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3256ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3256f0:
    // 0x3256f0: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x3256f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_3256f4:
    // 0x3256f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3256f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3256f8:
    // 0x3256f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3256f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3256fc:
    // 0x3256fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3256fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_325700:
    // 0x325700: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x325700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_325704:
    // 0x325704: 0x1000000a  b           . + 4 + (0xA << 2)
label_325708:
    if (ctx->pc == 0x325708u) {
        ctx->pc = 0x325708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325704u;
        // 0x325708: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32570Cu;
        goto label_32570c;
    }
    ctx->pc = 0x325704u;
    {
        const bool branch_taken_0x325704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325704u;
        // 0x325708: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325704) {
            ctx->pc = 0x325730u;
            goto label_325730;
        }
    }
    ctx->pc = 0x32570Cu;
label_32570c:
    // 0x32570c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32570cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_325710:
    // 0x325710: 0x0  nop
    ctx->pc = 0x325710u;
    // NOP
label_325714:
    // 0x325714: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_325718:
    if (ctx->pc == 0x325718u) {
        ctx->pc = 0x325718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325714u;
        // 0x325718: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32571Cu;
        goto label_32571c;
    }
    ctx->pc = 0x325714u;
    {
        const bool branch_taken_0x325714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x325714) {
            ctx->pc = 0x325718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325714u;
            // 0x325718: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325730u;
            goto label_325730;
        }
    }
    ctx->pc = 0x32571Cu;
label_32571c:
    // 0x32571c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x32571cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_325720:
    // 0x325720: 0x0  nop
    ctx->pc = 0x325720u;
    // NOP
label_325724:
    // 0x325724: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_325728:
    if (ctx->pc == 0x325728u) {
        ctx->pc = 0x32572Cu;
        goto label_32572c;
    }
    ctx->pc = 0x325724u;
    {
        const bool branch_taken_0x325724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325724) {
            ctx->pc = 0x325740u;
            goto label_325740;
        }
    }
    ctx->pc = 0x32572Cu;
label_32572c:
    // 0x32572c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x32572cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_325730:
    // 0x325730: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x325730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_325734:
    // 0x325734: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x325734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_325738:
    // 0x325738: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
label_32573c:
    if (ctx->pc == 0x32573Cu) {
        ctx->pc = 0x32573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325738u;
        // 0x32573c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325740u;
        goto label_325740;
    }
    ctx->pc = 0x325738u;
    {
        const bool branch_taken_0x325738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325738u;
        // 0x32573c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325738) {
            ctx->pc = 0x325648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325648;
        }
    }
    ctx->pc = 0x325740u;
label_325740:
    // 0x325740: 0x123d0003  beq         $s1, $sp, . + 4 + (0x3 << 2)
label_325744:
    if (ctx->pc == 0x325744u) {
        ctx->pc = 0x325744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325740u;
        // 0x325744: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325748u;
        goto label_325748;
    }
    ctx->pc = 0x325740u;
    {
        const bool branch_taken_0x325740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x325744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325740u;
        // 0x325744: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325740) {
            ctx->pc = 0x325750u;
            goto label_325750;
        }
    }
    ctx->pc = 0x325748u;
label_325748:
    // 0x325748: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
label_32574c:
    if (ctx->pc == 0x32574Cu) {
        ctx->pc = 0x32574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325748u;
        // 0x32574c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325750u;
        goto label_325750;
    }
    ctx->pc = 0x325748u;
    {
        const bool branch_taken_0x325748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325748u;
        // 0x32574c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325748) {
            ctx->pc = 0x325648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325648;
        }
    }
    ctx->pc = 0x325750u;
label_325750:
    // 0x325750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325754:
    // 0x325754: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x325754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_325758:
    // 0x325758: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x325758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_32575c:
    // 0x32575c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x32575cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_325760:
    // 0x325760: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x325760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_325764:
    // 0x325764: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x325764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_325768:
    // 0x325768: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x325768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_32576c:
    // 0x32576c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x32576cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_325770:
    // 0x325770: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x325770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_325774:
    // 0x325774: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x325774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_325778:
    // 0x325778: 0x3e00008  jr          $ra
label_32577c:
    if (ctx->pc == 0x32577Cu) {
        ctx->pc = 0x32577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325778u;
        // 0x32577c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325780u;
        goto label_fallthrough_0x325778;
    }
    ctx->pc = 0x325778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325778u;
        // 0x32577c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x325778:
    ctx->pc = 0x325780u;
}
