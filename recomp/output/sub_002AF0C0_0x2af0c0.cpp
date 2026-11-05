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

// Function: sub_002AF0C0
// Address: 0x2af0c0 - 0x2af51c
void sub_002AF0C0_0x2af0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF0C0_0x2af0c0");
#endif

    switch (ctx->pc) {
        case 0x2af0ecu: goto label_2af0ec;
        case 0x2af298u: goto label_2af298;
        case 0x2af470u: goto label_2af470;
        case 0x2af4d4u: goto label_2af4d4;
        default: break;
    }

    ctx->pc = 0x2af0c0u;

    // 0x2af0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af0c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2af0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2af0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af0cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2af0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2af0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2af0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0d4: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2af0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2af0d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2af0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF0DCu;
    {
        const bool branch_taken_0x2af0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0DCu;
        // 0x2af0e0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0dc) {
            ctx->pc = 0x2AF0ECu;
            goto label_2af0ec;
        }
    }
    ctx->pc = 0x2AF0E4u;
    // 0x2af0e4: 0xc0abb9e  jal         func_2AEE78
    ctx->pc = 0x2AF0E4u;
    SET_GPR_U32(ctx, 31, 0x2AF0ECu);
    ctx->pc = 0x2AEE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEE78u, 0x2AF0E4u, 0x2AF0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF0ECu;
label_2af0ec:
    // 0x2af0ec: 0x2e020013  sltiu       $v0, $s0, 0x13
    ctx->pc = 0x2af0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x2af0f0: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x2AF0F0u;
    {
        const bool branch_taken_0x2af0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0F0u;
        // 0x2af0f4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0f0) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF0F8u;
    // 0x2af0f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2af0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2af0fc: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x2af0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
    // 0x2af100: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2af104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af108: 0x800008  jr          $a0
    ctx->pc = 0x2AF108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AF110u: goto label_2af110;
            case 0x2AF1C8u: goto label_2af1c8;
            case 0x2AF288u: goto label_2af288;
            case 0x2AF2A4u: goto label_2af2a4;
            case 0x2AF2C8u: goto label_2af2c8;
            case 0x2AF2E8u: goto label_2af2e8;
            case 0x2AF30Cu: goto label_2af30c;
            case 0x2AF32Cu: goto label_2af32c;
            case 0x2AF350u: goto label_2af350;
            case 0x2AF370u: goto label_2af370;
            case 0x2AF394u: goto label_2af394;
            case 0x2AF3B4u: goto label_2af3b4;
            case 0x2AF3D8u: goto label_2af3d8;
            case 0x2AF404u: goto label_2af404;
            case 0x2AF41Cu: goto label_2af41c;
            case 0x2AF434u: goto label_2af434;
            case 0x2AF4A0u: goto label_2af4a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AF110u;
label_2af110:
    // 0x2af110: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2af110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af114: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af118: 0x24452450  addiu       $a1, $v0, 0x2450
    ctx->pc = 0x2af118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
    // 0x2af11c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2af11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2af120: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2af120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af124: 0xe4422450  swc1        $f2, 0x2450($v0)
    ctx->pc = 0x2af124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4C2450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2450u, _value); } while (0); }
    // 0x2af128: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2af128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2af12c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2af12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af130: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2af130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af134: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2af134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af138: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2af138u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2460u));
    // 0x2af13c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2af13cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2af140: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2af140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2af144: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2af144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4C2460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2460u, _value); } while (0);
    // 0x2af148: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF148u;
    {
        const bool branch_taken_0x2af148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF148u;
        // 0x2af14c: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af148) {
            ctx->pc = 0x2AF158u;
            goto label_2af158;
        }
    }
    ctx->pc = 0x2AF150u;
    // 0x2af150: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF150u;
    {
        const bool branch_taken_0x2af150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF150u;
        // 0x2af154: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af150) {
            ctx->pc = 0x2AF174u;
            goto label_2af174;
        }
    }
    ctx->pc = 0x2AF158u;
label_2af158:
    // 0x2af158: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af15c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af160: 0x0  nop
    ctx->pc = 0x2af160u;
    // NOP
    // 0x2af164: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2af164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af168: 0x0  nop
    ctx->pc = 0x2af168u;
    // NOP
    // 0x2af16c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF16Cu;
    {
        const bool branch_taken_0x2af16c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF16Cu;
        // 0x2af170: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af16c) {
            ctx->pc = 0x2AF17Cu;
            goto label_2af17c;
        }
    }
    ctx->pc = 0x2AF174u;
