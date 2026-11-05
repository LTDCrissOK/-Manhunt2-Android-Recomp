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

// Function: sub_001A20F0
// Address: 0x1a20f0 - 0x1a2330
void sub_001A20F0_0x1a20f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A20F0_0x1a20f0");
#endif

    switch (ctx->pc) {
        case 0x1a216cu: goto label_1a216c;
        case 0x1a217cu: goto label_1a217c;
        case 0x1a2184u: goto label_1a2184;
        case 0x1a21acu: goto label_1a21ac;
        case 0x1a22acu: goto label_1a22ac;
        default: break;
    }

    ctx->pc = 0x1a20f0u;

    // 0x1a20f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a20f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a20f4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a20f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a20f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a20fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a20fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2104: 0x8c62093c  lw          $v0, 0x93C($v1)
    ctx->pc = 0x1a2104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F093Cu));
    // 0x1a2108: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1a2108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a210c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a210cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a2110: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A2110u;
    {
        const bool branch_taken_0x1a2110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2110u;
        // 0x1a2114: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2110) {
            ctx->pc = 0x1A2164u;
            goto label_1a2164;
        }
    }
    ctx->pc = 0x1A2118u;
    // 0x1a2118: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a211c: 0x8c621004  lw          $v0, 0x1004($v1)
    ctx->pc = 0x1a211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x1a2120: 0xc4611074  lwc1        $f1, 0x1074($v1)
    ctx->pc = 0x1a2120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2124: 0xc4401074  lwc1        $f0, 0x1074($v0)
    ctx->pc = 0x1a2124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2128: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a212c: 0x0  nop
    ctx->pc = 0x1a212cu;
    // NOP
    // 0x1a2130: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2130u;
    {
        const bool branch_taken_0x1a2130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2130) {
            ctx->pc = 0x1A2134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2130u;
            // 0x1a2134: 0x8c630ff4  lw          $v1, 0xFF4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2150u;
            goto label_1a2150;
        }
    }
    ctx->pc = 0x1A2138u;
    // 0x1a2138: 0x8c620ff4  lw          $v0, 0xFF4($v1)
    ctx->pc = 0x1a2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
    // 0x1a213c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a213cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a2140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2144: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1a2144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1a2148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2148u;
    {
        const bool branch_taken_0x1a2148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2148u;
        // 0x1a214c: 0xac440038  sw          $a0, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2148) {
            ctx->pc = 0x1A215Cu;
            goto label_1a215c;
        }
    }
    ctx->pc = 0x1A2150u;
label_1a2150:
    // 0x1a2150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2154: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x1a2154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x1a2158: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x1a2158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_1a215c:
    // 0x1a215c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2160: 0xae22093c  sw          $v0, 0x93C($s1)
    ctx->pc = 0x1a2160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 2));
label_1a2164:
    // 0x1a2164: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A2164u;
    SET_GPR_U32(ctx, 31, 0x1A216Cu);
    ctx->pc = 0x1A2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2164u;
    // 0x1a2168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A2164u, 0x1A216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A216Cu;
label_1a216c:
    // 0x1a216c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2174: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A2174u;
    SET_GPR_U32(ctx, 31, 0x1A217Cu);
    ctx->pc = 0x1A2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2174u;
    // 0x1a2178: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A2174u, 0x1A217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A217Cu;
label_1a217c:
    // 0x1a217c: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A217Cu;
    SET_GPR_U32(ctx, 31, 0x1A2184u);
    ctx->pc = 0x1A2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A217Cu;
    // 0x1a2180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A217Cu, 0x1A2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2184u;
label_1a2184:
    // 0x1a2184: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a2184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2188: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1a2188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1a218c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a218cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2190: 0x0  nop
    ctx->pc = 0x1a2190u;
    // NOP
    // 0x1a2194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2198: 0x0  nop
    ctx->pc = 0x1a2198u;
    // NOP
    // 0x1a219c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1A219Cu;
    {
        const bool branch_taken_0x1a219c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A219Cu;
        // 0x1a21a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a219c) {
            ctx->pc = 0x1A2214u;
            goto label_1a2214;
        }
    }
    ctx->pc = 0x1A21A4u;
    // 0x1a21a4: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A21A4u;
    SET_GPR_U32(ctx, 31, 0x1A21ACu);
    ctx->pc = 0x1A21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A21A4u;
    // 0x1a21a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A21A4u, 0x1A21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A21ACu;
label_1a21ac:
    // 0x1a21ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a21b0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a21b4: 0x8c430ff4  lw          $v1, 0xFF4($v0)
    ctx->pc = 0x1a21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1a21b8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a21bc: 0xae20093c  sw          $zero, 0x93C($s1)
    ctx->pc = 0x1a21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 0));
    // 0x1a21c0: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x1a21c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a21c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A21C4u;
    {
        const bool branch_taken_0x1a21c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21C4u;
        // 0x1a21c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21c4) {
            ctx->pc = 0x1A21E0u;
            goto label_1a21e0;
        }
    }
    ctx->pc = 0x1A21CCu;
    // 0x1a21cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a21ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a21d0: 0x0  nop
    ctx->pc = 0x1a21d0u;
    // NOP
    // 0x1a21d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a21d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a21d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A21D8u;
    {
        const bool branch_taken_0x1a21d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a21d8) {
            ctx->pc = 0x1A21F8u;
            goto label_1a21f8;
        }
    }
    ctx->pc = 0x1A21E0u;
