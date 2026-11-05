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

// Function: sub_003258F0
// Address: 0x3258f0 - 0x325a90
void sub_003258F0_0x3258f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003258F0_0x3258f0");
#endif

    switch (ctx->pc) {
        case 0x325944u: goto label_325944;
        case 0x3259a8u: goto label_3259a8;
        case 0x3259b4u: goto label_3259b4;
        case 0x3259bcu: goto label_3259bc;
        case 0x3259ccu: goto label_3259cc;
        case 0x3259d8u: goto label_3259d8;
        case 0x3259e4u: goto label_3259e4;
        case 0x3259ecu: goto label_3259ec;
        case 0x3259fcu: goto label_3259fc;
        case 0x325a08u: goto label_325a08;
        case 0x325a14u: goto label_325a14;
        case 0x325a1cu: goto label_325a1c;
        case 0x325a2cu: goto label_325a2c;
        case 0x325a38u: goto label_325a38;
        case 0x325a44u: goto label_325a44;
        case 0x325a4cu: goto label_325a4c;
        case 0x325a5cu: goto label_325a5c;
        case 0x325a64u: goto label_325a64;
        case 0x325a78u: goto label_325a78;
        default: break;
    }

    ctx->pc = 0x3258f0u;

    // 0x3258f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3258f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3258f4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3258f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3258f8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x3258f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x3258fc: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x3258fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x325900: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325904: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x325904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x325908: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x325908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x32590c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32590cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325914: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x325914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x325918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32591c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x32591cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x325920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x325920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x325924: 0xace0be78  sw          $zero, -0x4188($a3)
    ctx->pc = 0x325924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE78u, _value); } while (0);
    // 0x325928: 0xad00be7c  sw          $zero, -0x4184($t0)
    ctx->pc = 0x325928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE7Cu, _value); } while (0);
    // 0x32592c: 0xad20be80  sw          $zero, -0x4180($t1)
    ctx->pc = 0x32592cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE80u, _value); } while (0);
    // 0x325930: 0xac60be44  sw          $zero, -0x41BC($v1)
    ctx->pc = 0x325930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE44u, _value); } while (0);
    // 0x325934: 0xaca0be5c  sw          $zero, -0x41A4($a1)
    ctx->pc = 0x325934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE5Cu, _value); } while (0);
    // 0x325938: 0xacc0be74  sw          $zero, -0x418C($a2)
    ctx->pc = 0x325938u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE74u, _value); } while (0);
    // 0x32593c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x32593Cu;
    SET_GPR_U32(ctx, 31, 0x325944u);
    ctx->pc = 0x325940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32593Cu;
    // 0x325940: 0xac40be38  sw          $zero, -0x41C8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950456), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x32593Cu, 0x325944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325944u;