label_2af174:
    // 0x2af174: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2af174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2af178: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x2af178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_2af17c:
    // 0x2af17c: 0x24c42450  addiu       $a0, $a2, 0x2450
    ctx->pc = 0x2af17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 9296));
    // 0x2af180: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2af180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2af184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af188: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2af188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af18c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2af18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af190: 0x0  nop
    ctx->pc = 0x2af190u;
    // NOP
    // 0x2af194: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF194u;
    {
        const bool branch_taken_0x2af194 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF194u;
        // 0x2af198: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af194) {
            ctx->pc = 0x2AF1A4u;
            goto label_2af1a4;
        }
    }
    ctx->pc = 0x2AF19Cu;
    // 0x2af19c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2AF19Cu;
    {
        const bool branch_taken_0x2af19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF19Cu;
        // 0x2af1a0: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af19c) {
            ctx->pc = 0x2AF27Cu;
            goto label_2af27c;
        }
    }
    ctx->pc = 0x2AF1A4u;
label_2af1a4:
    // 0x2af1a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af1a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af1ac: 0x0  nop
    ctx->pc = 0x2af1acu;
    // NOP
    // 0x2af1b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2af1b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af1b4: 0x0  nop
    ctx->pc = 0x2af1b4u;
    // NOP
    // 0x2af1b8: 0x450000db  bc1f        . + 4 + (0xDB << 2)
    ctx->pc = 0x2AF1B8u;
    {
        const bool branch_taken_0x2af1b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1B8u;
        // 0x2af1bc: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1b8) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF1C0u;
    // 0x2af1c0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2AF1C0u;
    {
        const bool branch_taken_0x2af1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1C0u;
        // 0x2af1c4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1c0) {
            ctx->pc = 0x2AF27Cu;
            goto label_2af27c;
        }
    }
    ctx->pc = 0x2AF1C8u;
label_2af1c8:
    // 0x2af1c8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2af1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af1cc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2af1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2af1d0: 0x24852450  addiu       $a1, $a0, 0x2450
    ctx->pc = 0x2af1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    // 0x2af1d4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2af1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2af1d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2af1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af1dc: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x2af1dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4C2458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2458u, _value); } while (0); }
    // 0x2af1e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2af1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2af1e4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2af1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2460u));
    // 0x2af1e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2af1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af1ec: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2af1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af1f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2af1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1f4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2af1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2af1f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2af1f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2af1fc: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2af1fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4C2460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2460u, _value); } while (0);
    // 0x2af200: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF200u;
    {
        const bool branch_taken_0x2af200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF200u;
        // 0x2af204: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af200) {
            ctx->pc = 0x2AF210u;
            goto label_2af210;
        }
    }
    ctx->pc = 0x2AF208u;
    // 0x2af208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF208u;
    {
        const bool branch_taken_0x2af208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF208u;
        // 0x2af20c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af208) {
            ctx->pc = 0x2AF22Cu;
            goto label_2af22c;
        }
    }
    ctx->pc = 0x2AF210u;
label_2af210:
    // 0x2af210: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af218: 0x0  nop
    ctx->pc = 0x2af218u;
    // NOP
    // 0x2af21c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2af21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af220: 0x0  nop
    ctx->pc = 0x2af220u;
    // NOP
    // 0x2af224: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF224u;
    {
        const bool branch_taken_0x2af224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF224u;
        // 0x2af228: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af224) {
            ctx->pc = 0x2AF234u;
            goto label_2af234;
        }
    }
    ctx->pc = 0x2AF22Cu;
label_2af22c:
    // 0x2af22c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2af22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2af230: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x2af230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_2af234:
    // 0x2af234: 0x24c42450  addiu       $a0, $a2, 0x2450
    ctx->pc = 0x2af234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 9296));
    // 0x2af238: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2af238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2af23c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af240: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2af240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2af244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af248: 0x0  nop
    ctx->pc = 0x2af248u;
    // NOP
    // 0x2af24c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF24Cu;
    {
        const bool branch_taken_0x2af24c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF24Cu;
        // 0x2af250: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af24c) {
            ctx->pc = 0x2AF25Cu;
            goto label_2af25c;
        }
    }
    ctx->pc = 0x2AF254u;
    // 0x2af254: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF254u;
    {
        const bool branch_taken_0x2af254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF254u;
        // 0x2af258: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af254) {
            ctx->pc = 0x2AF27Cu;
            goto label_2af27c;
        }
    }
    ctx->pc = 0x2AF25Cu;
