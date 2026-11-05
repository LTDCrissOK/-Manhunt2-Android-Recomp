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

// Function: sub_00378150
// Address: 0x378150 - 0x378f98
void sub_00378150_0x378150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378150_0x378150");
#endif

    switch (ctx->pc) {
        case 0x378c60u: goto label_378c60;
        default: break;
    }

    ctx->pc = 0x378150u;

    // 0x378150: 0x420f009d  .word       0x420F009D                   # INVALID     $s0, $t7, 0x9D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x378150u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x378150 raw=0x420F009D");
    // 0x378154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37815c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37815cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378160: 0x52060010  beql        $s0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x378160u;
    {
        const bool branch_taken_0x378160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x378160) {
            ctx->pc = 0x378164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378160u;
            // 0x378164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3781A4u;
            goto label_3781a4;
        }
    }
    ctx->pc = 0x378168u;
    // 0x378168: 0x102707c0  beq         $at, $a3, . + 4 + (0x7C0 << 2)
    ctx->pc = 0x378168u;
    {
        const bool branch_taken_0x378168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 7));
        ctx->pc = 0x37816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378168u;
        // 0x37816c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378168) {
            ctx->pc = 0x37A06Cu;
            return;
        }
    }
    ctx->pc = 0x378170u;
    // 0x378170: 0x80072974  lb          $a3, 0x2974($zero)
    ctx->pc = 0x378170u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2974u));
    // 0x378174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378178: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378178u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37817c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37817cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378180: 0x52050003  beql        $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378180u;
    {
        const bool branch_taken_0x378180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x378180) {
            ctx->pc = 0x378184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378180u;
            // 0x378184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378190u;
            goto label_378190;
        }
    }
    ctx->pc = 0x378188u;
    // 0x378188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37818c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37818cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_378190:
    // 0x378190: 0x400007ec  .word       0x400007EC                   # mfc0        $zero, Index # 000007EC <InstrIdType: R5900_COP0>
    ctx->pc = 0x378190u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x378194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378198: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37819c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37819cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3781a0: 0x420f014b  .word       0x420F014B                   # INVALID     $s0, $t7, 0x14B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3781a0u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0xB at 0x3781A0 raw=0x420F014B");
label_3781a4:
    // 0x3781a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3781a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3781a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3781a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3781ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3781acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3781b0: 0x420f0185  .word       0x420F0185                   # INVALID     $s0, $t7, 0x185 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x3781b0u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x3781B0 raw=0x420F0185");
    // 0x3781b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3781b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3781b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3781b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3781bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3781bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3781c0: 0x90f77ff  j           func_43DDFFC
    ctx->pc = 0x3781C0u;
    ctx->pc = 0x3781C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3781C0u;
    // 0x3781c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DDFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DDFFCu, 0x3781C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3781C8u;
    // 0x3781c8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
    ctx->pc = 0x3781C8u;
    {
        const bool branch_taken_0x3781c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x3781CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781C8u;
        // 0x3781cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3781c8) {
            ctx->pc = 0x3941D0u;
            return;
        }
    }
    ctx->pc = 0x3781D0u;
    // 0x3781d0: 0x100802d6  beq         $zero, $t0, . + 4 + (0x2D6 << 2)
    ctx->pc = 0x3781D0u;
    {
        const bool branch_taken_0x3781d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x3781D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781D0u;
        // 0x3781d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3781d0) {
            ctx->pc = 0x378D2Cu;
            goto label_378d2c;
        }
    }
    ctx->pc = 0x3781D8u;
    // 0x3781d8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3781d8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x3781D8 raw=0x48007800");
    // 0x3781dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3781dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3781e0: 0xa480038  j           func_92000E0
    ctx->pc = 0x3781E0u;
    ctx->pc = 0x3781E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3781E0u;
    // 0x3781e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x92000E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x92000E0u, 0x3781E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3781E8u;
    // 0x3781e8: 0x40000732  .word       0x40000732                   # mfc0        $zero, Index # 00000732 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3781e8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x3781ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3781ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3781f0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
    ctx->pc = 0x3781F0u;
    {
        const bool branch_taken_0x3781f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x3781F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781F0u;
        // 0x3781f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3781f0) {
            ctx->pc = 0x3941F8u;
            return;
        }
    }
    ctx->pc = 0x3781F8u;
    // 0x3781f8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x3781f8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x3781fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3781fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378200: 0x1fa002e  dsub        $zero, $t7, $k0
    ctx->pc = 0x378200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 26); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x378204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378208: 0x1fb002f  dsubu       $zero, $t7, $k1
    ctx->pc = 0x378208u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) - GPR_U64(ctx, 27));
    // 0x37820c: 0x1e04a58  .word       0x01E04A58                   # mult        $t1, $t7, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37820cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x378210: 0x1fc001c  dmult       $t7, $gp
    ctx->pc = 0x378210u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x378210 raw=0x01FC001C");
    // 0x378214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378218: 0x1fd001d  dmultu      $t7, $sp
    ctx->pc = 0x378218u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x378218 raw=0x01FD001D");
    // 0x37821c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37821cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378220: 0x1fe001e  ddiv        $zero, $t7, $fp
    ctx->pc = 0x378220u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x378220 raw=0x01FE001E");
    // 0x378224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378228: 0x1ff001f  ddivu       $zero, $t7, $ra
    ctx->pc = 0x378228u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x378228 raw=0x01FF001F");
    // 0x37822c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37822cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378230: 0x1f70030  tge         $t7, $s7, 0
    ctx->pc = 0x378230u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x378234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378238: 0x1f80031  tgeu        $t7, $t8, 0
    ctx->pc = 0x378238u;
    if (GPR_U64(ctx, 15) >= GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x37823c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37823cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378240: 0x1f90032  tlt         $t7, $t9, 0
    ctx->pc = 0x378240u;
    if (GPR_S64(ctx, 15) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x378244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378248: 0x8440034  j           func_11000D0
    ctx->pc = 0x378248u;
    ctx->pc = 0x37824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378248u;
    // 0x37824c: 0x1fbe1bc  .word       0x01FBE1BC                   # dsll32      $gp, $k1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 27) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x378248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378250u;
    // 0x378250: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x378250u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x378254: 0x1fbe8bd  .word       0x01FBE8BD                   # INVALID     $t7, $k1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378254u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378254 raw=0x01FBE8BD");
    // 0x378258: 0x9020033  j           func_40800CC
    ctx->pc = 0x378258u;
    ctx->pc = 0x37825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378258u;
    // 0x37825c: 0x1fbf0be  .word       0x01FBF0BE                   # dsrl32      $fp, $k1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 27) >> (32 + 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x378258u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378260u;
    // 0x378260: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x378260u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x378264: 0x1fbffcb  .word       0x01FBFFCB                   # movn        $ra, $t7, $k1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378264u;
    if (GPR_U64(ctx, 27) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378268: 0x8430033  j           func_10C00CC
    ctx->pc = 0x378268u;
    ctx->pc = 0x37826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378268u;
    // 0x37826c: 0x1fae718  .word       0x01FAE718                   # mult        $gp, $t7, $k0 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00CCu, 0x378268u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378270u;
    // 0x378270: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x378270u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x378274: 0x1faef59  .word       0x01FAEF59                   # multu       $t7, $k0 # 0000EF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378274u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
    // 0x378278: 0x8240034  j           func_9000D0
    ctx->pc = 0x378278u;
    ctx->pc = 0x37827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378278u;
    // 0x37827c: 0x1faf79a  .word       0x01FAF79A                   # div         $fp, $t7, $k0 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x378278u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378280u;
    // 0x378280: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x378280u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x378284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378288: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x378288u;
    {
        const bool branch_taken_0x378288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378288u;
        // 0x37828c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378288) {
            ctx->pc = 0x380290u;
            return;
        }
    }
    ctx->pc = 0x378290u;
    // 0x378290: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x378290u;
    ctx->pc = 0x378294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378290u;
    // 0x378294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x378290u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378298u;
    // 0x378298: 0x12050807  beq         $s0, $a1, . + 4 + (0x807 << 2)
    ctx->pc = 0x378298u;
    {
        const bool branch_taken_0x378298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x37829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378298u;
        // 0x37829c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378298) {
            ctx->pc = 0x37A2B8u;
            return;
        }
    }
    ctx->pc = 0x3782A0u;
    // 0x3782a0: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x3782a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
    // 0x3782a4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x3782a4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x3782a8: 0x5a002802  blezl       $s0, . + 4 + (0x2802 << 2)
    ctx->pc = 0x3782A8u;
    {
        const bool branch_taken_0x3782a8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3782a8) {
            ctx->pc = 0x3782ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3782A8u;
            // 0x3782ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3822B4u;
            return;
        }
    }
    ctx->pc = 0x3782B0u;
    // 0x3782b0: 0x1f60037  .word       0x01F60037                   # INVALID     $t7, $s6, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3782b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3782B0 raw=0x01F60037");
    // 0x3782b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3782b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3782b8: 0x10010007  beq         $zero, $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3782B8u;
    {
        const bool branch_taken_0x3782b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x3782BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782B8u;
        // 0x3782bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782b8) {
            ctx->pc = 0x3782D8u;
            goto label_3782d8;
        }
    }
    ctx->pc = 0x3782C0u;
    // 0x3782c0: 0x80011070  lb          $at, 0x1070($zero)
    ctx->pc = 0x3782c0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x1070u));
    // 0x3782c4: 0x1c0bdde  .word       0x01C0BDDE                   # ddiv        $s7, $t6, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3782c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3782C4 raw=0x01C0BDDE");
    // 0x3782c8: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x3782C8u;
    {
        const bool branch_taken_0x3782c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x3782CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782C8u;
        // 0x3782cc: 0x1c0c61e  .word       0x01C0C61E                   # ddiv        $t8, $t6, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3782CC raw=0x01C0C61E");
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782c8) {
            ctx->pc = 0x37A2D0u;
            return;
        }
    }
    ctx->pc = 0x3782D0u;
    // 0x3782d0: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x3782d0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x3782d4: 0x1c0ce5e  .word       0x01C0CE5E                   # ddiv        $t9, $t6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3782d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3782D4 raw=0x01C0CE5E");