label_1a21e0:
    // 0x1a21e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a21e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a21e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a21e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a21e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a21e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a21ec: 0x0  nop
    ctx->pc = 0x1a21ecu;
    // NOP
    // 0x1a21f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a21f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a21f4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a21f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a21f8:
    // 0x1a21f8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a21f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a21fc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a21fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a2200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2204: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a2204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1a2208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a220c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1A220Cu;
    {
        const bool branch_taken_0x1a220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A220Cu;
        // 0x1a2210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a220c) {
            ctx->pc = 0x1A2308u;
            goto label_1a2308;
        }
    }
    ctx->pc = 0x1A2214u;
label_1a2214:
    // 0x1a2214: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2218: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1a221c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A221Cu;
    {
        const bool branch_taken_0x1a221c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A221Cu;
        // 0x1a2220: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a221c) {
            ctx->pc = 0x1A2238u;
            goto label_1a2238;
        }
    }
    ctx->pc = 0x1A2224u;
    // 0x1a2224: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2228: 0x0  nop
    ctx->pc = 0x1a2228u;
    // NOP
    // 0x1a222c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a222cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a2230: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2230u;
    {
        const bool branch_taken_0x1a2230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2230) {
            ctx->pc = 0x1A2250u;
            goto label_1a2250;
        }
    }
    ctx->pc = 0x1A2238u;
label_1a2238:
    // 0x1a2238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a223c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a223cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a2240: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2244: 0x0  nop
    ctx->pc = 0x1a2244u;
    // NOP
    // 0x1a2248: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a224c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a224cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2250:
    // 0x1a2250: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a2254: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a2258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a225c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1a225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2260: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a2264: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2268: 0x0  nop
    ctx->pc = 0x1a2268u;
    // NOP
    // 0x1a226c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x1A226Cu;
    {
        const bool branch_taken_0x1a226c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A226Cu;
        // 0x1a2270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a226c) {
            ctx->pc = 0x1A2314u;
            goto label_1a2314;
        }
    }
    ctx->pc = 0x1A2274u;
    // 0x1a2274: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a2274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2278: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1a2278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1a227c: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x1a227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a2280: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1a2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1a2284: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a2288: 0x10450022  beq         $v0, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A2288u;
    {
        const bool branch_taken_0x1a2288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2288u;
        // 0x1a228c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2288) {
            ctx->pc = 0x1A2314u;
            goto label_1a2314;
        }
    }
    ctx->pc = 0x1A2290u;
    // 0x1a2290: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1a2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a2294: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1a2294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a2298: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A2298u;
    {
        const bool branch_taken_0x1a2298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2298u;
        // 0x1a229c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2298) {
            ctx->pc = 0x1A2314u;
            goto label_1a2314;
        }
    }
    ctx->pc = 0x1A22A0u;
    // 0x1a22a0: 0xae20093c  sw          $zero, 0x93C($s1)
    ctx->pc = 0x1a22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 0));
    // 0x1a22a4: 0xc069350  jal         func_1A4D40
    ctx->pc = 0x1A22A4u;
    SET_GPR_U32(ctx, 31, 0x1A22ACu);
    ctx->pc = 0x1A22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22A4u;
    // 0x1a22a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D40u, 0x1A22A4u, 0x1A22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22ACu;
label_1a22ac:
    // 0x1a22ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a22b0: 0x8c430ff4  lw          $v1, 0xFF4($v0)
    ctx->pc = 0x1a22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1a22b4: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a22b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a22b8: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1a22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x1a22bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A22BCu;
    {
        const bool branch_taken_0x1a22bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22BCu;
        // 0x1a22c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22bc) {
            ctx->pc = 0x1A22D8u;
            goto label_1a22d8;
        }
    }
    ctx->pc = 0x1A22C4u;
    // 0x1a22c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a22c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a22c8: 0x0  nop
    ctx->pc = 0x1a22c8u;
    // NOP
    // 0x1a22cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a22ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a22d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A22D0u;
    {
        const bool branch_taken_0x1a22d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22d0) {
            ctx->pc = 0x1A22F0u;
            goto label_1a22f0;
        }
    }
    ctx->pc = 0x1A22D8u;
label_1a22d8:
    // 0x1a22d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a22d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a22dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a22dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a22e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a22e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a22e4: 0x0  nop
    ctx->pc = 0x1a22e4u;
    // NOP
    // 0x1a22e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a22e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a22ec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a22ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a22f0:
    // 0x1a22f0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a22f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a22f4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a22f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a22f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a22f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a22fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a22fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2300: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a2300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1a2304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2308:
    // 0x1a2308: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a230c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a230cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2310: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1a2310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1a2314:
    // 0x1a2314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a231c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a231cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2320: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a2320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2324: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2324u;
        // 0x1a2328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A232Cu;
    // 0x1a232c: 0x0  nop
    ctx->pc = 0x1a232cu;
    // NOP
    ctx->pc = 0x1a2330u;
}