label_2af25c:
    // 0x2af25c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af264: 0x0  nop
    ctx->pc = 0x2af264u;
    // NOP
    // 0x2af268: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2af268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af26c: 0x0  nop
    ctx->pc = 0x2af26cu;
    // NOP
    // 0x2af270: 0x450000ad  bc1f        . + 4 + (0xAD << 2)
    ctx->pc = 0x2AF270u;
    {
        const bool branch_taken_0x2af270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF270u;
        // 0x2af274: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af270) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF278u;
    // 0x2af278: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2af278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2af27c:
    // 0x2af27c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2af27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2af280: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2AF280u;
    {
        const bool branch_taken_0x2af280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF280u;
        // 0x2af284: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af280) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF288u;
label_2af288:
    // 0x2af288: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x2af288u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x2af28c: 0x26102450  addiu       $s0, $s0, 0x2450
    ctx->pc = 0x2af28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
    // 0x2af290: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2AF290u;
    SET_GPR_U32(ctx, 31, 0x2AF298u);
    ctx->pc = 0x2AF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF290u;
    // 0x2af294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x2AF290u, 0x2AF298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF298u;
label_2af298:
    // 0x2af298: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2af298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2af29c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2AF29Cu;
    {
        const bool branch_taken_0x2af29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF29Cu;
        // 0x2af2a0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af29c) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF2A4u;
label_2af2a4:
    // 0x2af2a4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af2a8: 0x24442470  addiu       $a0, $v0, 0x2470
    ctx->pc = 0x2af2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x2af2ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2af2acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af2b0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2af2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2af2b4: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2AF2B4u;
    {
        const bool branch_taken_0x2af2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2B4u;
        // 0x2af2b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2b4) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF2BCu;
    // 0x2af2bc: 0x34620003  ori         $v0, $v1, 0x3
    ctx->pc = 0x2af2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2af2c0: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2AF2C0u;
    {
        const bool branch_taken_0x2af2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2C0u;
        // 0x2af2c4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2c0) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF2C8u;
label_2af2c8:
    // 0x2af2c8: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2af2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2af2cc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2af2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2af2d0: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x2af2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x2af2d4: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x2af2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x2af2d8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af2dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af2e0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2AF2E0u;
    {
        const bool branch_taken_0x2af2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2E0u;
        // 0x2af2e4: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2e0) {
            ctx->pc = 0x2AF3F4u;
            goto label_2af3f4;
        }
    }
    ctx->pc = 0x2AF2E8u;
label_2af2e8:
    // 0x2af2e8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af2ec: 0x24442470  addiu       $a0, $v0, 0x2470
    ctx->pc = 0x2af2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x2af2f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2af2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af2f4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2af2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2af2f8: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2AF2F8u;
    {
        const bool branch_taken_0x2af2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF2F8u;
        // 0x2af2fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2f8) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF300u;
    // 0x2af300: 0x3462000c  ori         $v0, $v1, 0xC
    ctx->pc = 0x2af300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x2af304: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2AF304u;
    {
        const bool branch_taken_0x2af304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF304u;
        // 0x2af308: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af304) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF30Cu;
label_2af30c:
    // 0x2af30c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2af30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2af310: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2af310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2af314: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x2af314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x2af318: 0x3484fffb  ori         $a0, $a0, 0xFFFB
    ctx->pc = 0x2af318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65531);
    // 0x2af31c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af31cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af320: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af324: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2AF324u;
    {
        const bool branch_taken_0x2af324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF324u;
        // 0x2af328: 0x3442fff7  ori         $v0, $v0, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af324) {
            ctx->pc = 0x2AF3F4u;
            goto label_2af3f4;
        }
    }
    ctx->pc = 0x2AF32Cu;
label_2af32c:
    // 0x2af32c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af330: 0x24442470  addiu       $a0, $v0, 0x2470
    ctx->pc = 0x2af330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x2af334: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2af334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af338: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2af338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2af33c: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2AF33Cu;
    {
        const bool branch_taken_0x2af33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF33Cu;
        // 0x2af340: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af33c) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF344u;
    // 0x2af344: 0x34620030  ori         $v0, $v1, 0x30
    ctx->pc = 0x2af344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
    // 0x2af348: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2AF348u;
    {
        const bool branch_taken_0x2af348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF348u;
        // 0x2af34c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af348) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF350u;
label_2af350:
    // 0x2af350: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2af350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2af354: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2af354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2af358: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x2af358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x2af35c: 0x3484ffef  ori         $a0, $a0, 0xFFEF
    ctx->pc = 0x2af35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65519);
    // 0x2af360: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af360u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af364: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af368: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2AF368u;
    {
        const bool branch_taken_0x2af368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF368u;
        // 0x2af36c: 0x3442ffdf  ori         $v0, $v0, 0xFFDF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af368) {
            ctx->pc = 0x2AF3F4u;
            goto label_2af3f4;
        }
    }
    ctx->pc = 0x2AF370u;
label_2af370:
    // 0x2af370: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af374: 0x24442470  addiu       $a0, $v0, 0x2470
    ctx->pc = 0x2af374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x2af378: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2af378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af37c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2af37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2af380: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2AF380u;
    {
        const bool branch_taken_0x2af380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF380u;
        // 0x2af384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af380) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF388u;
    // 0x2af388: 0x346200c0  ori         $v0, $v1, 0xC0
    ctx->pc = 0x2af388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x2af38c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2AF38Cu;
    {
        const bool branch_taken_0x2af38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF38Cu;
        // 0x2af390: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af38c) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF394u;
label_2af394:
    // 0x2af394: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2af394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2af398: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2af398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2af39c: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x2af39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x2af3a0: 0x3484ffbf  ori         $a0, $a0, 0xFFBF
    ctx->pc = 0x2af3a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65471);
    // 0x2af3a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af3a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af3ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2AF3ACu;
    {
        const bool branch_taken_0x2af3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3ACu;
        // 0x2af3b0: 0x3442ff7f  ori         $v0, $v0, 0xFF7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3ac) {
            ctx->pc = 0x2AF3F4u;
            goto label_2af3f4;
        }
    }
    ctx->pc = 0x2AF3B4u;
label_2af3b4:
    // 0x2af3b4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af3b8: 0x24442470  addiu       $a0, $v0, 0x2470
    ctx->pc = 0x2af3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x2af3bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2af3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af3c0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2af3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2af3c4: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2AF3C4u;
    {
        const bool branch_taken_0x2af3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3C4u;
        // 0x2af3c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3c4) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF3CCu;
    // 0x2af3cc: 0x34620300  ori         $v0, $v1, 0x300
    ctx->pc = 0x2af3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
    // 0x2af3d0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2AF3D0u;
    {
        const bool branch_taken_0x2af3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3D0u;
        // 0x2af3d4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3d0) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF3D8u;
label_2af3d8:
    // 0x2af3d8: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2af3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2af3dc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2af3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2af3e0: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x2af3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x2af3e4: 0x3484feff  ori         $a0, $a0, 0xFEFF
    ctx->pc = 0x2af3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65279);
    // 0x2af3e8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af3ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af3f0: 0x3442fdff  ori         $v0, $v0, 0xFDFF
    ctx->pc = 0x2af3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
label_2af3f4:
    // 0x2af3f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2af3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2af3f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2af3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af3fc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2AF3FCu;
    {
        const bool branch_taken_0x2af3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3FCu;
        // 0x2af400: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3fc) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF404u;
label_2af404:
    // 0x2af404: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2af404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2af408: 0x24632470  addiu       $v1, $v1, 0x2470
    ctx->pc = 0x2af408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
    // 0x2af40c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2af40cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af410: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2af410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2af414: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2AF414u;
    {
        const bool branch_taken_0x2af414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF414u;
        // 0x2af418: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af414) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF41Cu;
label_2af41c:
    // 0x2af41c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2af41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2af420: 0x24632470  addiu       $v1, $v1, 0x2470
    ctx->pc = 0x2af420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
    // 0x2af424: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2af424u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af428: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2af428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2af42c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2AF42Cu;
    {
        const bool branch_taken_0x2af42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF42Cu;
        // 0x2af430: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af42c) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF434u;
label_2af434:
    // 0x2af434: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af438: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2af438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2af43c: 0x24030408  addiu       $v1, $zero, 0x408
    ctx->pc = 0x2af43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x2af440: 0x8c442480  lw          $a0, 0x2480($v0)
    ctx->pc = 0x2af440u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4C2480u));
    // 0x2af444: 0x65280a  movz        $a1, $v1, $a1
    ctx->pc = 0x2af444u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2af448: 0x10850037  beq         $a0, $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2AF448u;
    {
        const bool branch_taken_0x2af448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF448u;
        // 0x2af44c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af448) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF450u;
    // 0x2af450: 0x25092480  addiu       $t1, $t0, 0x2480
    ctx->pc = 0x2af450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 9344));
    // 0x2af454: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x2af454u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2af458: 0x252a0078  addiu       $t2, $t1, 0x78
    ctx->pc = 0x2af458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 120));
    // 0x2af45c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2af45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af460: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2af460u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af464: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2af464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af468: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2af468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2af46c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2af46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2af470:
    // 0x2af470: 0x104b0025  beq         $v0, $t3, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AF470u;
    {
        const bool branch_taken_0x2af470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        ctx->pc = 0x2AF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF470u;
        // 0x2af474: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af470) {
            ctx->pc = 0x2AF508u;
            goto label_2af508;
        }
    }
    ctx->pc = 0x2AF478u;
    // 0x2af478: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x2af478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2af47c: 0x2488000c  addiu       $t0, $a0, 0xC
    ctx->pc = 0x2af47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2af480: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x2af480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2af484: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2AF484u;
    {
        const bool branch_taken_0x2af484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF484u;
        // 0x2af488: 0x24c3000c  addiu       $v1, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af484) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF48Cu;
    // 0x2af48c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2af48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2af490: 0x1445fff7  bne         $v0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AF490u;
    {
        const bool branch_taken_0x2af490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF490u;
        // 0x2af494: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af490) {
            ctx->pc = 0x2AF470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af470;
        }
    }
    ctx->pc = 0x2AF498u;
    // 0x2af498: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2AF498u;
    {
        const bool branch_taken_0x2af498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF498u;
        // 0x2af49c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af498) {
            ctx->pc = 0x2AF52Cu;
            return;
        }
    }
    ctx->pc = 0x2AF4A0u;
label_2af4a0:
    // 0x2af4a0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af4a4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2af4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2af4a8: 0x24030408  addiu       $v1, $zero, 0x408
    ctx->pc = 0x2af4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x2af4ac: 0x8c442480  lw          $a0, 0x2480($v0)
    ctx->pc = 0x2af4acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4C2480u));
    // 0x2af4b0: 0x24472480  addiu       $a3, $v0, 0x2480
    ctx->pc = 0x2af4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x2af4b4: 0x65280a  movz        $a1, $v1, $a1
    ctx->pc = 0x2af4b4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2af4b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2af4b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4bc: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF4BCu;
    {
        const bool branch_taken_0x2af4bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4BCu;
        // 0x2af4c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4bc) {
            ctx->pc = 0x2AF4D0u;
            goto label_2af4d0;
        }
    }
    ctx->pc = 0x2AF4C4u;
    // 0x2af4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af4c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AF4C8u;
    {
        const bool branch_taken_0x2af4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4C8u;
        // 0x2af4cc: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4c8) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF4D0u;
label_2af4d0:
    // 0x2af4d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2af4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2af4d4:
    // 0x2af4d4: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x2af4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2af4d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AF4D8u;
    {
        const bool branch_taken_0x2af4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4D8u;
        // 0x2af4dc: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4d8) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF4E0u;
    // 0x2af4e0: 0x25072480  addiu       $a3, $t0, 0x2480
    ctx->pc = 0x2af4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 9344));
    // 0x2af4e4: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x2af4e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2af4e8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2af4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2af4ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af4f0: 0x1465fff8  bne         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AF4F0u;
    {
        const bool branch_taken_0x2af4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4F0u;
        // 0x2af4f4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4f0) {
            ctx->pc = 0x2AF4D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af4d4;
        }
    }
    ctx->pc = 0x2AF4F8u;
    // 0x2af4f8: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2af4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2af4fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af500: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF500u;
    {
        const bool branch_taken_0x2af500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF500u;
        // 0x2af504: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af500) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF508u;
label_2af508:
    // 0x2af508: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x2af508u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x2af50c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2af50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2af510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af514: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF514u;
    {
        const bool branch_taken_0x2af514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF514u;
        // 0x2af518: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af514) {
            ctx->pc = 0x2AF528u;
            return;
        }
    }
    ctx->pc = 0x2AF51Cu;
}
