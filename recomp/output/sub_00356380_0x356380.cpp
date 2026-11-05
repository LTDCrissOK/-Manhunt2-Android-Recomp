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

// Function: sub_00356380
// Address: 0x356380 - 0x3565e0
void sub_00356380_0x356380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356380_0x356380");
#endif

    switch (ctx->pc) {
        case 0x3563c8u: goto label_3563c8;
        case 0x3563d8u: goto label_3563d8;
        case 0x3563e8u: goto label_3563e8;
        case 0x356418u: goto label_356418;
        case 0x356428u: goto label_356428;
        case 0x35643cu: goto label_35643c;
        case 0x356444u: goto label_356444;
        case 0x356458u: goto label_356458;
        case 0x356470u: goto label_356470;
        case 0x356488u: goto label_356488;
        case 0x356498u: goto label_356498;
        case 0x3564bcu: goto label_3564bc;
        case 0x3564d8u: goto label_3564d8;
        case 0x35652cu: goto label_35652c;
        case 0x356544u: goto label_356544;
        case 0x35654cu: goto label_35654c;
        case 0x356554u: goto label_356554;
        case 0x356564u: goto label_356564;
        case 0x356588u: goto label_356588;
        case 0x356594u: goto label_356594;
        case 0x3565acu: goto label_3565ac;
        default: break;
    }

    ctx->pc = 0x356380u;

    // 0x356380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x356380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x356384: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356388: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x356388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35638c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35638cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356390: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x356390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x356394: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x356394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x356398: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x356398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35639c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x35639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3563a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3563a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3563a4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x3563a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x3563a8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3563a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3563ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3563acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3563b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3563b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3563b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3563b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3563b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3563b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3563bc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3563bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x3563c0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3563C0u;
    SET_GPR_U32(ctx, 31, 0x3563C8u);
    ctx->pc = 0x3563C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3563C0u;
    // 0x3563c4: 0x26be0818  addiu       $fp, $s5, 0x818 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 2072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3563C0u, 0x3563C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3563C8u;
label_3563c8:
    // 0x3563c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3563c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3563cc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3563ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3563d0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3563D0u;
    SET_GPR_U32(ctx, 31, 0x3563D8u);
    ctx->pc = 0x3563D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3563D0u;
    // 0x3563d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3563D0u, 0x3563D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3563D8u;
label_3563d8:
    // 0x3563d8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3563d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3563dc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3563dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x3563e0: 0x2457cd90  addiu       $s7, $v0, -0x3270
    ctx->pc = 0x3563e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954384));
    // 0x3563e4: 0x2476cd80  addiu       $s6, $v1, -0x3280
    ctx->pc = 0x3563e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954368));
label_3563e8:
    // 0x3563e8: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x3563e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x3563ec: 0x26a20818  addiu       $v0, $s5, 0x818
    ctx->pc = 0x3563ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2072));
    // 0x3563f0: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x3563f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3563f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3563f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3563f8: 0x54600038  bnel        $v1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x3563F8u;
    {
        const bool branch_taken_0x3563f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3563f8) {
            ctx->pc = 0x3563FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3563F8u;
            // 0x3563fc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3564DCu;
            goto label_3564dc;
        }
    }
    ctx->pc = 0x356400u;
    // 0x356400: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x356400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x356404: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x356404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x356408: 0x24506920  addiu       $s0, $v0, 0x6920
    ctx->pc = 0x356408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26912));
    // 0x35640c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x35640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x356410: 0xc0c3482  jal         func_30D208
    ctx->pc = 0x356410u;
    SET_GPR_U32(ctx, 31, 0x356418u);
    ctx->pc = 0x356414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356410u;
    // 0x356414: 0x2444ff68  addiu       $a0, $v0, -0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x356410u, 0x356418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356418u;
label_356418:
    // 0x356418: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x356418u;
    {
        const bool branch_taken_0x356418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356418) {
            ctx->pc = 0x35641Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356418u;
            // 0x35641c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3564DCu;
            goto label_3564dc;
        }
    }
    ctx->pc = 0x356420u;
    // 0x356420: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x356420u;
    SET_GPR_U32(ctx, 31, 0x356428u);
    ctx->pc = 0x356424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356420u;
    // 0x356424: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x356420u, 0x356428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356428u;
