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

// Function: sub_003863B8
// Address: 0x3863b8 - 0x386648
void sub_003863B8_0x3863b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003863B8_0x3863b8");
#endif

    switch (ctx->pc) {
        case 0x3864a0u: goto label_3864a0;
        case 0x3864b0u: goto label_3864b0;
        case 0x3864b8u: goto label_3864b8;
        case 0x3864c0u: goto label_3864c0;
        case 0x3864fcu: goto label_3864fc;
        case 0x386510u: goto label_386510;
        case 0x386534u: goto label_386534;
        case 0x386578u: goto label_386578;
        case 0x386588u: goto label_386588;
        case 0x3865b0u: goto label_3865b0;
        default: break;
    }

    ctx->pc = 0x3863b8u;

    // 0x3863b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3863b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3863bc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3863bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3863c0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3863c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x3863c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3863c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3863c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3863c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3863cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3863ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3863d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3863d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3863d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3863d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3863d8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x3863d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x3863dc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x3863dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x3863e0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x3863e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x3863e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3863e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3863e8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3863e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x3863ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3863ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3863f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3863f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3863f4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3863f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3863f8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3863f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3863fc: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x3863fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x386400: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x386400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x386404: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x386404u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x386408: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x386408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38640c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x386410: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x386410u;
    {
        const bool branch_taken_0x386410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x386414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386410u;
        // 0x386414: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386410) {
            ctx->pc = 0x38642Cu;
            goto label_38642c;
        }
    }
    ctx->pc = 0x386418u;
    // 0x386418: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x386418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x38641c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38641Cu;
    {
        const bool branch_taken_0x38641c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x386420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38641Cu;
        // 0x386420: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38641c) {
            ctx->pc = 0x386464u;
            goto label_386464;
        }
    }
    ctx->pc = 0x386424u;
    // 0x386424: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386424u;
    {
        const bool branch_taken_0x386424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386424u;
        // 0x386428: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386424) {
            ctx->pc = 0x386438u;
            goto label_386438;
        }
    }
    ctx->pc = 0x38642Cu;
label_38642c:
    // 0x38642c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x38642cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386430: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x386430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x386434: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x386434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_386438:
    // 0x386438: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x386438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x38643c: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x38643cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x386440: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x386440u;
    {
        const bool branch_taken_0x386440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386440u;
        // 0x386444: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386440) {
            ctx->pc = 0x386454u;
            goto label_386454;
        }
    }
    ctx->pc = 0x386448u;
    // 0x386448: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x386448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x38644c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38644Cu;
    {
        const bool branch_taken_0x38644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38644Cu;
        // 0x386450: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38644c) {
            ctx->pc = 0x386458u;
            goto label_386458;
        }
    }
    ctx->pc = 0x386454u;
label_386454:
    // 0x386454: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x386454u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_386458:
    // 0x386458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x386458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38645c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38645Cu;
    {
        const bool branch_taken_0x38645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38645Cu;
        // 0x386460: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38645c) {
            ctx->pc = 0x38648Cu;
            goto label_38648c;
        }
    }
    ctx->pc = 0x386464u;
label_386464:
    // 0x386464: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x386464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x386468: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x386468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x38646c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x38646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x386470: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x386470u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x386474: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x386474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x386478: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x386478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x38647c: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x38647cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x386480: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x386480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386484: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x386484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x386488: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x386488u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_38648c:
    // 0x38648c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x38648cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x386490: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x386490u;
    {
        const bool branch_taken_0x386490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x386494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386490u;
        // 0x386494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386490) {
            ctx->pc = 0x386618u;
            goto label_386618;
        }
    }
    ctx->pc = 0x386498u;
    // 0x386498: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x386498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x38649c: 0x0  nop
    ctx->pc = 0x38649cu;
    // NOP
label_3864a0:
    // 0x3864a0: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x3864a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3864a4: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x3864A4u;
    {
        const bool branch_taken_0x3864a4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3864A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864A4u;
        // 0x3864a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3864a4) {
            ctx->pc = 0x3865E4u;
            goto label_3865e4;
        }
    }
    ctx->pc = 0x3864ACu;
    // 0x3864ac: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x3864acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3864b0:
    // 0x3864b0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3864B0u;
    SET_GPR_U32(ctx, 31, 0x3864B8u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3864B0u, 0x3864B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864B8u;
label_3864b8:
    // 0x3864b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3864b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3864bc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3864bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_3864c0:
    // 0x3864c0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x3864c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x3864c4: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x3864c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x3864c8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3864c8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x3864cc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3864ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3864d0: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x3864d0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18)); // MMIO: 0x1000d410
    // 0x3864d4: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x3864d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x3864d8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3864d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3864dc: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x3864dcu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20)); // MMIO: 0x1000d420
    // 0x3864e0: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x3864e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x3864e4: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x3864e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x3864e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3864e8u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3)); // MMIO: 0x1000d400
    // 0x3864ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3864ECu;
    {
        const bool branch_taken_0x3864ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3864F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864ECu;
        // 0x3864f0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3864ec) {
            ctx->pc = 0x386500u;
            goto label_386500;
        }
    }
    ctx->pc = 0x3864F4u;
    // 0x3864f4: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3864F4u;
    SET_GPR_U32(ctx, 31, 0x3864FCu);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3864F4u, 0x3864FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864FCu;