label_325944:
    // 0x325944: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x325944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x325948: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x325948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x32594c: 0x24835af0  addiu       $v1, $a0, 0x5AF0
    ctx->pc = 0x32594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 23280));
    // 0x325950: 0xc4805af0  lwc1        $f0, 0x5AF0($a0)
    ctx->pc = 0x325950u;
    { uint32_t bits = FAST_READ32(0x575AF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325954: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x325954u;
    { uint32_t bits = FAST_READ32(0x575AF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x325958: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x325958u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x32595c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x32595cu;
    { uint32_t bits = FAST_READ32(0x575AF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325960: 0x26315ad0  addiu       $s1, $s1, 0x5AD0
    ctx->pc = 0x325960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23248));
    // 0x325964: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x325964u;
    { uint32_t bits = FAST_READ32(0x575AFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x325968: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x325968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32596c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x32596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x325970: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x325970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x325974: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x325974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x325978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32597c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x32597cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x325980: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x325980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x325984: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x325984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x325988: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x325988u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x32598c: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x32598cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x325990: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x325990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x325994: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x325994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x325998: 0xae02be4c  sw          $v0, -0x41B4($s0)
    ctx->pc = 0x325998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950476), GPR_U32(ctx, 2));
    // 0x32599c: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x32599cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3259a0: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x3259A0u;
    SET_GPR_U32(ctx, 31, 0x3259A8u);
    ctx->pc = 0x3259A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259A0u;
    // 0x3259a4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3259A0u, 0x3259A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259A8u;
label_3259a8:
    // 0x3259a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3259a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259ac: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3259ACu;
    SET_GPR_U32(ctx, 31, 0x3259B4u);
    ctx->pc = 0x3259B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259ACu;
    // 0x3259b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3259ACu, 0x3259B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259B4u;
label_3259b4:
    // 0x3259b4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3259B4u;
    SET_GPR_U32(ctx, 31, 0x3259BCu);
    ctx->pc = 0x3259B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259B4u;
    // 0x3259b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3259B4u, 0x3259BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259BCu;
label_3259bc:
    // 0x3259bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3259bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3259c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3259c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259c4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3259C4u;
    SET_GPR_U32(ctx, 31, 0x3259CCu);
    ctx->pc = 0x3259C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259C4u;
    // 0x3259c8: 0xac50be50  sw          $s0, -0x41B0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950480), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3259C4u, 0x3259CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259CCu;
label_3259cc:
    // 0x3259cc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3259ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3259d0: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x3259D0u;
    SET_GPR_U32(ctx, 31, 0x3259D8u);
    ctx->pc = 0x3259D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259D0u;
    // 0x3259d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3259D0u, 0x3259D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259D8u;
label_3259d8:
    // 0x3259d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3259d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259dc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3259DCu;
    SET_GPR_U32(ctx, 31, 0x3259E4u);
    ctx->pc = 0x3259E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259DCu;
    // 0x3259e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3259DCu, 0x3259E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259E4u;
label_3259e4:
    // 0x3259e4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3259E4u;
    SET_GPR_U32(ctx, 31, 0x3259ECu);
    ctx->pc = 0x3259E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259E4u;
    // 0x3259e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3259E4u, 0x3259ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259ECu;
label_3259ec:
    // 0x3259ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3259ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3259f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3259f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259f4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3259F4u;
    SET_GPR_U32(ctx, 31, 0x3259FCu);
    ctx->pc = 0x3259F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259F4u;
    // 0x3259f8: 0xac50be54  sw          $s0, -0x41AC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950484), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3259F4u, 0x3259FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259FCu;
label_3259fc:
    // 0x3259fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3259fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x325a00: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x325A00u;
    SET_GPR_U32(ctx, 31, 0x325A08u);
    ctx->pc = 0x325A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A00u;
    // 0x325a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x325A00u, 0x325A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A08u;
label_325a08:
    // 0x325a08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a0c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x325A0Cu;
    SET_GPR_U32(ctx, 31, 0x325A14u);
    ctx->pc = 0x325A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A0Cu;
    // 0x325a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x325A0Cu, 0x325A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A14u;
label_325a14:
    // 0x325a14: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x325A14u;
    SET_GPR_U32(ctx, 31, 0x325A1Cu);
    ctx->pc = 0x325A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A14u;
    // 0x325a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x325A14u, 0x325A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A1Cu;
label_325a1c:
    // 0x325a1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a24: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x325A24u;
    SET_GPR_U32(ctx, 31, 0x325A2Cu);
    ctx->pc = 0x325A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A24u;
    // 0x325a28: 0xac50be34  sw          $s0, -0x41CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950452), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x325A24u, 0x325A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A2Cu;
label_325a2c:
    // 0x325a2c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x325a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x325a30: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x325A30u;
    SET_GPR_U32(ctx, 31, 0x325A38u);
    ctx->pc = 0x325A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A30u;
    // 0x325a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x325A30u, 0x325A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A38u;
label_325a38:
    // 0x325a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a3c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x325A3Cu;
    SET_GPR_U32(ctx, 31, 0x325A44u);
    ctx->pc = 0x325A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A3Cu;
    // 0x325a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x325A3Cu, 0x325A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A44u;
label_325a44:
    // 0x325a44: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x325A44u;
    SET_GPR_U32(ctx, 31, 0x325A4Cu);
    ctx->pc = 0x325A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A44u;
    // 0x325a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x325A44u, 0x325A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A4Cu;
label_325a4c:
    // 0x325a4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x325a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x325a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a54: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x325A54u;
    SET_GPR_U32(ctx, 31, 0x325A5Cu);
    ctx->pc = 0x325A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A54u;
    // 0x325a58: 0xac502c64  sw          $s0, 0x2C64($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 11364), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x325A54u, 0x325A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A5Cu;
label_325a5c:
    // 0x325a5c: 0xc0c96a4  jal         func_325A90
    ctx->pc = 0x325A5Cu;
    SET_GPR_U32(ctx, 31, 0x325A64u);
    ctx->pc = 0x325A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A90u, 0x325A5Cu, 0x325A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A64u;
label_325a64:
    // 0x325a64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325a68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325a6c: 0xac40be84  sw          $zero, -0x417C($v0)
    ctx->pc = 0x325a6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE84u, _value); } while (0);
    // 0x325a70: 0xc0c9766  jal         func_325D98
    ctx->pc = 0x325A70u;
    SET_GPR_U32(ctx, 31, 0x325A78u);
    ctx->pc = 0x325A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325A70u;
    // 0x325a74: 0xac60be88  sw          $zero, -0x4178($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950536), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325D98u, 0x325A70u, 0x325A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A78u;
label_325a78:
    // 0x325a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x325a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325a84: 0x3e00008  jr          $ra
    ctx->pc = 0x325A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A84u;
        // 0x325a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325A8Cu;
    // 0x325a8c: 0x0  nop
    ctx->pc = 0x325a8cu;
    // NOP
    ctx->pc = 0x325a90u;
}