label_3782d8:
    // 0x3782d8: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x3782d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x3782dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3782dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3782e0: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x3782e0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x3782e4: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3782e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x3782e8: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x3782e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x3782ec: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3782ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x3782f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3782f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3782f4: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3782f4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x3782f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3782f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3782fc: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3782fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3782FC raw=0x01E3E8BD");
    // 0x378300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378304: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378304u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378308: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378308u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37830c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37830cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378314: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378314u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x378318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37831c: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37831cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37831C raw=0x01C4C0BD");
    // 0x378320: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378320u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378324: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378324u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x378328: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x378328u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37832c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37832cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x378330: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x378330u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x378334: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x378338: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x378338u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37833c: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37833cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x378340: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378340u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378344: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378344u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378348: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378348u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37834c: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37834cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378354: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378354u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378354 raw=0x01E3E8BD");
    // 0x378358: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378358u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37835c: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37835cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378360: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378360u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378364: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378364u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378368: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378368u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37836c: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37836cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x378370: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378370u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378374: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378374u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378374 raw=0x01C4C0BD");
    // 0x378378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37837c: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37837cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x378380: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x378380u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x378384: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x378388: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x378388u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37838c: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x378390: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x378390u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x378394: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378394u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x378394 raw=0x01C03A5C");
    // 0x378398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37839c: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37839cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37839C raw=0x01C0429C");
    // 0x3783a0: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x3783a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x3783a4: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783a4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x3783a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3783a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3783ac: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783acu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x3783b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3783b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3783b4: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783b4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x3783b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3783b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3783bc: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3783BC raw=0x01E3E8BD");
    // 0x3783c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3783c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3783c4: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783c4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x3783c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3783c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3783cc: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783ccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x3783d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3783d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3783d4: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x3783d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3783d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3783dc: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3783DC raw=0x01C4C0BD");
    // 0x3783e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3783e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3783e4: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783e4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x3783e8: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x3783e8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x3783ec: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x3783f0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x3783f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x3783f4: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x3783f8: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x3783f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x3783fc: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3783fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3783FC raw=0x01EB497D");
    // 0x378400: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x378400u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x378404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378408: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x378408u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x37840c: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37840cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37840C raw=0x01C03A5C");
    // 0x378410: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378410u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378414: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378414u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x378414 raw=0x01C0429C");
    // 0x378418: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x378418u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37841c: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37841cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x378420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378424: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378424u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37842c: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37842cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378430: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378430u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378434: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378434u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378434 raw=0x01E3E8BD");
    // 0x378438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37843c: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37843cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378440: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378440u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378444: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378444u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37844c: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37844cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x378450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378454: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378454u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378454 raw=0x01C4C0BD");
    // 0x378458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37845c: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37845cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x378460: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x378460u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x378464: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x378468: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x378468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37846c: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x378470: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x378470u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x378474: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378474u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378474 raw=0x01EB497D");
    // 0x378478: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x378478u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37847c: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37847cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37847C raw=0x01C0429C");
    // 0x378480: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x378480u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x378484: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378484u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x378484 raw=0x01C03A5C");
    // 0x378488: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x378488u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37848c: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37848cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x378490: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x378490u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x378494: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378494u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37849c: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37849cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x3784a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3784a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3784a4: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3784A4 raw=0x01E3E8BD");
    // 0x3784a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3784a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3784ac: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x3784b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3784b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3784b4: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x3784b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3784b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3784bc: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784bcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x3784c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3784c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3784c4: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x3784c8: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x3784c8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x3784cc: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3784CC raw=0x01C4C0BD");
    // 0x3784d0: 0x520117f3  beql        $s0, $at, . + 4 + (0x17F3 << 2)
    ctx->pc = 0x3784D0u;
    {
        const bool branch_taken_0x3784d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x3784d0) {
            ctx->pc = 0x3784D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3784D0u;
            // 0x3784d4: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E4A0u;
            return;
        }
    }
    ctx->pc = 0x3784D8u;
    // 0x3784d8: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x3784d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x3784dc: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x3784e0: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x3784e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x3784e4: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3784E4 raw=0x01EB497D");
    // 0x3784e8: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x3784e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x3784ec: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3784EC raw=0x01C0429C");
    // 0x3784f0: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x3784f0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x3784f4: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3784F4 raw=0x01C03A5C");
    // 0x3784f8: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x3784f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x3784fc: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3784fcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x378500: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x378500u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x378504: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378504u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37850c: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37850cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378514: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378514u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378514 raw=0x01E3E8BD");
    // 0x378518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37851c: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37851cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378524: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378524u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378528: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378528u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37852c: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37852cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x378530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378534: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378534u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378534 raw=0x01C4C0BD");
    // 0x378538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37853c: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37853cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x378540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378544: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x378548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37854c: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37854cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x378550: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x378550u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x378554: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378554u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378554 raw=0x01EB497D");
    // 0x378558: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x378558u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37855c: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37855cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37855C raw=0x01C0429C");
    // 0x378560: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x378560u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x378564: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378564u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x378564 raw=0x01C03A5C");
    // 0x378568: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x378568u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37856c: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37856cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x378570: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x378570u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x378574: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378574u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378578: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378578u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37857c: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37857cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378584: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378584u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378584 raw=0x01E3E8BD");
    // 0x378588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37858c: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37858cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378594: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378594u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37859c: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37859cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x3785a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3785a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3785a4: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3785A4 raw=0x01C4C0BD");
    // 0x3785a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3785a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3785ac: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785acu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x3785b0: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x3785b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x3785b4: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3785B4 raw=0x01EB497D");
    // 0x3785b8: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x3785b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x3785bc: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3785BC raw=0x01C0429C");
    // 0x3785c0: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x3785c0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x3785c4: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3785C4 raw=0x01C03A5C");
    // 0x3785c8: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x3785c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x3785cc: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785ccu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x3785d0: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x3785d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x3785d4: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x3785d8: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x3785d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x3785dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3785dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3785e0: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x3785e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x3785e4: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3785E4 raw=0x01EB497D");
    // 0x3785e8: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x3785e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x3785ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3785ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3785f0: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x3785f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
    // 0x3785f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3785f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3785f8: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x3785f8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x3785fc: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3785fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x3785FC raw=0x01C03A5C");
    // 0x378600: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x378600u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x378604: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378604u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x378604 raw=0x01C0429C");
    // 0x378608: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x378608u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37860c: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37860cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37860C raw=0x01EB497D");
    // 0x378610: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x378610u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x378614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378618: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378618u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378618 raw=0x48007800");
    // 0x37861c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37861cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378620: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x378620u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x378624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37862c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37862cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37863c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37863cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378640: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x378640u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x378644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378648: 0x1fc0018  mult        $zero, $t7, $gp
    ctx->pc = 0x378648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37864c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37864cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378650: 0x1fd0019  multu       $t7, $sp
    ctx->pc = 0x378650u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x378654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378658: 0x1fe001a  div         $zero, $t7, $fp
    ctx->pc = 0x378658u;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37865c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37865cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378660: 0x1ff001b  divu        $zero, $t7, $ra
    ctx->pc = 0x378660u;
    { uint32_t divisor = GPR_U32(ctx, 31); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x378664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378668: 0x1fa002e  dsub        $zero, $t7, $k0
    ctx->pc = 0x378668u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 26); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x37866c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37866cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378670: 0x1fb002f  dsubu       $zero, $t7, $k1
    ctx->pc = 0x378670u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) - GPR_U64(ctx, 27));
    // 0x378674: 0x1e02958  .word       0x01E02958                   # mult        $a1, $t7, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x378674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x378678: 0x1f50030  tge         $t7, $s5, 0
    ctx->pc = 0x378678u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x37867c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37867cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378680: 0x1f60031  tgeu        $t7, $s6, 0
    ctx->pc = 0x378680u;
    if (GPR_U64(ctx, 15) >= GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x378684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378688: 0x1f70032  tlt         $t7, $s7, 0
    ctx->pc = 0x378688u;
    if (GPR_S64(ctx, 15) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x37868c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37868cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378690: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x378690u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
    // 0x378694: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x378694u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x378698: 0x8440034  j           func_11000D0
    ctx->pc = 0x378698u;
    ctx->pc = 0x37869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378698u;
    // 0x37869c: 0x1fbe1bc  .word       0x01FBE1BC                   # dsll32      $gp, $k1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 27) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x378698u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3786A0u;
    // 0x3786a0: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x3786a0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x3786a4: 0x1fbe8bd  .word       0x01FBE8BD                   # INVALID     $t7, $k1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3786a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3786A4 raw=0x01FBE8BD");
    // 0x3786a8: 0x9020033  j           func_40800CC
    ctx->pc = 0x3786A8u;
    ctx->pc = 0x3786ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786A8u;
    // 0x3786ac: 0x1fbf0be  .word       0x01FBF0BE                   # dsrl32      $fp, $k1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 27) >> (32 + 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x3786A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3786B0u;
    // 0x3786b0: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x3786b0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x3786b4: 0x1fbffcb  .word       0x01FBFFCB                   # movn        $ra, $t7, $k1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3786b4u;
    if (GPR_U64(ctx, 27) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x3786b8: 0x8430033  j           func_10C00CC
    ctx->pc = 0x3786B8u;
    ctx->pc = 0x3786BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786B8u;
    // 0x3786bc: 0x1fae718  .word       0x01FAE718                   # mult        $gp, $t7, $k0 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00CCu, 0x3786B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3786C0u;
    // 0x3786c0: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x3786c0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x3786c4: 0x1faef59  .word       0x01FAEF59                   # multu       $t7, $k0 # 0000EF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3786c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
    // 0x3786c8: 0x8240034  j           func_9000D0
    ctx->pc = 0x3786C8u;
    ctx->pc = 0x3786CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786C8u;
    // 0x3786cc: 0x1faf79a  .word       0x01FAF79A                   # div         $fp, $t7, $k0 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x3786C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3786D0u;
    // 0x3786d0: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x3786d0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x3786d4: 0x1e0ad5e  .word       0x01E0AD5E                   # ddiv        $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3786d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3786D4 raw=0x01E0AD5E");
    // 0x3786d8: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x3786D8u;
    {
        const bool branch_taken_0x3786d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x3786DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786D8u;
        // 0x3786dc: 0x1e0b59e  .word       0x01E0B59E                   # ddiv        $s6, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3786DC raw=0x01E0B59E");
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786d8) {
            ctx->pc = 0x3806E0u;
            return;
        }
    }
    ctx->pc = 0x3786E0u;
    // 0x3786e0: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x3786E0u;
    ctx->pc = 0x3786E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3786E0u;
    // 0x3786e4: 0x1e0bdde  .word       0x01E0BDDE                   # ddiv        $s7, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3786E4 raw=0x01E0BDDE");
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x3786E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3786E8u;
    // 0x3786e8: 0x12080806  beq         $s0, $t0, . + 4 + (0x806 << 2)
    ctx->pc = 0x3786E8u;
    {
        const bool branch_taken_0x3786e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x3786ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3786E8u;
        // 0x3786ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3786e8) {
            ctx->pc = 0x37A704u;
            return;
        }
    }
    ctx->pc = 0x3786F0u;
    // 0x3786f0: 0x1f80045  .word       0x01F80045                   # INVALID     $t7, $t8, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3786f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3786F0 raw=0x01F80045");
    // 0x3786f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3786f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3786f8: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x3786F8u;
    {
        const bool branch_taken_0x3786f8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3786f8) {
            ctx->pc = 0x3786FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3786F8u;
            // 0x3786fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388704u;
            return;
        }
    }
    ctx->pc = 0x378700u;
    // 0x378700: 0x1f90037  .word       0x01F90037                   # INVALID     $t7, $t9, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378700u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x378700 raw=0x01F90037");
    // 0x378704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378708: 0x10010006  beq         $zero, $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x378708u;
    {
        const bool branch_taken_0x378708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378708u;
        // 0x37870c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378708) {
            ctx->pc = 0x378724u;
            goto label_378724;
        }
    }
    ctx->pc = 0x378710u;
    // 0x378710: 0x80011870  lb          $at, 0x1870($zero)
    ctx->pc = 0x378710u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x1870u));
    // 0x378714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378718: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x378718u;
    {
        const bool branch_taken_0x378718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x37871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378718u;
        // 0x37871c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378718) {
            ctx->pc = 0x37A720u;
            return;
        }
    }
    ctx->pc = 0x378720u;
    // 0x378720: 0x80000170  lb          $zero, 0x170($zero)
    ctx->pc = 0x378720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x170u));