label_3864fc:
    // 0x3864fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3864fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_386500:
    // 0x386500: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x386500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x386504: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x386504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x386508: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x386508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x38650c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x38650cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_386510:
    // 0x386510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x386510u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x386514: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x386514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x386518: 0x0  nop
    ctx->pc = 0x386518u;
    // NOP
    // 0x38651c: 0x0  nop
    ctx->pc = 0x38651cu;
    // NOP
    // 0x386520: 0x0  nop
    ctx->pc = 0x386520u;
    // NOP
    // 0x386524: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x386524u;
    {
        const bool branch_taken_0x386524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386524) {
            ctx->pc = 0x386510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386510;
        }
    }
    ctx->pc = 0x38652Cu;
    // 0x38652c: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x38652Cu;
    SET_GPR_U32(ctx, 31, 0x386534u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x38652Cu, 0x386534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386534u;
label_386534:
    // 0x386534: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x386534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x386538: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x386538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x38653c: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x38653cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x386540: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x386540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x386544: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x386544u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x386548: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x386548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x38654c: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x38654cu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x386550: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x386550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x386554: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x386554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x386558: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x386558u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20)); // MMIO: 0x1000d020
    // 0x38655c: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x38655cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x386560: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x386560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x386564: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x386564u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x386568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386568u;
    {
        const bool branch_taken_0x386568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386568u;
        // 0x38656c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386568) {
            ctx->pc = 0x38657Cu;
            goto label_38657c;
        }
    }
    ctx->pc = 0x386570u;
    // 0x386570: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x386570u;
    SET_GPR_U32(ctx, 31, 0x386578u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x386570u, 0x386578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386578u;
label_386578:
    // 0x386578: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x386578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_38657c:
    // 0x38657c: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x38657cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x386580: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x386580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x386584: 0x0  nop
    ctx->pc = 0x386584u;
    // NOP
label_386588:
    // 0x386588: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x386588u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d000
    // 0x38658c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x386590: 0x0  nop
    ctx->pc = 0x386590u;
    // NOP
    // 0x386594: 0x0  nop
    ctx->pc = 0x386594u;
    // NOP
    // 0x386598: 0x0  nop
    ctx->pc = 0x386598u;
    // NOP
    // 0x38659c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38659Cu;
    {
        const bool branch_taken_0x38659c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38659c) {
            ctx->pc = 0x386588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386588;
        }
    }
    ctx->pc = 0x3865A4u;
    // 0x3865a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3865a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3865a8: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x3865a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x3865ac: 0x0  nop
    ctx->pc = 0x3865acu;
    // NOP
label_3865b0:
    // 0x3865b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3865b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d020
    // 0x3865b4: 0x0  nop
    ctx->pc = 0x3865b4u;
    // NOP
    // 0x3865b8: 0x0  nop
    ctx->pc = 0x3865b8u;
    // NOP
    // 0x3865bc: 0x0  nop
    ctx->pc = 0x3865bcu;
    // NOP
    // 0x3865c0: 0x0  nop
    ctx->pc = 0x3865c0u;
    // NOP
    // 0x3865c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3865C4u;
    {
        const bool branch_taken_0x3865c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3865c4) {
            ctx->pc = 0x3865B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3865b0;
        }
    }
    ctx->pc = 0x3865CCu;
    // 0x3865cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3865ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3865d0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3865d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3865d4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x3865D4u;
    {
        const bool branch_taken_0x3865d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3865D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865D4u;
        // 0x3865d8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865d4) {
            ctx->pc = 0x3864B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3864b0;
        }
    }
    ctx->pc = 0x3865DCu;
    // 0x3865dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3865DCu;
    {
        const bool branch_taken_0x3865dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3865E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865DCu;
        // 0x3865e0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865dc) {
            ctx->pc = 0x3865ECu;
            goto label_3865ec;
        }
    }
    ctx->pc = 0x3865E4u;
label_3865e4:
    // 0x3865e4: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x3865e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3865e8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3865e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3865ec:
    // 0x3865ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3865ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3865f0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x3865f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x3865f4: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x3865f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x3865f8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3865f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3865fc: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x3865fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x386600: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x386600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x386604: 0xe00013  mtlo        $a3
    ctx->pc = 0x386604u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x386608: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x386608u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x38660c: 0x3812  mflo        $a3
    ctx->pc = 0x38660cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x386610: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x386610u;
    {
        const bool branch_taken_0x386610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x386614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386610u;
        // 0x386614: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386610) {
            ctx->pc = 0x3864A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3864a0;
        }
    }
    ctx->pc = 0x386618u;
label_386618:
    // 0x386618: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x386618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38661c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x38661cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x386620: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x386620u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x386624: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x386624u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x386628: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x386628u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38662c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38662cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x386630: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x386630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x386634: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x386634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386638: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x386638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38663c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38663cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386640: 0x3e00008  jr          $ra
    ctx->pc = 0x386640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386640u;
        // 0x386644: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386648u;
}