label_356428:
    // 0x356428: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35642c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35642cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356430: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x356430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x356434: 0xc084928  jal         func_2124A0
    ctx->pc = 0x356434u;
    SET_GPR_U32(ctx, 31, 0x35643Cu);
    ctx->pc = 0x356438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356434u;
    // 0x356438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124A0u, 0x356434u, 0x35643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35643Cu;
label_35643c:
    // 0x35643c: 0xc07524a  jal         func_1D4928
    ctx->pc = 0x35643Cu;
    SET_GPR_U32(ctx, 31, 0x356444u);
    ctx->pc = 0x356440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35643Cu;
    // 0x356440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4928u, 0x35643Cu, 0x356444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356444u;
label_356444:
    // 0x356444: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x356444u;
    {
        const bool branch_taken_0x356444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356444u;
        // 0x356448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356444) {
            ctx->pc = 0x3564D8u;
            goto label_3564d8;
        }
    }
    ctx->pc = 0x35644Cu;
    // 0x35644c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x35644cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x356450: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x356450u;
    SET_GPR_U32(ctx, 31, 0x356458u);
    ctx->pc = 0x356454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356450u;
    // 0x356454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x356450u, 0x356458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356458u;
label_356458:
    // 0x356458: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x356458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35645c: 0x5220001f  beql        $s1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x35645Cu;
    {
        const bool branch_taken_0x35645c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35645c) {
            ctx->pc = 0x356460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35645Cu;
            // 0x356460: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3564DCu;
            goto label_3564dc;
        }
    }
    ctx->pc = 0x356464u;
    // 0x356464: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x356468: 0xc074256  jal         func_1D0958
    ctx->pc = 0x356468u;
    SET_GPR_U32(ctx, 31, 0x356470u);
    ctx->pc = 0x35646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356468u;
    // 0x35646c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x356468u, 0x356470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356470u;
label_356470:
    // 0x356470: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x356470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x356474: 0x26b00820  addiu       $s0, $s5, 0x820
    ctx->pc = 0x356474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
    // 0x356478: 0x2464f1b0  addiu       $a0, $v1, -0xE50
    ctx->pc = 0x356478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x35647c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35647cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x356480: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x356480u;
    SET_GPR_U32(ctx, 31, 0x356488u);
    ctx->pc = 0x356484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356480u;
    // 0x356484: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x356480u, 0x356488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356488u;
label_356488:
    // 0x356488: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x356488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35648c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356490: 0xc073dee  jal         func_1CF7B8
    ctx->pc = 0x356490u;
    SET_GPR_U32(ctx, 31, 0x356498u);
    ctx->pc = 0x356494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356490u;
    // 0x356494: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF7B8u, 0x356490u, 0x356498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356498u;
label_356498:
    // 0x356498: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x356498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35649c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35649cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3564a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3564a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3564a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3564a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3564a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3564ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3564acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3564b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3564b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3564b4: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x3564B4u;
    SET_GPR_U32(ctx, 31, 0x3564BCu);
    ctx->pc = 0x3564B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564B4u;
    // 0x3564b8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x3564B4u, 0x3564BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564BCu;
label_3564bc:
    // 0x3564bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3564bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3564c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3564c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3564c4: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x3564c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x3564c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3564c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3564cc: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x3564ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x3564d0: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x3564D0u;
    SET_GPR_U32(ctx, 31, 0x3564D8u);
    ctx->pc = 0x3564D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564D0u;
    // 0x3564d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x3564D0u, 0x3564D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564D8u;