label_378724:
    // 0x378724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378728: 0x102607ff  beq         $at, $a2, . + 4 + (0x7FF << 2)
    ctx->pc = 0x378728u;
    {
        const bool branch_taken_0x378728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 6));
        ctx->pc = 0x37872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378728u;
        // 0x37872c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378728) {
            ctx->pc = 0x37A728u;
            return;
        }
    }
    ctx->pc = 0x378730u;
    // 0x378730: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x378730u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x378734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378738: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x378738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37873c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37873cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378740: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x378740u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x378744: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x378748: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x378748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37874c: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x378750: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378750u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378754: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378754u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37875c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37875cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37875C raw=0x01E3E8BD");
    // 0x378760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378764: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378764u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37876c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37876cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378770: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378770u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378774: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378774u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x378778: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378778u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37877c: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37877cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37877C raw=0x01C4B0BD");
    // 0x378780: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378780u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378784: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378784u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x378788: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x378788u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37878c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37878cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x378790: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x378790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x378794: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x378798: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x378798u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x37879c: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37879cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x3787a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787a4: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787a4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x3787a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787ac: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787acu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x3787b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787b4: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787b4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x3787b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787bc: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3787BC raw=0x01E3E8BD");
    // 0x3787c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787c4: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787c4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x3787c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787cc: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787ccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x3787d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787d4: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x3787d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787dc: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3787DC raw=0x01C4B0BD");
    // 0x3787e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3787e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3787e4: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787e4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x3787e8: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x3787e8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x3787ec: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x3787f0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x3787f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x3787f4: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x3787f8: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x3787f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x3787fc: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3787fcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x378800: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x378800u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x378804: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378804u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x378808: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x378808u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37880c: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37880cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x378810: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x378810u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x378814: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378814u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378818: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378818u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37881c: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37881cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x378820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378824: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378824u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378828: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378828u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37882c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37882cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37882C raw=0x01E3E8BD");
    // 0x378830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378834: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378834u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37883c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37883cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378840: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378840u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378844: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378844u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x378848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37884c: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37884cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37884C raw=0x01C4B0BD");
    // 0x378850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378854: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378854u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x378858: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x378858u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37885c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37885cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x378860: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x378860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x378864: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x378868: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x378868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37886c: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37886cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x378870: 0xa2717fb  j           func_89C5FEC
    ctx->pc = 0x378870u;
    ctx->pc = 0x378874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378870u;
    // 0x378874: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FECu, 0x378870u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378878u;
    // 0x378878: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x378878u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37887c: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37887cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x378880: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x378880u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x378884: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378884u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378888: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x378888u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37888c: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37888cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x378890: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x378890u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x378894: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378894u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378898: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x378898u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37889c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37889cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37889C raw=0x01E3E8BD");
    // 0x3788a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3788a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3788a4: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788a4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x3788a8: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x3788a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x3788ac: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788acu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x3788b0: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x3788b0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x3788b4: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x3788b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3788b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3788bc: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x3788c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3788c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3788c4: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3788C4 raw=0x01C4B0BD");
    // 0x3788c8: 0x52011ff3  beql        $s0, $at, . + 4 + (0x1FF3 << 2)
    ctx->pc = 0x3788C8u;
    {
        const bool branch_taken_0x3788c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x3788c8) {
            ctx->pc = 0x3788CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3788C8u;
            // 0x3788cc: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380898u;
            return;
        }
    }
    ctx->pc = 0x3788D0u;
    // 0x3788d0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x3788d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x3788d4: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x3788d8: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x3788d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x3788dc: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788dcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x3788e0: 0xa2717fb  j           func_89C5FEC
    ctx->pc = 0x3788E0u;
    ctx->pc = 0x3788E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3788E0u;
    // 0x3788e4: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FECu, 0x3788E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3788E8u;
    // 0x3788e8: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x3788e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x3788ec: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x3788f0: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x3788f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x3788f4: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788f4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x3788f8: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x3788f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x3788fc: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3788fcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x378900: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x378900u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x378904: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378904u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378908: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x378908u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37890c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37890cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37890C raw=0x01E3E8BD");
    // 0x378910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378914: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378914u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378918: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x378918u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x37891c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37891cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378924: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378924u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x378928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37892c: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37892cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37892C raw=0x01C4B0BD");
    // 0x378930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378934: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378934u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x378938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37893c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37893cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x378940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378944: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x378948: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x378948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37894c: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37894cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x378950: 0xa2717fc  j           func_89C5FF0
    ctx->pc = 0x378950u;
    ctx->pc = 0x378954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378950u;
    // 0x378954: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF0u, 0x378950u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378958u;
    // 0x378958: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x378958u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37895c: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37895cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x378960: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x378960u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x378964: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378964u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378968: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x378968u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37896c: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37896cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x378970: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x378970u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x378974: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378974u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x378978: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x378978u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37897c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37897cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37897C raw=0x01E3E8BD");
    // 0x378980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378984: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378984u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x378988: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x378988u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x37898c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37898cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x378990: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x378990u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x378994: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378994u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x378998: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x378998u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37899c: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37899cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37899C raw=0x01C4B0BD");
    // 0x3789a0: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x3789a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x3789a4: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3789a4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x3789a8: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x3789a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x3789ac: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3789acu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x3789b0: 0xa2717fd  j           func_89C5FF4
    ctx->pc = 0x3789B0u;
    ctx->pc = 0x3789B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789B0u;
    // 0x3789b4: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF4u, 0x3789B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3789B8u;
    // 0x3789b8: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x3789b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x3789bc: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3789bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x3789c0: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x3789c0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x3789c4: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3789c4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x3789c8: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x3789c8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x3789cc: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3789ccu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x3789d0: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x3789d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x3789d4: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3789d4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x3789d8: 0xa2717fe  j           func_89C5FF8
    ctx->pc = 0x3789D8u;
    ctx->pc = 0x3789DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3789D8u;
    // 0x3789dc: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF8u, 0x3789D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3789E0u;
    // 0x3789e0: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x3789e0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x3789e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3789e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3789e8: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x3789e8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x3789ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3789ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3789f0: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x3789f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x3789f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3789f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3789f8: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x3789f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x3789fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3789fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a00: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x378a00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x378a04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a08: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x378a08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x378a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a10: 0xa2717ff  j           func_89C5FFC
    ctx->pc = 0x378A10u;
    ctx->pc = 0x378A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A10u;
    // 0x378a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FFCu, 0x378A10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378A18u;
    // 0x378a18: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x378a18u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x378a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a20: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x378a20u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x378a24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a28: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378a28u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378A28 raw=0x48007800");
    // 0x378a2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378a30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378a38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378a3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378a40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378a44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378a48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378a4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a50: 0x8810038  j           func_20400E0
    ctx->pc = 0x378A50u;
    ctx->pc = 0x378A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A50u;
    // 0x378a54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400E0u, 0x378A50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378A58u;
    // 0x378a58: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x378A58u;
    {
        const bool branch_taken_0x378a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x378A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378A58u;
        // 0x378a5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a58) {
            ctx->pc = 0x378A64u;
            goto label_378a64;
        }
    }
    ctx->pc = 0x378A60u;
    // 0x378a60: 0x800110b4  lb          $at, 0x10B4($zero)
    ctx->pc = 0x378a60u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x10B4u));
label_378a64:
    // 0x378a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378a68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a70: 0x5002002f  beql        $zero, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x378A70u;
    {
        const bool branch_taken_0x378a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x378a70) {
            ctx->pc = 0x378A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378A70u;
            // 0x378a74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378B30u;
            goto label_378b30;
        }
    }
    ctx->pc = 0x378A78u;
    // 0x378a78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378a78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a80: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x378a80u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x378a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a88: 0x8440034  j           func_11000D0
    ctx->pc = 0x378A88u;
    ctx->pc = 0x378A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A88u;
    // 0x378a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x378A88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378A90u;
    // 0x378a90: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x378a90u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x378a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378a98: 0x9020033  j           func_40800CC
    ctx->pc = 0x378A98u;
    ctx->pc = 0x378A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378A98u;
    // 0x378a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x378A98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378AA0u;
    // 0x378aa0: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x378aa0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x378aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378aa8: 0x8240034  j           func_9000D0
    ctx->pc = 0x378AA8u;
    ctx->pc = 0x378AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AA8u;
    // 0x378aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x378AA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378AB0u;
    // 0x378ab0: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x378ab0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x378ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378ab8: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x378AB8u;
    {
        const bool branch_taken_0x378ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AB8u;
        // 0x378abc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ab8) {
            ctx->pc = 0x380AC0u;
            return;
        }
    }
    ctx->pc = 0x378AC0u;
    // 0x378ac0: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x378AC0u;
    ctx->pc = 0x378AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AC0u;
    // 0x378ac4: 0x200798  .word       0x00200798                   # mult        $zero, $at, $zero # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x378AC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378AC8u;
    // 0x378ac8: 0x12080806  beq         $s0, $t0, . + 4 + (0x806 << 2)
    ctx->pc = 0x378AC8u;
    {
        const bool branch_taken_0x378ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x378ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AC8u;
        // 0x378acc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ac8) {
            ctx->pc = 0x37AAE4u;
            return;
        }
    }
    ctx->pc = 0x378AD0u;
    // 0x378ad0: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x378ad0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x378AD0 raw=0x437F0000");
    // 0x378ad4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x378ad4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x378ad8: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x378AD8u;
    {
        const bool branch_taken_0x378ad8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x378ad8) {
            ctx->pc = 0x378ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378AD8u;
            // 0x378adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388AE4u;
            return;
        }
    }
    ctx->pc = 0x378AE0u;
    // 0x378ae0: 0x1ff0039  .word       0x01FF0039                   # INVALID     $t7, $ra, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378ae0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x378AE0 raw=0x01FF0039");
    // 0x378ae4: 0x20075e  .word       0x0020075E                   # ddiv        $zero, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378ae4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x378AE4 raw=0x0020075E");
    // 0x378ae8: 0x10010006  beq         $zero, $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x378AE8u;
    {
        const bool branch_taken_0x378ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x378AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AE8u;
        // 0x378aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ae8) {
            ctx->pc = 0x378B04u;
            goto label_378b04;
        }
    }
    ctx->pc = 0x378AF0u;
    // 0x378af0: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378af0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378af8: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378AF8u;
    {
        const bool branch_taken_0x378af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AF8u;
        // 0x378afc: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378af8) {
            ctx->pc = 0x380B08u;
            return;
        }
    }
    ctx->pc = 0x378B00u;
    // 0x378b00: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_378b04:
    // 0x378b04: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b04u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378b08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378b08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378b0c: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
    // 0x378b10: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378B10u;
    {
        const bool branch_taken_0x378b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B10u;
        // 0x378b14: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b10) {
            ctx->pc = 0x380B20u;
            return;
        }
    }
    ctx->pc = 0x378B18u;
    // 0x378b18: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378b1c: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b1cu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378b20: 0x12010805  beq         $s0, $at, . + 4 + (0x805 << 2)
    ctx->pc = 0x378B20u;
    {
        const bool branch_taken_0x378b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x378B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B20u;
        // 0x378b24: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b20) {
            ctx->pc = 0x37AB38u;
            return;
        }
    }
    ctx->pc = 0x378B28u;
    // 0x378b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378b2c: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_378b30:
    // 0x378b30: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378B30u;
    {
        const bool branch_taken_0x378b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B30u;
        // 0x378b34: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b30) {
            ctx->pc = 0x380B40u;
            return;
        }
    }
    ctx->pc = 0x378B38u;
    // 0x378b38: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378b3c: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b3cu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378b40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378b40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378b44: 0x25217d  .word       0x0025217D                   # INVALID     $at, $a1, 0x217D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378B44 raw=0x0025217D");
    // 0x378b48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378b48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378b4c: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378b54: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
    // 0x378b58: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378B58u;
    {
        const bool branch_taken_0x378b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B58u;
        // 0x378b5c: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b58) {
            ctx->pc = 0x380B68u;
            return;
        }
    }
    ctx->pc = 0x378B60u;
    // 0x378b60: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378b64: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b64u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378b68: 0x2242ff6  tne         $s1, $a0, 191
    ctx->pc = 0x378b68u;
    if (GPR_U64(ctx, 17) != GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x378b6c: 0x25217d  .word       0x0025217D                   # INVALID     $at, $a1, 0x217D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378B6C raw=0x0025217D");
    // 0x378b70: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x378B70u;
    {
        const bool branch_taken_0x378b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x378B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B70u;
        // 0x378b74: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b70) {
            ctx->pc = 0x37AB78u;
            return;
        }
    }
    ctx->pc = 0x378B78u;
    // 0x378b78: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378B78u;
    {
        const bool branch_taken_0x378b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B78u;
        // 0x378b7c: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b78) {
            ctx->pc = 0x380B88u;
            return;
        }
    }
    ctx->pc = 0x378B80u;
    // 0x378b80: 0x520107fc  beql        $s0, $at, . + 4 + (0x7FC << 2)
    ctx->pc = 0x378B80u;
    {
        const bool branch_taken_0x378b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x378b80) {
            ctx->pc = 0x378B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378B80u;
            // 0x378b84: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AB74u;
            return;
        }
    }
    ctx->pc = 0x378B88u;
    // 0x378b88: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378b8c: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b8cu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378b90: 0x2242ff6  tne         $s1, $a0, 191
    ctx->pc = 0x378b90u;
    if (GPR_U64(ctx, 17) != GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x378b94: 0x25217d  .word       0x0025217D                   # INVALID     $at, $a1, 0x217D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378B94 raw=0x0025217D");
    // 0x378b98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378b9c: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378ba0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378ba0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378ba4: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
    // 0x378ba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378ba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378bac: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bacu;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
    // 0x378bb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378bb4: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bb4u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378bb8: 0x2242ff9  .word       0x02242FF9                   # INVALID     $s1, $a0, 0x2FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bb8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x378BB8 raw=0x02242FF9");
    // 0x378bbc: 0x25217d  .word       0x0025217D                   # INVALID     $at, $a1, 0x217D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378BBC raw=0x0025217D");
    // 0x378bc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378bc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378bc4: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378bc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378bc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378bcc: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
    // 0x378bd0: 0x2242ffc  .word       0x02242FFC                   # dsll32      $a1, $a0, 31 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 31));
    // 0x378bd4: 0x25217d  .word       0x0025217D                   # INVALID     $at, $a1, 0x217D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378BD4 raw=0x0025217D");
    // 0x378bd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378bd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378bdc: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378bdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378be0: 0x2242fff  .word       0x02242FFF                   # dsra32      $a1, $a0, 31 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378be0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 31));
    // 0x378be4: 0x25217d  .word       0x0025217D                   # INVALID     $at, $a1, 0x217D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378be4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378BE4 raw=0x0025217D");
    // 0x378be8: 0x2242802  .word       0x02242802                   # srl         $a1, $a0, 0 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378be8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
    // 0x378bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378bf0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378bf0u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378BF0 raw=0x48007800");
    // 0x378bf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378bf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378bf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378c00: 0x8810038  j           func_20400E0
    ctx->pc = 0x378C00u;
    ctx->pc = 0x378C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C00u;
    // 0x378c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400E0u, 0x378C00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378C08u;
    // 0x378c08: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x378C08u;
    {
        const bool branch_taken_0x378c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x378C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C08u;
        // 0x378c0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c08) {
            ctx->pc = 0x378C14u;
            goto label_378c14;
        }
    }
    ctx->pc = 0x378C10u;
    // 0x378c10: 0x800110b4  lb          $at, 0x10B4($zero)
    ctx->pc = 0x378c10u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x10B4u));