label_3564d8:
    // 0x3564d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3564d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3564dc:
    // 0x3564dc: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x3564dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x3564e0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x3564e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3564e4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x3564E4u;
    {
        const bool branch_taken_0x3564e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3564E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564E4u;
        // 0x3564e8: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3564e4) {
            ctx->pc = 0x3563E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3563e8;
        }
    }
    ctx->pc = 0x3564ECu;
    // 0x3564ec: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x3564ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x3564f0: 0x24635870  addiu       $v1, $v1, 0x5870
    ctx->pc = 0x3564f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
    // 0x3564f4: 0x90620434  lbu         $v0, 0x434($v1)
    ctx->pc = 0x3564f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x595CA4u));
    // 0x3564f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3564f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3564fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3564fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356500: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x356500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x356504: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x356504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x356508: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x356508u;
    {
        const bool branch_taken_0x356508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356508u;
        // 0x35650c: 0x3c05005c  lui         $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356508) {
            ctx->pc = 0x3565ACu;
            goto label_3565ac;
        }
    }
    ctx->pc = 0x356510u;
    // 0x356510: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x356510u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x356514: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x356514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x356518: 0x24a5cda0  addiu       $a1, $a1, -0x3260
    ctx->pc = 0x356518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954400));
    // 0x35651c: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x35651cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x356520: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x356520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x356524: 0xc0b1612  jal         func_2C5848
    ctx->pc = 0x356524u;
    SET_GPR_U32(ctx, 31, 0x35652Cu);
    ctx->pc = 0x356528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356524u;
    // 0x356528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5848u, 0x356524u, 0x35652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35652Cu;
label_35652c:
    // 0x35652c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x35652cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x356530: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x356530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x356534: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x356534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x356538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35653c: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x35653Cu;
    SET_GPR_U32(ctx, 31, 0x356544u);
    ctx->pc = 0x356540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35653Cu;
    // 0x356540: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x35653Cu, 0x356544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356544u;
label_356544:
    // 0x356544: 0xc0c48da  jal         func_312368
    ctx->pc = 0x356544u;
    SET_GPR_U32(ctx, 31, 0x35654Cu);
    ctx->pc = 0x356548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356544u;
    // 0x356548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x356544u, 0x35654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35654Cu;
label_35654c:
    // 0x35654c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x35654Cu;
    SET_GPR_U32(ctx, 31, 0x356554u);
    ctx->pc = 0x356550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35654Cu;
    // 0x356550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x35654Cu, 0x356554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356554u;
label_356554:
    // 0x356554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356554u;
    {
        const bool branch_taken_0x356554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356554u;
        // 0x356558: 0x26a20820  addiu       $v0, $s5, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356554) {
            ctx->pc = 0x356568u;
            goto label_356568;
        }
    }
    ctx->pc = 0x35655Cu;
    // 0x35655c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x35655Cu;
    SET_GPR_U32(ctx, 31, 0x356564u);
    ctx->pc = 0x356560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35655Cu;
    // 0x356560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x35655Cu, 0x356564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356564u;
label_356564:
    // 0x356564: 0x26a20820  addiu       $v0, $s5, 0x820
    ctx->pc = 0x356564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
label_356568:
    // 0x356568: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356568u;
    {
        const bool branch_taken_0x356568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356568u;
        // 0x35656c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356568) {
            ctx->pc = 0x356588u;
            goto label_356588;
        }
    }
    ctx->pc = 0x356570u;
    // 0x356570: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x356570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x356574: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x356574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356578: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x356578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35657c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x35657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x356580: 0xc07466e  jal         func_1D19B8
    ctx->pc = 0x356580u;
    SET_GPR_U32(ctx, 31, 0x356588u);
    ctx->pc = 0x356584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356580u;
    // 0x356584: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B8u, 0x356580u, 0x356588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356588u;
label_356588:
    // 0x356588: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x356588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35658c: 0xc07509e  jal         func_1D4278
    ctx->pc = 0x35658Cu;
    SET_GPR_U32(ctx, 31, 0x356594u);
    ctx->pc = 0x356590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35658Cu;
    // 0x356590: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4278u, 0x35658Cu, 0x356594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356594u;
label_356594:
    // 0x356594: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x356594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x356598: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x356598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35659c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35659cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3565a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3565a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3565a4: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x3565A4u;
    SET_GPR_U32(ctx, 31, 0x3565ACu);
    ctx->pc = 0x3565A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3565A4u;
    // 0x3565a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x3565A4u, 0x3565ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565ACu;
label_3565ac:
    // 0x3565ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3565acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3565b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3565b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3565b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3565b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3565b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3565b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3565bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3565bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3565c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3565c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3565c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3565c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3565c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3565c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3565cc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3565ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3565d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3565d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3565d4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3565d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3565d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3565D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3565DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565D8u;
        // 0x3565dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3565D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3565E0u;
}