label_378c14:
    // 0x378c14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378c14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378c20: 0x50020026  beql        $zero, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x378C20u;
    {
        const bool branch_taken_0x378c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x378c20) {
            ctx->pc = 0x378C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378C20u;
            // 0x378c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378CBCu;
            goto label_378cbc;
        }
    }
    ctx->pc = 0x378C28u;
    // 0x378c28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378c28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378c30: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x378c30u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x378c34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378c34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378c38: 0x8440034  j           func_11000D0
    ctx->pc = 0x378C38u;
    ctx->pc = 0x378C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C38u;
    // 0x378c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x378C38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378C40u;
    // 0x378c40: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x378c40u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x378c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378c48: 0x9020033  j           func_40800CC
    ctx->pc = 0x378C48u;
    ctx->pc = 0x378C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C48u;
    // 0x378c4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x378C48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378C50u;
    // 0x378c50: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x378c50u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x378c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378c58: 0x8240034  j           func_9000D0
    ctx->pc = 0x378C58u;
    ctx->pc = 0x378C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C58u;
    // 0x378c5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x378C58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378C60u;
label_378c60:
    // 0x378c60: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x378c60u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x378c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378c68: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x378C68u;
    {
        const bool branch_taken_0x378c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C68u;
        // 0x378c6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c68) {
            ctx->pc = 0x380C70u;
            return;
        }
    }
    ctx->pc = 0x378C70u;
    // 0x378c70: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x378C70u;
    ctx->pc = 0x378C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378C70u;
    // 0x378c74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x378C70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378C78u;
    // 0x378c78: 0x12080805  beq         $s0, $t0, . + 4 + (0x805 << 2)
    ctx->pc = 0x378C78u;
    {
        const bool branch_taken_0x378c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x378C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C78u;
        // 0x378c7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c78) {
            ctx->pc = 0x37AC90u;
            return;
        }
    }
    ctx->pc = 0x378C80u;
    // 0x378c80: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x378c80u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x378C80 raw=0x437F0000");
    // 0x378c84: 0x80200798  lb          $zero, 0x798($at)
    ctx->pc = 0x378c84u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 1944)));
    // 0x378c88: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x378C88u;
    {
        const bool branch_taken_0x378c88 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x378c88) {
            ctx->pc = 0x378C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378C88u;
            // 0x378c8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388C94u;
            return;
        }
    }
    ctx->pc = 0x378C90u;
    // 0x378c90: 0x1ff0039  .word       0x01FF0039                   # INVALID     $t7, $ra, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378c90u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x378C90 raw=0x01FF0039");
    // 0x378c94: 0x20075e  .word       0x0020075E                   # ddiv        $zero, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378c94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x378C94 raw=0x0020075E");
    // 0x378c98: 0x10010005  beq         $zero, $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x378C98u;
    {
        const bool branch_taken_0x378c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x378C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C98u;
        // 0x378c9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c98) {
            ctx->pc = 0x378CB0u;
            goto label_378cb0;
        }
    }
    ctx->pc = 0x378CA0u;
    // 0x378ca0: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378ca8: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378CA8u;
    {
        const bool branch_taken_0x378ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CA8u;
        // 0x378cac: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ca8) {
            ctx->pc = 0x380CB8u;
            return;
        }
    }
    ctx->pc = 0x378CB0u;
label_378cb0:
    // 0x378cb0: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378cb4: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cb4u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378cb8: 0x12010804  beq         $s0, $at, . + 4 + (0x804 << 2)
label_378cbc:
    if (ctx->pc == 0x378CBCu) {
        ctx->pc = 0x378CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CB8u;
        // 0x378cbc: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378CC0u;
        goto label_fallthrough_0x378cb8;
    }
    ctx->pc = 0x378CB8u;
    {
        const bool branch_taken_0x378cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x378CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CB8u;
        // 0x378cbc: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cb8) {
            ctx->pc = 0x37ACCCu;
            return;
        }
    }
label_fallthrough_0x378cb8:
    ctx->pc = 0x378CC0u;
    // 0x378cc0: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378CC0u;
    {
        const bool branch_taken_0x378cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CC0u;
        // 0x378cc4: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cc0) {
            ctx->pc = 0x380CD0u;
            return;
        }
    }
    ctx->pc = 0x378CC8u;
    // 0x378cc8: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378ccc: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cccu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378cd4: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378cdc: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
    // 0x378ce0: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378CE0u;
    {
        const bool branch_taken_0x378ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CE0u;
        // 0x378ce4: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ce0) {
            ctx->pc = 0x380CF0u;
            return;
        }
    }
    ctx->pc = 0x378CE8u;
    // 0x378ce8: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378cec: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cecu;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378cf0: 0x22427f9  .word       0x022427F9                   # INVALID     $s1, $a0, 0x27F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cf0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x378CF0 raw=0x022427F9");
    // 0x378cf4: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378cf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378cf8: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x378CF8u;
    {
        const bool branch_taken_0x378cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x378CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CF8u;
        // 0x378cfc: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cf8) {
            ctx->pc = 0x37AD00u;
            return;
        }
    }
    ctx->pc = 0x378D00u;
    // 0x378d00: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x378D00u;
    {
        const bool branch_taken_0x378d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x378D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D00u;
        // 0x378d04: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d00) {
            ctx->pc = 0x380D10u;
            return;
        }
    }
    ctx->pc = 0x378D08u;
    // 0x378d08: 0x520107fc  beql        $s0, $at, . + 4 + (0x7FC << 2)
    ctx->pc = 0x378D08u;
    {
        const bool branch_taken_0x378d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x378d08) {
            ctx->pc = 0x378D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378D08u;
            // 0x378d0c: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37ACFCu;
            return;
        }
    }
    ctx->pc = 0x378D10u;
    // 0x378d10: 0x212000  .word       0x00212000                   # sll         $a0, $at, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x378d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378d18: 0x22427f9  .word       0x022427F9                   # INVALID     $s1, $a0, 0x27F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d18u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x378D18 raw=0x022427F9");
    // 0x378d1c: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378d24: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
    // 0x378d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_378d2c:
    // 0x378d2c: 0x21f9bf  .word       0x0021F9BF                   # dsra32      $ra, $at, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d2cu;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
    // 0x378d30: 0x22427fc  .word       0x022427FC                   # dsll32      $a0, $a0, 31 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 31));
    // 0x378d34: 0x3f008a  .word       0x003F008A                   # movz        $zero, $at, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d34u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378d38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378d3c: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378d40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378d40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378d44: 0x3d10ef  .word       0x003D10EF                   # dsubu       $v0, $at, $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
    // 0x378d48: 0x22427ff  .word       0x022427FF                   # dsra32      $a0, $a0, 31 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 31));
    // 0x378d4c: 0x3e192b  .word       0x003E192B                   # sltu        $v1, $at, $fp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x378d50: 0x2242002  .word       0x02242002                   # srl         $a0, $a0, 0 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
    // 0x378d54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378d54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378d58: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378d58u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378D58 raw=0x48007800");
    // 0x378d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378d68: 0x800406bc  lb          $a0, 0x6BC($zero)
    ctx->pc = 0x378d68u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x6BCu));
    // 0x378d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378d70: 0x8220034  j           func_8800D0
    ctx->pc = 0x378D70u;
    ctx->pc = 0x378D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D70u;
    // 0x378d74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8800D0u, 0x378D70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378D78u;
    // 0x378d78: 0x8430034  j           func_10C00D0
    ctx->pc = 0x378D78u;
    ctx->pc = 0x378D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D78u;
    // 0x378d7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00D0u, 0x378D78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378D80u;
    // 0x378d80: 0x9010033  j           func_40400CC
    ctx->pc = 0x378D80u;
    ctx->pc = 0x378D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D80u;
    // 0x378d84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40400CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40400CCu, 0x378D80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378D88u;
    // 0x378d88: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x378d88u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x378d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378d90: 0x800418f4  lb          $a0, 0x18F4($zero)
    ctx->pc = 0x378d90u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F4u));
    // 0x378d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378d98: 0x80030870  lb          $v1, 0x870($zero)
    ctx->pc = 0x378d98u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x870u));
    // 0x378d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378da0: 0x8850038  j           func_21400E0
    ctx->pc = 0x378DA0u;
    ctx->pc = 0x378DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DA0u;
    // 0x378da4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21400E0u, 0x378DA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378DA8u;
    // 0x378da8: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x378DA8u;
    {
        const bool branch_taken_0x378da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x378DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DA8u;
        // 0x378dac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378da8) {
            ctx->pc = 0x378DB0u;
            goto label_378db0;
        }
    }
    ctx->pc = 0x378DB0u;
label_378db0:
    // 0x378db0: 0x80062974  lb          $a2, 0x2974($zero)
    ctx->pc = 0x378db0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x2974u));
    // 0x378db4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378db4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378db8: 0x10021003  beq         $zero, $v0, . + 4 + (0x1003 << 2)
    ctx->pc = 0x378DB8u;
    {
        const bool branch_taken_0x378db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x378DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DB8u;
        // 0x378dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378db8) {
            ctx->pc = 0x37CDC8u;
            return;
        }
    }
    ctx->pc = 0x378DC0u;
    // 0x378dc0: 0x52050010  beql        $s0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x378DC0u;
    {
        const bool branch_taken_0x378dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x378dc0) {
            ctx->pc = 0x378DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378DC0u;
            // 0x378dc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378E04u;
            goto label_378e04;
        }
    }
    ctx->pc = 0x378DC8u;
    // 0x378dc8: 0x10030003  beq         $zero, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378DC8u;
    {
        const bool branch_taken_0x378dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x378DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DC8u;
        // 0x378dcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378dc8) {
            ctx->pc = 0x378DD8u;
            goto label_378dd8;
        }
    }
    ctx->pc = 0x378DD0u;
    // 0x378dd0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378dd0u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378DD0 raw=0x48007800");
    // 0x378dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_378dd8:
    // 0x378dd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378dd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378de0: 0x800406bc  lb          $a0, 0x6BC($zero)
    ctx->pc = 0x378de0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x6BCu));
    // 0x378de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378de8: 0x8420034  j           func_10800D0
    ctx->pc = 0x378DE8u;
    ctx->pc = 0x378DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DE8u;
    // 0x378dec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10800D0u, 0x378DE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378DF0u;
    // 0x378df0: 0x9010033  j           func_40400CC
    ctx->pc = 0x378DF0u;
    ctx->pc = 0x378DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DF0u;
    // 0x378df4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40400CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40400CCu, 0x378DF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378DF8u;
    // 0x378df8: 0x800410b4  lb          $a0, 0x10B4($zero)
    ctx->pc = 0x378df8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B4u));
    // 0x378dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e00: 0x80020870  lb          $v0, 0x870($zero)
    ctx->pc = 0x378e00u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x870u));
label_378e04:
    // 0x378e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e08: 0x8850038  j           func_21400E0
    ctx->pc = 0x378E08u;
    ctx->pc = 0x378E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E08u;
    // 0x378e0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21400E0u, 0x378E08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378E10u;
    // 0x378e10: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x378E10u;
    {
        const bool branch_taken_0x378e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x378E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E10u;
        // 0x378e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e10) {
            ctx->pc = 0x378E18u;
            goto label_378e18;
        }
    }
    ctx->pc = 0x378E18u;
label_378e18:
    // 0x378e18: 0x80062974  lb          $a2, 0x2974($zero)
    ctx->pc = 0x378e18u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x2974u));
    // 0x378e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e20: 0x800100b0  lb          $at, 0xB0($zero)
    ctx->pc = 0x378e20u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0xB0u));
    // 0x378e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e28: 0x52050003  beql        $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378E28u;
    {
        const bool branch_taken_0x378e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x378e28) {
            ctx->pc = 0x378E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378E28u;
            // 0x378e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378E38u;
            goto label_378e38;
        }
    }
    ctx->pc = 0x378E30u;
    // 0x378e30: 0x10030001  beq         $zero, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x378E30u;
    {
        const bool branch_taken_0x378e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x378E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E30u;
        // 0x378e34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e30) {
            ctx->pc = 0x378E38u;
            goto label_378e38;
        }
    }
    ctx->pc = 0x378E38u;
label_378e38:
    // 0x378e38: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378e38u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378E38 raw=0x48007800");
    // 0x378e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e48: 0x1df0021  addu        $zero, $t6, $ra
    ctx->pc = 0x378e48u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 31)));
    // 0x378e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e50: 0x3e0038  .word       0x003E0038                   # dsll        $zero, $fp, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378e50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) << 0);
    // 0x378e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e58: 0x8440fff  j           func_1103FFC
    ctx->pc = 0x378E58u;
    ctx->pc = 0x378E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E58u;
    // 0x378e5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103FFCu, 0x378E58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378E60u;
    // 0x378e60: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x378e60u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x378e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e68: 0x1f9002e  dsub        $zero, $t7, $t9
    ctx->pc = 0x378e68u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x378e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e70: 0x1fa002f  dsubu       $zero, $t7, $k0
    ctx->pc = 0x378e70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) - GPR_U64(ctx, 26));
    // 0x378e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e78: 0x81fc0b7c  lb          $gp, 0xB7C($t7)
    ctx->pc = 0x378e78u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x378e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e80: 0x81fd0b7c  lb          $sp, 0xB7C($t7)
    ctx->pc = 0x378e80u;
    SET_GPR_S32(ctx, 29, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x378e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378e88: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x378e88u;
    // CACHE instruction (ignored)
    // 0x378e8c: 0x81dce13c  lb          $gp, -0x1EC4($t6)
    ctx->pc = 0x378e8cu;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294959420)));
    // 0x378e90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378e90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378e94: 0x1dde93c  .word       0x01DDE93C                   # dsll32      $sp, $sp, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378e94u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 29) << (32 + 4));
    // 0x378e98: 0x11ed07f0  beq         $t7, $t5, . + 4 + (0x7F0 << 2)
    ctx->pc = 0x378E98u;
    {
        const bool branch_taken_0x378e98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x378E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E98u;
        // 0x378e9c: 0x1dccabe  .word       0x01DCCABE                   # dsrl32      $t9, $gp, 10 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 28) >> (32 + 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e98) {
            ctx->pc = 0x37AE5Cu;
            return;
        }
    }
    ctx->pc = 0x378EA0u;
    // 0x378ea0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
    ctx->pc = 0x378EA0u;
    {
        const bool branch_taken_0x378ea0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x378EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378EA0u;
        // 0x378ea4: 0x1c0d70b  .word       0x01C0D70B                   # movn        $k0, $t6, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ea0) {
            ctx->pc = 0x37AEA0u;
            return;
        }
    }
    ctx->pc = 0x378EA8u;
    // 0x378ea8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
    ctx->pc = 0x378EA8u;
    {
        const bool branch_taken_0x378ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x378EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378EA8u;
        // 0x378eac: 0x1ddcabe  .word       0x01DDCABE                   # dsrl32      $t9, $sp, 10 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 29) >> (32 + 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ea8) {
            ctx->pc = 0x38EEB0u;
            return;
        }
    }
    ctx->pc = 0x378EB0u;
    // 0x378eb0: 0x100c0010  beq         $zero, $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x378EB0u;
    {
        const bool branch_taken_0x378eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x378EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378EB0u;
        // 0x378eb4: 0x1c0d74b  .word       0x01C0D74B                   # movn        $k0, $t6, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378eb0) {
            ctx->pc = 0x378EF4u;
            goto label_378ef4;
        }
    }
    ctx->pc = 0x378EB8u;
    // 0x378eb8: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x378eb8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x378ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378ec0: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x378ec0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x378ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378ec8: 0x81c10b7c  lb          $at, 0xB7C($t6)
    ctx->pc = 0x378ec8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 2940)));
    // 0x378ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378ed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378ed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378ed4: 0x1e2093c  .word       0x01E2093C                   # dsll32      $at, $v0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378ed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
    // 0x378ed8: 0x81fbe33c  lb          $k1, -0x1CC4($t7)
    ctx->pc = 0x378ed8u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959932)));
    // 0x378edc: 0x1c2cabe  .word       0x01C2CABE                   # dsrl32      $t9, $v0, 10 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378edcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) >> (32 + 10));
    // 0x378ee0: 0x81fceb3c  lb          $gp, -0x14C4($t7)
    ctx->pc = 0x378ee0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294961980)));
    // 0x378ee4: 0x1c0d74b  .word       0x01C0D74B                   # movn        $k0, $t6, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378ee4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 14));
    // 0x378ee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378ee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378eec: 0x1dcd8ec  .word       0x01DCD8EC                   # dadd        $k1, $t6, $gp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378eecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
    // 0x378ef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378ef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_378ef4:
    // 0x378ef4: 0x1dce92c  .word       0x01DCE92C                   # dadd        $sp, $t6, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378ef4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
    // 0x378ef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378ef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378efc: 0x1dcf96c  .word       0x01DCF96C                   # dadd        $ra, $t6, $gp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378efcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
    // 0x378f00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f04: 0x1c41afe  .word       0x01C41AFE                   # dsrl32      $v1, $a0, 11 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 11));
    // 0x378f08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f0c: 0x1c321ae  .word       0x01C321AE                   # dsub        $a0, $t6, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378f0cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
    // 0x378f10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f14: 0x1de29db  .word       0x01DE29DB                   # divu        $a1, $t6, $fp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378f14u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x378f18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f1c: 0x1c63a2a  .word       0x01C63A2A                   # slt         $a3, $t6, $a2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378f1cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x378f20: 0x8251000  j           func_944000
    ctx->pc = 0x378F20u;
    ctx->pc = 0x378F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F20u;
    // 0x378f24: 0x2801bc  .word       0x002801BC                   # dsll32      $zero, $t0, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x944000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x944000u, 0x378F20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378F28u;
    // 0x378f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f2c: 0x2800bd  .word       0x002800BD                   # INVALID     $at, $t0, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378f2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x378F2C raw=0x002800BD");
    // 0x378f30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f34: 0x28024a  .word       0x0028024A                   # movz        $zero, $at, $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378f34u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x378f38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378f40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378f48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378f50: 0x34066000  ori         $a2, $zero, 0x6000
    ctx->pc = 0x378f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)24576);
    // 0x378f54: 0x20f79e  .word       0x0020F79E                   # ddiv        $fp, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378f54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x378F54 raw=0x0020F79E");
    // 0x378f58: 0x800d31b0  lb          $t5, 0x31B0($zero)
    ctx->pc = 0x378f58u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x31B0u));
    // 0x378f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378f60: 0x800b31b4  lb          $t3, 0x31B4($zero)
    ctx->pc = 0x378f60u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x31B4u));
    // 0x378f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378f68: 0x800629f5  lb          $a2, 0x29F5($zero)
    ctx->pc = 0x378f68u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x29F5u));
    // 0x378f6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378f70: 0xa271000  j           func_89C4000
    ctx->pc = 0x378F70u;
    ctx->pc = 0x378F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F70u;
    // 0x378f74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C4000u, 0x378F70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378F78u;
    // 0x378f78: 0x52040fe9  beql        $s0, $a0, . + 4 + (0xFE9 << 2)
    ctx->pc = 0x378F78u;
    {
        const bool branch_taken_0x378f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x378f78) {
            ctx->pc = 0x378F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378F78u;
            // 0x378f7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CF20u;
            return;
        }
    }
    ctx->pc = 0x378F80u;
    // 0x378f80: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x378f80u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x378f84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378f88: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378f88u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378F88 raw=0x48007800");
    // 0x378f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378f90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378f90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378f94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378f94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x378f98u;
}
