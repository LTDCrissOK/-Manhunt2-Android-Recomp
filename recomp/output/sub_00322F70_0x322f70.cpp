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

// Function: sub_00322F70
// Address: 0x322f70 - 0x3243b8
void sub_00322F70_0x322f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322F70_0x322f70");
#endif

    switch (ctx->pc) {
        case 0x322ff4u: goto label_322ff4;
        case 0x323004u: goto label_323004;
        case 0x323034u: goto label_323034;
        case 0x323044u: goto label_323044;
        case 0x3230fcu: goto label_3230fc;
        case 0x323104u: goto label_323104;
        case 0x323198u: goto label_323198;
        case 0x3231c0u: goto label_3231c0;
        case 0x323208u: goto label_323208;
        case 0x323220u: goto label_323220;
        case 0x32359cu: goto label_32359c;
        case 0x3235bcu: goto label_3235bc;
        case 0x3235d4u: goto label_3235d4;
        case 0x323630u: goto label_323630;
        case 0x3236c8u: goto label_3236c8;
        case 0x3236f4u: goto label_3236f4;
        case 0x323ab8u: goto label_323ab8;
        case 0x323ba8u: goto label_323ba8;
        case 0x323bb0u: goto label_323bb0;
        case 0x323bd0u: goto label_323bd0;
        case 0x323c68u: goto label_323c68;
        case 0x323c74u: goto label_323c74;
        case 0x323f68u: goto label_323f68;
        case 0x323fa4u: goto label_323fa4;
        case 0x3240f4u: goto label_3240f4;
        case 0x3241f8u: goto label_3241f8;
        case 0x324200u: goto label_324200;
        case 0x324208u: goto label_324208;
        case 0x324238u: goto label_324238;
        case 0x324268u: goto label_324268;
        case 0x3242f0u: goto label_3242f0;
        case 0x324328u: goto label_324328;
        default: break;
    }

    ctx->pc = 0x322f70u;

    // 0x322f70: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x322f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x322f74: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x322f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    // 0x322f78: 0xffb10298  sd          $s1, 0x298($sp)
    ctx->pc = 0x322f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 17));
    // 0x322f7c: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x322f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
    // 0x322f80: 0xffb302a8  sd          $s3, 0x2A8($sp)
    ctx->pc = 0x322f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 19));
    // 0x322f84: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x322f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
    // 0x322f88: 0xffb502b8  sd          $s5, 0x2B8($sp)
    ctx->pc = 0x322f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 21));
    // 0x322f8c: 0xffb602c0  sd          $s6, 0x2C0($sp)
    ctx->pc = 0x322f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 22));
    // 0x322f90: 0xffb702c8  sd          $s7, 0x2C8($sp)
    ctx->pc = 0x322f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 23));
    // 0x322f94: 0xffbe02d0  sd          $fp, 0x2D0($sp)
    ctx->pc = 0x322f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 30));
    // 0x322f98: 0xffbf02d8  sd          $ra, 0x2D8($sp)
    ctx->pc = 0x322f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 31));
    // 0x322f9c: 0xe7bc0320  swc1        $f28, 0x320($sp)
    ctx->pc = 0x322f9cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x322fa0: 0xe7bb0318  swc1        $f27, 0x318($sp)
    ctx->pc = 0x322fa0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x322fa4: 0xe7ba0310  swc1        $f26, 0x310($sp)
    ctx->pc = 0x322fa4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x322fa8: 0xe7b90308  swc1        $f25, 0x308($sp)
    ctx->pc = 0x322fa8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x322fac: 0xe7b80300  swc1        $f24, 0x300($sp)
    ctx->pc = 0x322facu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x322fb0: 0xe7b702f8  swc1        $f23, 0x2F8($sp)
    ctx->pc = 0x322fb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x322fb4: 0xe7b602f0  swc1        $f22, 0x2F0($sp)
    ctx->pc = 0x322fb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x322fb8: 0xe7b502e8  swc1        $f21, 0x2E8($sp)
    ctx->pc = 0x322fb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x322fbc: 0xe7b402e0  swc1        $f20, 0x2E0($sp)
    ctx->pc = 0x322fbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x322fc0: 0xafa40238  sw          $a0, 0x238($sp)
    ctx->pc = 0x322fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 4));
    // 0x322fc4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x322fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x322fc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x322fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322fcc: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x322fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x322fd0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x322fd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x322fd4: 0x106004e2  beqz        $v1, . + 4 + (0x4E2 << 2)
    ctx->pc = 0x322FD4u;
    {
        const bool branch_taken_0x322fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FD4u;
        // 0x322fd8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322fd4) {
            ctx->pc = 0x324360u;
            goto label_324360;
        }
    }
    ctx->pc = 0x322FDCu;
    // 0x322fdc: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x322fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x322fe0: 0xa460be18  sh          $zero, -0x41E8($v1)
    ctx->pc = 0x322fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950424), (uint16_t)GPR_U32(ctx, 0));
    // 0x322fe4: 0x8e22bd48  lw          $v0, -0x42B8($s1)
    ctx->pc = 0x322fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x322fe8: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x322fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x322fec: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x322FECu;
    SET_GPR_U32(ctx, 31, 0x322FF4u);
    ctx->pc = 0x322FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FECu;
    // 0x322ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x322FECu, 0x322FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FF4u;
label_322ff4:
    // 0x322ff4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x322FF4u;
    {
        const bool branch_taken_0x322ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ff4) {
            ctx->pc = 0x322FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322FF4u;
            // 0x322ff8: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x323008u;
            goto label_323008;
        }
    }
    ctx->pc = 0x322FFCu;
    // 0x322ffc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x322FFCu;
    SET_GPR_U32(ctx, 31, 0x323004u);
    ctx->pc = 0x323000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FFCu;
    // 0x323000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x322FFCu, 0x323004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323004u;
label_323004:
    // 0x323004: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x323004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_323008:
    // 0x323008: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x323008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x32300c: 0x8e23bd48  lw          $v1, -0x42B8($s1)
    ctx->pc = 0x32300cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
    // 0x323010: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x323010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x323014: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x323014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323018: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x323018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x32301c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x32301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323020: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x323020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x323024: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x323024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x323028: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x323028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x32302c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x32302Cu;
    SET_GPR_U32(ctx, 31, 0x323034u);
    ctx->pc = 0x323030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32302Cu;
    // 0x323030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x32302Cu, 0x323034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323034u;
label_323034:
    // 0x323034: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x323034u;
    {
        const bool branch_taken_0x323034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323034) {
            ctx->pc = 0x323038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323034u;
            // 0x323038: 0xc60000a0  lwc1        $f0, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x323048u;
            goto label_323048;
        }
    }
    ctx->pc = 0x32303Cu;
    // 0x32303c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x32303Cu;
    SET_GPR_U32(ctx, 31, 0x323044u);
    ctx->pc = 0x323040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32303Cu;
    // 0x323040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x32303Cu, 0x323044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323044u;
label_323044:
    // 0x323044: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x323044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_323048:
    // 0x323048: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x323048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x32304c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x32304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x323050: 0x24435b40  addiu       $v1, $v0, 0x5B40
    ctx->pc = 0x323050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x323054: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x323054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x323058: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x323058u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32305c: 0xc4435b40  lwc1        $f3, 0x5B40($v0)
    ctx->pc = 0x32305cu;
    { uint32_t bits = FAST_READ32(0x575B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323060: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x323060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x323064: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x323064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x323068: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x323068u;
    { uint32_t bits = FAST_READ32(0x575B48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32306c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x32306cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x323070: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x323070u;
    { uint32_t bits = FAST_READ32(0x575B44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323074: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x323074u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x323078: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x323078u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32307c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x32307cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x323080: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x323080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x323084: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x323084u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x323088: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x323088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32308c: 0x46011942  mul.s       $f5, $f3, $f1
    ctx->pc = 0x32308cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x323090: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x323090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x323094: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x323094u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x323098: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x323098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x32309c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x32309cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3230a0: 0xc7b4001c  lwc1        $f20, 0x1C($sp)
    ctx->pc = 0x3230a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3230a4: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x3230a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3230a8: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x3230a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3230ac: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3230acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3230b0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x3230b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3230b4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3230b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3230b8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3230b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3230bc: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3230bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3230c0: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x3230c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3230c4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3230c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3230c8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x3230c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3230cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3230ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3230d0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3230d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3230d4: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x3230d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3230d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3230d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3230dc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x3230dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3230e0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x3230e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3230e4: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x3230e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3230e8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x3230e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3230ec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3230ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3230f0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3230f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3230f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3230F4u;
    SET_GPR_U32(ctx, 31, 0x3230FCu);
    ctx->pc = 0x3230F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230F4u;
    // 0x3230f8: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3230F4u, 0x3230FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3230FCu;
label_3230fc:
    // 0x3230fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3230FCu;
    SET_GPR_U32(ctx, 31, 0x323104u);
    ctx->pc = 0x323100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230FCu;
    // 0x323100: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3230FCu, 0x323104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323104u;
label_323104:
    // 0x323104: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x323104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323108: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x323108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x32310c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x32310cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323110: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x323110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x323114: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x323114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x323118: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x323118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x32311c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x32311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x323120: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x323120u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x323124: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x323124u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323128: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323128u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32312c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x32312cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323130: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x323130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323134: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x323134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323138: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x323138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32313c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x32313cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x323140: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x323140u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x323144: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x323144u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x323148: 0x0  nop
    ctx->pc = 0x323148u;
    // NOP
    // 0x32314c: 0x0  nop
    ctx->pc = 0x32314cu;
    // NOP
    // 0x323150: 0x46000044  c1          0x44
    ctx->pc = 0x323150u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x323154: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x323154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x323158: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x323158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32315c: 0x0  nop
    ctx->pc = 0x32315cu;
    // NOP
    // 0x323160: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x323160u;
    {
        const bool branch_taken_0x323160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323160u;
        // 0x323164: 0xe7a100b0  swc1        $f1, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x323160) {
            ctx->pc = 0x32318Cu;
            goto label_32318c;
        }
    }
    ctx->pc = 0x323168u;
    // 0x323168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x323168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32316c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32316cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323170: 0x0  nop
    ctx->pc = 0x323170u;
    // NOP
    // 0x323174: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x323174u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x323178: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x323178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32317c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x32317cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x323180: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x323180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x323184: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x323184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323188: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x323188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_32318c:
    // 0x32318c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323190: 0xc0c6ace  jal         func_31AB38
    ctx->pc = 0x323190u;
    SET_GPR_U32(ctx, 31, 0x323198u);
    ctx->pc = 0x323194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323190u;
    // 0x323194: 0xafa0023c  sw          $zero, 0x23C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB38u, 0x323190u, 0x323198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323198u;
label_323198:
    // 0x323198: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x323198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32319c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x32319cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x3231a0: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x3231a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x3231a4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x3231a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3231a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3231a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3231ac: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x3231acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x3231b0: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x3231b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x3231b4: 0x126000f4  beqz        $s3, . + 4 + (0xF4 << 2)
    ctx->pc = 0x3231B4u;
    {
        const bool branch_taken_0x3231b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231B4u;
        // 0x3231b8: 0x8fa6023c  lw          $a2, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231b4) {
            ctx->pc = 0x323588u;
            goto label_323588;
        }
    }
    ctx->pc = 0x3231BCu;
    // 0x3231bc: 0x967e000c  lhu         $fp, 0xC($s3)
    ctx->pc = 0x3231bcu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_3231c0:
    // 0x3231c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3231c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3231c4: 0x8fa60240  lw          $a2, 0x240($sp)
    ctx->pc = 0x3231c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x3231c8: 0x3c21004  sllv        $v0, $v0, $fp
    ctx->pc = 0x3231c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 30) & 0x1F));
    // 0x3231cc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3231ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3231d0: 0x504000ea  beql        $v0, $zero, . + 4 + (0xEA << 2)
    ctx->pc = 0x3231D0u;
    {
        const bool branch_taken_0x3231d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3231d0) {
            ctx->pc = 0x3231D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3231D0u;
            // 0x3231d4: 0x8e730004  lw          $s3, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32357Cu;
            goto label_32357c;
        }
    }
    ctx->pc = 0x3231D8u;
    // 0x3231d8: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x3231d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x3231dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3231dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231e0: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x3231e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3231e4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3231e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3231e8: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x3231E8u;
    {
        const bool branch_taken_0x3231e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231E8u;
        // 0x3231ec: 0xa7a300c0  sh          $v1, 0xC0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231e8) {
            ctx->pc = 0x323578u;
            goto label_323578;
        }
    }
    ctx->pc = 0x3231F0u;
    // 0x3231f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3231f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231f4: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x3231f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3231f8: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x3231f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3231fc: 0x24b40030  addiu       $s4, $a1, 0x30
    ctx->pc = 0x3231fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x323200: 0x24b00010  addiu       $s0, $a1, 0x10
    ctx->pc = 0x323200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x323204: 0x0  nop
    ctx->pc = 0x323204u;
    // NOP
label_323208:
    // 0x323208: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x323208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x32320c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x32320cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x323210: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x323210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x323214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323218: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x323218u;
    SET_GPR_U32(ctx, 31, 0x323220u);
    ctx->pc = 0x32321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323218u;
    // 0x32321c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x323218u, 0x323220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323220u;
label_323220:
    // 0x323220: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x323220u;
    {
        const bool branch_taken_0x323220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323220u;
        // 0x323224: 0x97a200c0  lhu         $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323220) {
            ctx->pc = 0x323560u;
            goto label_323560;
        }
    }
    ctx->pc = 0x323228u;
    // 0x323228: 0xc600fff0  lwc1        $f0, -0x10($s0)
    ctx->pc = 0x323228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32322c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x32322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x323230: 0xc601fff4  lwc1        $f1, -0xC($s0)
    ctx->pc = 0x323230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323234: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x323234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x323238: 0xc600fff8  lwc1        $f0, -0x8($s0)
    ctx->pc = 0x323238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32323c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x32323cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x323240: 0xc601fffc  lwc1        $f1, -0x4($s0)
    ctx->pc = 0x323240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323244: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x323244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x323248: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x323248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32324c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x32324cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323250: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323254: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x323254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323258: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x323258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32325c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x32325cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x323260: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x323260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323264: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x323264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323268: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x323268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32326c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x32326cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x323270: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x323270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x323274: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x323274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x323278: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x323278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x32327c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x32327cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x323280: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x323280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x323284: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323288: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x323288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32328c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x32328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323290: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x323290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x323294: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x323294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323298: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x323298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32329c: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x32329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3232a0: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x3232a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3232a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3232a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3232a8: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x3232a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3232ac: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x3232acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3232b0: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x3232b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3232b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3232b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3232b8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x3232b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3232bc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3232bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3232c0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x3232c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3232c4: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x3232c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3232c8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3232c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3232cc: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x3232ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3232d0: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x3232d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3232d4: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x3232d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3232d8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3232d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3232dc: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x3232dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3232e0: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x3232e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3232e4: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x3232e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x3232e8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3232e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3232ec: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3232ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3232f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3232f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3232f4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3232f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3232f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3232f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3232fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3232fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x323300: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x323300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323304: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x323304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323308: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x323308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32330c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x32330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323310: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x323310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323314: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x323314u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323318: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x323318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32331c: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x32331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323320: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x323320u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x323324: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x323324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323328: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x323328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32332c: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x32332cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323330: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x323330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323334: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x323334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323338: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x323338u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x32333c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x32333cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323340: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x323340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323344: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x323344u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x323348: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x323348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32334c: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x32334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323350: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x323350u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323354: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x323354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x323358: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x323358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32335c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x32335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323360: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x323360u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323364: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x323364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323368: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x323368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32336c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x32336cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x323370: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x323370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323374: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x323374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323378: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x323378u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x32337c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x32337cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323380: 0x0  nop
    ctx->pc = 0x323380u;
    // NOP
    // 0x323384: 0x45020076  bc1fl       . + 4 + (0x76 << 2)
    ctx->pc = 0x323384u;
    {
        const bool branch_taken_0x323384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x323384) {
            ctx->pc = 0x323388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323384u;
            // 0x323388: 0x97a200c0  lhu         $v0, 0xC0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323560u;
            goto label_323560;
        }
    }
    ctx->pc = 0x32338Cu;
    // 0x32338c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x32338cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323390: 0x0  nop
    ctx->pc = 0x323390u;
    // NOP
    // 0x323394: 0x45020072  bc1fl       . + 4 + (0x72 << 2)
    ctx->pc = 0x323394u;
    {
        const bool branch_taken_0x323394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x323394) {
            ctx->pc = 0x323398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323394u;
            // 0x323398: 0x97a200c0  lhu         $v0, 0xC0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323560u;
            goto label_323560;
        }
    }
    ctx->pc = 0x32339Cu;
    // 0x32339c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32339cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3233a0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3233a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3233a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3233a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3233a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3233a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3233ac: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x3233acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3233b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3233b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3233b4: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x3233b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3233b8: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x3233b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3233bc: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x3233bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3233c0: 0xc7a5012c  lwc1        $f5, 0x12C($sp)
    ctx->pc = 0x3233c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3233c4: 0xc7a40128  lwc1        $f4, 0x128($sp)
    ctx->pc = 0x3233c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3233c8: 0x46020182  mul.s       $f6, $f0, $f2
    ctx->pc = 0x3233c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3233cc: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x3233ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3233d0: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x3233d0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3233d4: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x3233d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x3233d8: 0x460500c2  mul.s       $f3, $f0, $f5
    ctx->pc = 0x3233d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3233dc: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x3233dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x3233e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3233e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3233e4: 0xe7a60104  swc1        $f6, 0x104($sp)
    ctx->pc = 0x3233e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3233e8: 0xe7a70100  swc1        $f7, 0x100($sp)
    ctx->pc = 0x3233e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3233ec: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x3233ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x3233f0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x3233f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3233f4: 0xe7a5011c  swc1        $f5, 0x11C($sp)
    ctx->pc = 0x3233f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x3233f8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x3233f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3233fc: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x3233fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x323400: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323404: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x323404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323408: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x323408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32340c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x32340cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323410: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x323410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323414: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x323414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323418: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x323418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32341c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x32341cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x323420: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x323420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x323424: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x323424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x323428: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x323428u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x32342c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x32342cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323430: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x323430u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323434: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323438: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x323438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32343c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x32343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323440: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x323440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323444: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x323444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323448: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x323448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32344c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x32344cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x323450: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x323450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x323454: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x323454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x323458: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x323458u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x32345c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x32345cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x323460: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x323460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323464: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x323464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323468: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x323468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32346c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x32346cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323470: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x323470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323474: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x323474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323478: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x323478u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x32347c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x32347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323480: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x323480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323484: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x323484u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323488: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x323488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32348c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x32348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323490: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x323490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x323494: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x323494u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x323498: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x323498u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x32349c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x32349cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3234a0: 0x0  nop
    ctx->pc = 0x3234a0u;
    // NOP
    // 0x3234a4: 0x0  nop
    ctx->pc = 0x3234a4u;
    // NOP
    // 0x3234a8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3234a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3234ac: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3234acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3234b0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3234b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3234b4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3234b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3234b8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3234b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3234bc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3234bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3234c0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3234c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3234c4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3234c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3234c8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x3234c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3234cc: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x3234ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3234d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3234d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3234d4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3234d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3234d8: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x3234d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3234dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3234dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3234e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3234e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3234e4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3234e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3234e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3234e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3234ec: 0x0  nop
    ctx->pc = 0x3234ecu;
    // NOP
    // 0x3234f0: 0x0  nop
    ctx->pc = 0x3234f0u;
    // NOP
    // 0x3234f4: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x3234f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x3234f8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3234f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3234fc: 0x0  nop
    ctx->pc = 0x3234fcu;
    // NOP
    // 0x323500: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x323500u;
    {
        const bool branch_taken_0x323500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323500u;
        // 0x323504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323500) {
            ctx->pc = 0x323544u;
            goto label_323544;
        }
    }
    ctx->pc = 0x323508u;
    // 0x323508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x323508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32350c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32350cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323510: 0x0  nop
    ctx->pc = 0x323510u;
    // NOP
    // 0x323514: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x323514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323518: 0x0  nop
    ctx->pc = 0x323518u;
    // NOP
    // 0x32351c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x32351Cu;
    {
        const bool branch_taken_0x32351c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32351c) {
            ctx->pc = 0x323544u;
            goto label_323544;
        }
    }
    ctx->pc = 0x323524u;
    // 0x323524: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x323524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323528: 0x0  nop
    ctx->pc = 0x323528u;
    // NOP
    // 0x32352c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x32352Cu;
    {
        const bool branch_taken_0x32352c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32352c) {
            ctx->pc = 0x323544u;
            goto label_323544;
        }
    }
    ctx->pc = 0x323534u;
    // 0x323534: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x323534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323538: 0x0  nop
    ctx->pc = 0x323538u;
    // NOP
    // 0x32353c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x32353Cu;
    {
        const bool branch_taken_0x32353c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32353c) {
            ctx->pc = 0x323540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32353Cu;
            // 0x323540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323544u;
            goto label_323544;
        }
    }
    ctx->pc = 0x323544u;
label_323544:
    // 0x323544: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323544u;
    {
        const bool branch_taken_0x323544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323544u;
        // 0x323548: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323544) {
            ctx->pc = 0x32355Cu;
            goto label_32355c;
        }
    }
    ctx->pc = 0x32354Cu;
    // 0x32354c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323550: 0xac7ebe14  sw          $fp, -0x41EC($v1)
    ctx->pc = 0x323550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950420), GPR_U32(ctx, 30));
    // 0x323554: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x323554u;
    {
        const bool branch_taken_0x323554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323554u;
        // 0x323558: 0xafa4023c  sw          $a0, 0x23C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323554) {
            ctx->pc = 0x323578u;
            goto label_323578;
        }
    }
    ctx->pc = 0x32355Cu;
label_32355c:
    // 0x32355c: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x32355cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_323560:
    // 0x323560: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x323560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x323564: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x323564u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x323568: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x323568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32356c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x32356cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x323570: 0x1440ff25  bnez        $v0, . + 4 + (-0xDB << 2)
    ctx->pc = 0x323570u;
    {
        const bool branch_taken_0x323570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323570u;
        // 0x323574: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323570) {
            ctx->pc = 0x323208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323208;
        }
    }
    ctx->pc = 0x323578u;
label_323578:
    // 0x323578: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x323578u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_32357c:
    // 0x32357c: 0x5660ff10  bnel        $s3, $zero, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x32357Cu;
    {
        const bool branch_taken_0x32357c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x32357c) {
            ctx->pc = 0x323580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32357Cu;
            // 0x323580: 0x967e000c  lhu         $fp, 0xC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3231C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3231c0;
        }
    }
    ctx->pc = 0x323584u;
    // 0x323584: 0x8fa6023c  lw          $a2, 0x23C($sp)
    ctx->pc = 0x323584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_323588:
    // 0x323588: 0x14c00018  bnez        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x323588u;
    {
        const bool branch_taken_0x323588 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x32358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323588u;
        // 0x32358c: 0x8fa30238  lw          $v1, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323588) {
            ctx->pc = 0x3235ECu;
            goto label_3235ec;
        }
    }
    ctx->pc = 0x323590u;
    // 0x323590: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x323590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x323594: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x323594u;
    SET_GPR_U32(ctx, 31, 0x32359Cu);
    ctx->pc = 0x323598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323594u;
    // 0x323598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x323594u, 0x32359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32359Cu;
label_32359c:
    // 0x32359c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x32359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3235a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3235a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3235a4: 0xa3a2011c  sb          $v0, 0x11C($sp)
    ctx->pc = 0x3235a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x3235a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3235a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235ac: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x3235acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x3235b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3235b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3235b4: 0xc077824  jal         func_1DE090
    ctx->pc = 0x3235B4u;
    SET_GPR_U32(ctx, 31, 0x3235BCu);
    ctx->pc = 0x3235B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235B4u;
    // 0x3235b8: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x3235B4u, 0x3235BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235BCu;
label_3235bc:
    // 0x3235bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3235BCu;
    {
        const bool branch_taken_0x3235bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3235C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235BCu;
        // 0x3235c0: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235bc) {
            ctx->pc = 0x3235DCu;
            goto label_3235dc;
        }
    }
    ctx->pc = 0x3235C4u;
    // 0x3235c4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3235c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3235c8: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x3235c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x3235cc: 0xc0c8b96  jal         func_322E58
    ctx->pc = 0x3235CCu;
    SET_GPR_U32(ctx, 31, 0x3235D4u);
    ctx->pc = 0x3235D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235CCu;
    // 0x3235d0: 0xace0be14  sw          $zero, -0x41EC($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294950420), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E58u, 0x3235CCu, 0x3235D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235D4u;
label_3235d4:
    // 0x3235d4: 0x10000363  b           . + 4 + (0x363 << 2)
    ctx->pc = 0x3235D4u;
    {
        const bool branch_taken_0x3235d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235D4u;
        // 0x3235d8: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235d4) {
            ctx->pc = 0x324364u;
            goto label_324364;
        }
    }
    ctx->pc = 0x3235DCu;
label_3235dc:
    // 0x3235dc: 0x9443004c  lhu         $v1, 0x4C($v0)
    ctx->pc = 0x3235dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3235e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3235e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3235e4: 0xac43be14  sw          $v1, -0x41EC($v0)
    ctx->pc = 0x3235e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBE14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE14u, _value); } while (0);
    // 0x3235e8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x3235e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_3235ec:
    // 0x3235ec: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3235ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3235f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3235f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3235f4: 0x8c650038  lw          $a1, 0x38($v1)
    ctx->pc = 0x3235f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x3235f8: 0xafa00248  sw          $zero, 0x248($sp)
    ctx->pc = 0x3235f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 0));
    // 0x3235fc: 0x8cc3be14  lw          $v1, -0x41EC($a2)
    ctx->pc = 0x3235fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE14u));
    // 0x323600: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x323600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x323604: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x323604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x323608: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x323608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x32360c: 0xafa40244  sw          $a0, 0x244($sp)
    ctx->pc = 0x32360cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 4));
    // 0x323610: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x323610u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x323614: 0x10a0032e  beqz        $a1, . + 4 + (0x32E << 2)
    ctx->pc = 0x323614u;
    {
        const bool branch_taken_0x323614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x323618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323614u;
        // 0x323618: 0xafa5024c  sw          $a1, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323614) {
            ctx->pc = 0x3242D0u;
            goto label_3242d0;
        }
    }
    ctx->pc = 0x32361Cu;
    // 0x32361c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x32361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x323620: 0x27a70210  addiu       $a3, $sp, 0x210
    ctx->pc = 0x323620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x323624: 0xafa7026c  sw          $a3, 0x26C($sp)
    ctx->pc = 0x323624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 7));
    // 0x323628: 0xc45a4744  lwc1        $f26, 0x4744($v0)
    ctx->pc = 0x323628u;
    { uint32_t bits = FAST_READ32(0x474744u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x32362c: 0x0  nop
    ctx->pc = 0x32362cu;
    // NOP
label_323630:
    // 0x323630: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x323630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x323634: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x323634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x323638: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x323638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x32363c: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x32363cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x323640: 0x8c62be14  lw          $v0, -0x41EC($v1)
    ctx->pc = 0x323640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBE14u));
    // 0x323644: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x323644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x323648: 0x1482031e  bne         $a0, $v0, . + 4 + (0x31E << 2)
    ctx->pc = 0x323648u;
    {
        const bool branch_taken_0x323648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323648u;
        // 0x32364c: 0x8fa6024c  lw          $a2, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323648) {
            ctx->pc = 0x3242C4u;
            goto label_3242c4;
        }
    }
    ctx->pc = 0x323650u;
    // 0x323650: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x323650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x323654: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x323654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
    // 0x323658: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x323658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32365c: 0xa7a20130  sh          $v0, 0x130($sp)
    ctx->pc = 0x32365cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x323660: 0xafa70254  sw          $a3, 0x254($sp)
    ctx->pc = 0x323660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 7));
    // 0x323664: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x323664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x323668: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x323668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x32366c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x323670: 0x10600313  beqz        $v1, . + 4 + (0x313 << 2)
    ctx->pc = 0x323670u;
    {
        const bool branch_taken_0x323670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x323674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323670u;
        // 0x323674: 0xa7a20130  sh          $v0, 0x130($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323670) {
            ctx->pc = 0x3242C0u;
            goto label_3242c0;
        }
    }
    ctx->pc = 0x323678u;
    // 0x323678: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x323678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x32367c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x32367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x323680: 0xc4594740  lwc1        $f25, 0x4740($v0)
    ctx->pc = 0x323680u;
    { uint32_t bits = FAST_READ32(0x474740u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x323684: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x323684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x323688: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x323688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x32368c: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x32368cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x323690: 0x24a70030  addiu       $a3, $a1, 0x30
    ctx->pc = 0x323690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x323694: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x323694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x323698: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x323698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
    // 0x32369c: 0x24be0010  addiu       $fp, $a1, 0x10
    ctx->pc = 0x32369cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3236a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3236a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3236a4: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x3236a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x3236a8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x3236a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x3236ac: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x3236acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x3236b0: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3236b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x3236b4: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x3236b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x3236b8: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x3236b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
    // 0x3236bc: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x3236bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
    // 0x3236c0: 0xafa60278  sw          $a2, 0x278($sp)
    ctx->pc = 0x3236c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 6));
    // 0x3236c4: 0xafa7027c  sw          $a3, 0x27C($sp)
    ctx->pc = 0x3236c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 7));
label_3236c8:
    // 0x3236c8: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x3236c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x3236cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3236ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236d0: 0x8fa30254  lw          $v1, 0x254($sp)
    ctx->pc = 0x3236d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x3236d4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x3236d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x3236d8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3236d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x3236dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3236dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3236e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3236e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3236e4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3236e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3236e8: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x3236e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x3236ec: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x3236ECu;
    SET_GPR_U32(ctx, 31, 0x3236F4u);
    ctx->pc = 0x3236F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3236ECu;
    // 0x3236f0: 0xafa2025c  sw          $v0, 0x25C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x3236ECu, 0x3236F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236F4u;
label_3236f4:
    // 0x3236f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3236F4u;
    {
        const bool branch_taken_0x3236f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3236F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236F4u;
        // 0x3236f8: 0x8fa7025c  lw          $a3, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236f4) {
            ctx->pc = 0x323720u;
            goto label_323720;
        }
    }
    ctx->pc = 0x3236FCu;
    // 0x3236fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3236fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323700: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x323700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x323704: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x323704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x323708: 0xe61004  sllv        $v0, $a2, $a3
    ctx->pc = 0x323708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x32370c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32370cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x323710: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x323710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x323714: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x323714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x323718: 0x100002d9  b           . + 4 + (0x2D9 << 2)
    ctx->pc = 0x323718u;
    {
        const bool branch_taken_0x323718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323718u;
        // 0x32371c: 0xafa40244  sw          $a0, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323718) {
            ctx->pc = 0x324280u;
            goto label_324280;
        }
    }
    ctx->pc = 0x323720u;
label_323720:
    // 0x323720: 0xc7c0fff0  lwc1        $f0, -0x10($fp)
    ctx->pc = 0x323720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323724: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x323724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x323728: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x323728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x32372c: 0xc7c1fff4  lwc1        $f1, -0xC($fp)
    ctx->pc = 0x32372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323730: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x323730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x323734: 0xc7c0fff8  lwc1        $f0, -0x8($fp)
    ctx->pc = 0x323734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323738: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x323738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x32373c: 0xc7c1fffc  lwc1        $f1, -0x4($fp)
    ctx->pc = 0x32373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323740: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x323740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x323744: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x323744u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x323748: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x323748u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32374c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x32374cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323750: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x323750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323754: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x323754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323758: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x323758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32375c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x32375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323760: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x323760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323764: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x323764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323768: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x323768u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x32376c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x323770: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x323770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x323774: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x323774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x323778: 0x8fa7027c  lw          $a3, 0x27C($sp)
    ctx->pc = 0x323778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x32377c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x32377cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x323780: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x323780u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x323784: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323784u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323788: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x323788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32378c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x32378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323790: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x323790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323794: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x323794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323798: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x323798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32379c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x32379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3237a0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x3237a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3237a4: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x3237a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3237a8: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x3237a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3237ac: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x3237acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x3237b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3237b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3237b4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3237b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3237b8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3237b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3237bc: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x3237bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3237c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3237c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3237c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3237c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3237c8: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x3237c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3237cc: 0xc7a50104  lwc1        $f5, 0x104($sp)
    ctx->pc = 0x3237ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3237d0: 0xc7a60108  lwc1        $f6, 0x108($sp)
    ctx->pc = 0x3237d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3237d4: 0x460009c2  mul.s       $f7, $f1, $f0
    ctx->pc = 0x3237d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3237d8: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x3237d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3237dc: 0x460028c2  mul.s       $f3, $f5, $f0
    ctx->pc = 0x3237dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3237e0: 0x46003102  mul.s       $f4, $f6, $f0
    ctx->pc = 0x3237e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3237e4: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x3237e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3237e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3237e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3237ec: 0xe7a700e0  swc1        $f7, 0xE0($sp)
    ctx->pc = 0x3237ecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3237f0: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x3237f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3237f4: 0xe7a400e8  swc1        $f4, 0xE8($sp)
    ctx->pc = 0x3237f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3237f8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x3237f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x3237fc: 0xe7a500f4  swc1        $f5, 0xF4($sp)
    ctx->pc = 0x3237fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x323800: 0xe7a600f8  swc1        $f6, 0xF8($sp)
    ctx->pc = 0x323800u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x323804: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x323804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x323808: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x323808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x32380c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x32380cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323810: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x323810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x323814: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323818: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x323818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32381c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x32381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323820: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x323820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x323824: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x323824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323828: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x323828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32382c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x32382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323830: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x323830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323834: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x323834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x323838: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x323838u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x32383c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x32383cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x323840: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x323840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x323844: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x323844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x323848: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x323848u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32384c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x32384cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x323850: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x323850u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323854: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x323854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323858: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x323858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32385c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x32385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323860: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x323860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323864: 0xc7a5011c  lwc1        $f5, 0x11C($sp)
    ctx->pc = 0x323864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x323868: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x323868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x32386c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x32386cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x323870: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x323870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x323874: 0xe7a5010c  swc1        $f5, 0x10C($sp)
    ctx->pc = 0x323874u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x323878: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x323878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x32387c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x32387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323880: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x323880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323884: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x323884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x323888: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x323888u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x32388c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x32388cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x323890: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x323890u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x323894: 0x46000004  c1          0x4
    ctx->pc = 0x323894u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x323898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x323898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32389c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x32389cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3238a0: 0x0  nop
    ctx->pc = 0x3238a0u;
    // NOP
    // 0x3238a4: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x3238a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x3238a8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3238a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3238ac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3238acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3238b0: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3238b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3238b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3238b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3238b8: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x3238b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3238bc: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x3238bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3238c0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3238c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3238c4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3238c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3238c8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3238c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3238cc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3238ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3238d0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3238d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3238d4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3238d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3238d8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3238d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3238dc: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x3238dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3238e0: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x3238e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3238e4: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x3238e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x3238e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3238e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3238ec: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x3238ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x3238f0: 0x831004  sllv        $v0, $v1, $a0
    ctx->pc = 0x3238f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3238f4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3238f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3238f8: 0x14400261  bnez        $v0, . + 4 + (0x261 << 2)
    ctx->pc = 0x3238F8u;
    {
        const bool branch_taken_0x3238f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3238FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238F8u;
        // 0x3238fc: 0x27b300e0  addiu       $s3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3238f8) {
            ctx->pc = 0x324280u;
            goto label_324280;
        }
    }
    ctx->pc = 0x323900u;
    // 0x323900: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x323900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x323904: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x323904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323908: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x323908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32390c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x32390cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323910: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x323910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323914: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x323914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323918: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x323918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32391c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x32391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323920: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x323920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323924: 0xc7a4012c  lwc1        $f4, 0x12C($sp)
    ctx->pc = 0x323924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x323928: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x323928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x32392c: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x32392cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x323930: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x323930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x323934: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x323934u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x323938: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x323938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32393c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x32393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323940: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x323940u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323944: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x323944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323948: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x323948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32394c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x32394cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x323950: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x323950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323954: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x323954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323958: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x323958u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x32395c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32395cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323960: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x323960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323964: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x323964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323968: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x323968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32396c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x32396cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x323970: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x323970u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x323974: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x323974u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x323978: 0x0  nop
    ctx->pc = 0x323978u;
    // NOP
    // 0x32397c: 0x0  nop
    ctx->pc = 0x32397cu;
    // NOP
    // 0x323980: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x323980u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x323984: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x323984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x323988: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x323988u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x32398c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x32398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323990: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x323990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323994: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x323994u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323998: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x323998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32399c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x32399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3239a0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3239a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3239a4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3239a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3239a8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3239a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3239ac: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3239acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3239b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3239b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239b4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3239b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3239b8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3239b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3239bc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3239bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3239c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3239c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3239c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3239c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3239c8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3239c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3239cc: 0x0  nop
    ctx->pc = 0x3239ccu;
    // NOP
    // 0x3239d0: 0x0  nop
    ctx->pc = 0x3239d0u;
    // NOP
    // 0x3239d4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3239d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3239d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3239d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3239dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3239e0: 0x0  nop
    ctx->pc = 0x3239e0u;
    // NOP
    // 0x3239e4: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x3239e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3239e8: 0x0  nop
    ctx->pc = 0x3239e8u;
    // NOP
    // 0x3239ec: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3239ECu;
    {
        const bool branch_taken_0x3239ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3239F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239ECu;
        // 0x3239f0: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239ec) {
            ctx->pc = 0x323A24u;
            goto label_323a24;
        }
    }
    ctx->pc = 0x3239F4u;
    // 0x3239f4: 0x4606a834  c.lt.s      $f21, $f6
    ctx->pc = 0x3239f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3239f8: 0x0  nop
    ctx->pc = 0x3239f8u;
    // NOP
    // 0x3239fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3239FCu;
    {
        const bool branch_taken_0x3239fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3239fc) {
            ctx->pc = 0x323A24u;
            goto label_323a24;
        }
    }
    ctx->pc = 0x323A04u;
    // 0x323a04: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x323a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323a08: 0x0  nop
    ctx->pc = 0x323a08u;
    // NOP
    // 0x323a0c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x323A0Cu;
    {
        const bool branch_taken_0x323a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x323a0c) {
            ctx->pc = 0x323A24u;
            goto label_323a24;
        }
    }
    ctx->pc = 0x323A14u;
    // 0x323a14: 0x4606a034  c.lt.s      $f20, $f6
    ctx->pc = 0x323a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323a18: 0x0  nop
    ctx->pc = 0x323a18u;
    // NOP
    // 0x323a1c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x323A1Cu;
    {
        const bool branch_taken_0x323a1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x323a1c) {
            ctx->pc = 0x323A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323A1Cu;
            // 0x323a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323A24u;
            goto label_323a24;
        }
    }
    ctx->pc = 0x323A24u;
label_323a24:
    // 0x323a24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x323A24u;
    {
        const bool branch_taken_0x323a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323a24) {
            ctx->pc = 0x323A70u;
            goto label_323a70;
        }
    }
    ctx->pc = 0x323A2Cu;
    // 0x323a2c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x323a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x323a30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x323a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x323a34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x323a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323a38: 0x0  nop
    ctx->pc = 0x323a38u;
    // NOP
    // 0x323a3c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x323a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323a40: 0x0  nop
    ctx->pc = 0x323a40u;
    // NOP
    // 0x323a44: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x323A44u;
    {
        const bool branch_taken_0x323a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A44u;
        // 0x323a48: 0x8fa3025c  lw          $v1, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a44) {
            ctx->pc = 0x323A70u;
            goto label_323a70;
        }
    }
    ctx->pc = 0x323A4Cu;
    // 0x323a4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x323a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323a50: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x323a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x323a54: 0x8fa60244  lw          $a2, 0x244($sp)
    ctx->pc = 0x323a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x323a58: 0x671004  sllv        $v0, $a3, $v1
    ctx->pc = 0x323a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x323a5c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x323a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x323a60: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x323a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x323a64: 0xafa40248  sw          $a0, 0x248($sp)
    ctx->pc = 0x323a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 4));
    // 0x323a68: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x323A68u;
    {
        const bool branch_taken_0x323a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A68u;
        // 0x323a6c: 0xafa60244  sw          $a2, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a68) {
            ctx->pc = 0x324280u;
            goto label_324280;
        }
    }
    ctx->pc = 0x323A70u;
label_323a70:
    // 0x323a70: 0x4605c034  c.lt.s      $f24, $f5
    ctx->pc = 0x323a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323a74: 0x0  nop
    ctx->pc = 0x323a74u;
    // NOP
    // 0x323a78: 0x45000201  bc1f        . + 4 + (0x201 << 2)
    ctx->pc = 0x323A78u;
    {
        const bool branch_taken_0x323a78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A78u;
        // 0x323a7c: 0x27a20120  addiu       $v0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a78) {
            ctx->pc = 0x324280u;
            goto label_324280;
        }
    }
    ctx->pc = 0x323A80u;
    // 0x323a80: 0xe7b90120  swc1        $f25, 0x120($sp)
    ctx->pc = 0x323a80u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x323a84: 0xe4590008  swc1        $f25, 0x8($v0)
    ctx->pc = 0x323a84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x323a88: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x323a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x323a8c: 0xe4590004  swc1        $f25, 0x4($v0)
    ctx->pc = 0x323a8cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x323a90: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x323a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x323a94: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x323a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x323a98: 0x27b10150  addiu       $s1, $sp, 0x150
    ctx->pc = 0x323a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x323a9c: 0xe7ba0140  swc1        $f26, 0x140($sp)
    ctx->pc = 0x323a9cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x323aa0: 0x27b20234  addiu       $s2, $sp, 0x234
    ctx->pc = 0x323aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x323aa4: 0xe47a0008  swc1        $f26, 0x8($v1)
    ctx->pc = 0x323aa4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x323aa8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x323aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x323aac: 0xe47a0004  swc1        $f26, 0x4($v1)
    ctx->pc = 0x323aacu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x323ab0: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x323ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x323ab4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x323ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_323ab8:
    // 0x323ab8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x323ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323abc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x323abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323ac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x323ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323ac4: 0x0  nop
    ctx->pc = 0x323ac4u;
    // NOP
    // 0x323ac8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x323AC8u;
    {
        const bool branch_taken_0x323ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AC8u;
        // 0x323acc: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ac8) {
            ctx->pc = 0x323AD4u;
            goto label_323ad4;
        }
    }
    ctx->pc = 0x323AD0u;
    // 0x323ad0: 0x460009c6  mov.s       $f7, $f1
    ctx->pc = 0x323ad0u;
    ctx->f[7] = FPU_MOV_S(ctx->f[1]);
label_323ad4:
    // 0x323ad4: 0xe7a70120  swc1        $f7, 0x120($sp)
    ctx->pc = 0x323ad4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x323ad8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x323ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323adc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x323adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323ae0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x323ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323ae4: 0x0  nop
    ctx->pc = 0x323ae4u;
    // NOP
    // 0x323ae8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x323AE8u;
    {
        const bool branch_taken_0x323ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AE8u;
        // 0x323aec: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ae8) {
            ctx->pc = 0x323AF4u;
            goto label_323af4;
        }
    }
    ctx->pc = 0x323AF0u;
    // 0x323af0: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x323af0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
label_323af4:
    // 0x323af4: 0xe7a60124  swc1        $f6, 0x124($sp)
    ctx->pc = 0x323af4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x323af8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x323af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323afc: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x323afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323b00: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x323b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323b04: 0x0  nop
    ctx->pc = 0x323b04u;
    // NOP
    // 0x323b08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x323B08u;
    {
        const bool branch_taken_0x323b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B08u;
        // 0x323b0c: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b08) {
            ctx->pc = 0x323B14u;
            goto label_323b14;
        }
    }
    ctx->pc = 0x323B10u;
    // 0x323b10: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x323b10u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_323b14:
    // 0x323b14: 0xe7a50128  swc1        $f5, 0x128($sp)
    ctx->pc = 0x323b14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x323b18: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x323b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323b1c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x323b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323b20: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x323b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323b24: 0x0  nop
    ctx->pc = 0x323b24u;
    // NOP
    // 0x323b28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x323B28u;
    {
        const bool branch_taken_0x323b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B28u;
        // 0x323b2c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b28) {
            ctx->pc = 0x323B34u;
            goto label_323b34;
        }
    }
    ctx->pc = 0x323B30u;
    // 0x323b30: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x323b30u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_323b34:
    // 0x323b34: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x323b34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x323b38: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x323b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323b3c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x323b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323b40: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x323b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323b44: 0x0  nop
    ctx->pc = 0x323b44u;
    // NOP
    // 0x323b48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x323B48u;
    {
        const bool branch_taken_0x323b48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B48u;
        // 0x323b4c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b48) {
            ctx->pc = 0x323B54u;
            goto label_323b54;
        }
    }
    ctx->pc = 0x323B50u;
    // 0x323b50: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x323b50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_323b54:
    // 0x323b54: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x323b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x323b58: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x323b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323b5c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x323b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323b60: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x323b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323b64: 0x0  nop
    ctx->pc = 0x323b64u;
    // NOP
    // 0x323b68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x323B68u;
    {
        const bool branch_taken_0x323b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B68u;
        // 0x323b6c: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b68) {
            ctx->pc = 0x323B74u;
            goto label_323b74;
        }
    }
    ctx->pc = 0x323B70u;
    // 0x323b70: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x323b70u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_323b74:
    // 0x323b74: 0xe7a40148  swc1        $f4, 0x148($sp)
    ctx->pc = 0x323b74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x323b78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x323b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x323b7c: 0x461ffce  bgez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x323B7Cu;
    {
        const bool branch_taken_0x323b7c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x323B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B7Cu;
        // 0x323b80: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b7c) {
            ctx->pc = 0x323AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323ab8;
        }
    }
    ctx->pc = 0x323B84u;
    // 0x323b84: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x323b84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x323b88: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x323b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x323b8c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x323b8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x323b90: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x323b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x323b94: 0x46052001  sub.s       $f0, $f4, $f5
    ctx->pc = 0x323b94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x323b98: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x323b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x323b9c: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x323b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x323ba0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x323BA0u;
    SET_GPR_U32(ctx, 31, 0x323BA8u);
    ctx->pc = 0x323BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BA0u;
    // 0x323ba4: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x323BA0u, 0x323BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BA8u;
label_323ba8:
    // 0x323ba8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x323BA8u;
    SET_GPR_U32(ctx, 31, 0x323BB0u);
    ctx->pc = 0x323BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BA8u;
    // 0x323bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x323BA8u, 0x323BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BB0u;
label_323bb0:
    // 0x323bb0: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x323bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x323bb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x323bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x323bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x323bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bc0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x323bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bc4: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x323bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x323bc8: 0xc077044  jal         func_1DC110
    ctx->pc = 0x323BC8u;
    SET_GPR_U32(ctx, 31, 0x323BD0u);
    ctx->pc = 0x323BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BC8u;
    // 0x323bcc: 0x24446830  addiu       $a0, $v0, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC110u, 0x323BC8u, 0x323BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BD0u;
label_323bd0:
    // 0x323bd0: 0x104001ac  beqz        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x323BD0u;
    {
        const bool branch_taken_0x323bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BD0u;
        // 0x323bd4: 0x8fa60258  lw          $a2, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323bd0) {
            ctx->pc = 0x324284u;
            goto label_324284;
        }
    }
    ctx->pc = 0x323BD8u;
    // 0x323bd8: 0x4618b034  c.lt.s      $f22, $f24
    ctx->pc = 0x323bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323bdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x323bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x323be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x323be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323be4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x323BE4u;
    {
        const bool branch_taken_0x323be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x323be4) {
            ctx->pc = 0x323BF8u;
            goto label_323bf8;
        }
    }
    ctx->pc = 0x323BECu;
    // 0x323bec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x323becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x323bf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x323BF0u;
    {
        const bool branch_taken_0x323bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323bf0) {
            ctx->pc = 0x323C08u;
            goto label_323c08;
        }
    }
    ctx->pc = 0x323BF8u;
label_323bf8:
    // 0x323bf8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x323bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323bfc: 0x0  nop
    ctx->pc = 0x323bfcu;
    // NOP
    // 0x323c00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x323C00u;
    {
        const bool branch_taken_0x323c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x323c00) {
            ctx->pc = 0x323C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323C00u;
            // 0x323c04: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x323C08u;
            goto label_323c08;
        }
    }
    ctx->pc = 0x323C08u;
label_323c08:
    // 0x323c08: 0x4618b834  c.lt.s      $f23, $f24
    ctx->pc = 0x323c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323c0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x323c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x323c10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x323c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323c14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x323C14u;
    {
        const bool branch_taken_0x323c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C14u;
        // 0x323c18: 0x27a301f0  addiu       $v1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c14) {
            ctx->pc = 0x323C28u;
            goto label_323c28;
        }
    }
    ctx->pc = 0x323C1Cu;
    // 0x323c1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x323c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x323c20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x323C20u;
    {
        const bool branch_taken_0x323c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C20u;
        // 0x323c24: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c20) {
            ctx->pc = 0x323C40u;
            goto label_323c40;
        }
    }
    ctx->pc = 0x323C28u;
label_323c28:
    // 0x323c28: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x323c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323c2c: 0x0  nop
    ctx->pc = 0x323c2cu;
    // NOP
    // 0x323c30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x323C30u;
    {
        const bool branch_taken_0x323c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x323c30) {
            ctx->pc = 0x323C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323C30u;
            // 0x323c34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x323C38u;
            goto label_323c38;
        }
    }
    ctx->pc = 0x323C38u;
label_323c38:
    // 0x323c38: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x323c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x323c3c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x323c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_323c40:
    // 0x323c40: 0x27b001a0  addiu       $s0, $sp, 0x1A0
    ctx->pc = 0x323c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x323c44: 0xafa30270  sw          $v1, 0x270($sp)
    ctx->pc = 0x323c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 3));
    // 0x323c48: 0xafa40274  sw          $a0, 0x274($sp)
    ctx->pc = 0x323c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
    // 0x323c4c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x323c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323c50: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x323c50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c54: 0x27b301e0  addiu       $s3, $sp, 0x1E0
    ctx->pc = 0x323c54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x323c58: 0x27b501b0  addiu       $s5, $sp, 0x1B0
    ctx->pc = 0x323c58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x323c5c: 0x27b401c0  addiu       $s4, $sp, 0x1C0
    ctx->pc = 0x323c5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x323c60: 0x27b601d0  addiu       $s6, $sp, 0x1D0
    ctx->pc = 0x323c60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x323c64: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x323c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_323c68:
    // 0x323c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x323C6Cu;
    SET_GPR_U32(ctx, 31, 0x323C74u);
    ctx->pc = 0x323C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C6Cu;
    // 0x323c70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x323C6Cu, 0x323C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C74u;
label_323c74:
    // 0x323c74: 0x0  nop
    ctx->pc = 0x323c74u;
    // NOP
    // 0x323c78: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x323C78u;
    {
        const bool branch_taken_0x323c78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x323C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C78u;
        // 0x323c7c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c78) {
            ctx->pc = 0x323C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323c68;
        }
    }
    ctx->pc = 0x323C80u;
    // 0x323c80: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x323c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323c84: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x323c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323c88: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x323c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323c8c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x323c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x323c90: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x323c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323c94: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x323c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x323c98: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x323c98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x323c9c: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x323c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x323ca0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x323ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x323ca4: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x323ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x323ca8: 0xe7a201f4  swc1        $f2, 0x1F4($sp)
    ctx->pc = 0x323ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x323cac: 0xe7a301f8  swc1        $f3, 0x1F8($sp)
    ctx->pc = 0x323cacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x323cb0: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x323cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x323cb4: 0x8fa70270  lw          $a3, 0x270($sp)
    ctx->pc = 0x323cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x323cb8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x323cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x323cbc: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x323cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x323cc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323cc4: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x323cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323cc8: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x323cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323ccc: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x323cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323cd0: 0xc7a20208  lwc1        $f2, 0x208($sp)
    ctx->pc = 0x323cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323cd4: 0xc7a3020c  lwc1        $f3, 0x20C($sp)
    ctx->pc = 0x323cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323cd8: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x323cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x323cdc: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x323cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x323ce0: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x323ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x323ce4: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x323ce4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x323ce8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x323ce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323cec: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x323cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323cf0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x323cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x323cf4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x323cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x323cf8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x323cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323cfc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323d00: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x323d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323d04: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x323d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323d08: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x323d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323d0c: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x323d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323d10: 0xc7a301fc  lwc1        $f3, 0x1FC($sp)
    ctx->pc = 0x323d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323d14: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x323d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x323d18: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x323d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x323d1c: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x323d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x323d20: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x323d20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x323d24: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x323d24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323d28: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x323d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323d2c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x323d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323d30: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x323d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323d34: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x323d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323d38: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x323d38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x323d3c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x323d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323d40: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x323d40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x323d44: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x323d44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x323d48: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x323d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x323d4c: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x323d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x323d50: 0xe7a201f4  swc1        $f2, 0x1F4($sp)
    ctx->pc = 0x323d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x323d54: 0xe7a301f8  swc1        $f3, 0x1F8($sp)
    ctx->pc = 0x323d54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x323d58: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x323d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x323d5c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x323d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x323d60: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x323d60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x323d64: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323d68: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x323d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323d6c: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x323d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323d70: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x323d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323d74: 0xc7a20208  lwc1        $f2, 0x208($sp)
    ctx->pc = 0x323d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323d78: 0xc7a3020c  lwc1        $f3, 0x20C($sp)
    ctx->pc = 0x323d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323d7c: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x323d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x323d80: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x323d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x323d84: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x323d84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x323d88: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x323d88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x323d8c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x323d8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323d90: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x323d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323d94: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x323d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x323d98: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x323d98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x323d9c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x323d9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x323da0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323da4: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x323da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323da8: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x323da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323dac: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x323dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323db0: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x323db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323db4: 0xc7a301fc  lwc1        $f3, 0x1FC($sp)
    ctx->pc = 0x323db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323db8: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x323db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x323dbc: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x323dbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x323dc0: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x323dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x323dc4: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x323dc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x323dc8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x323dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323dcc: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x323dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323dd0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x323dd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x323dd4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x323dd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323dd8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323dd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323ddc: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x323ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323de0: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x323de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323de4: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x323de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323de8: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x323de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323dec: 0xc7a301fc  lwc1        $f3, 0x1FC($sp)
    ctx->pc = 0x323decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323df0: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x323df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x323df4: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x323df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x323df8: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x323df8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x323dfc: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x323dfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x323e00: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x323e00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323e04: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x323e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323e08: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x323e08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x323e0c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x323e0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323e10: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x323e10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323e14: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x323e14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323e18: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x323e18u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x323e1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x323e1cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x323e20: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x323e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323e24: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x323e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323e28: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x323e28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x323e2c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x323e2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323e30: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323e30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323e34: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x323e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323e38: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x323e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323e3c: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x323e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323e40: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x323e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323e44: 0xc7a301fc  lwc1        $f3, 0x1FC($sp)
    ctx->pc = 0x323e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323e48: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x323e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x323e4c: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x323e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x323e50: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x323e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x323e54: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x323e54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x323e58: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x323e58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323e5c: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x323e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323e60: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x323e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x323e64: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x323e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323e68: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x323e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323e6c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x323e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323e70: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x323e70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x323e74: 0x4a0003bf  vwaitq
    ctx->pc = 0x323e74u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x323e78: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x323e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323e7c: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x323e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323e80: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x323e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x323e84: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x323e84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323e88: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323e88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323e8c: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x323e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323e90: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x323e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323e94: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x323e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323e98: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x323e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323e9c: 0xc7a301fc  lwc1        $f3, 0x1FC($sp)
    ctx->pc = 0x323e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323ea0: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x323ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x323ea4: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x323ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x323ea8: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x323ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x323eac: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x323eacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x323eb0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x323eb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323eb4: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x323eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323eb8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x323eb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x323ebc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x323ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323ec0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x323ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323ec4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x323ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323ec8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x323ec8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x323ecc: 0x4a0003bf  vwaitq
    ctx->pc = 0x323eccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x323ed0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x323ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323ed4: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x323ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323ed8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x323ed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x323edc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x323edcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323ee0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323ee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323ee4: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x323ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323ee8: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x323ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323eec: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x323eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323ef0: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x323ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323ef4: 0xc7a301fc  lwc1        $f3, 0x1FC($sp)
    ctx->pc = 0x323ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323ef8: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x323ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x323efc: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x323efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x323f00: 0xe7a201e8  swc1        $f2, 0x1E8($sp)
    ctx->pc = 0x323f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x323f04: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x323f04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x323f08: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x323f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323f0c: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x323f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323f10: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x323f10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x323f14: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x323f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323f18: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x323f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323f1c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x323f1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x323f20: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x323f20u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x323f24: 0x4a0003bf  vwaitq
    ctx->pc = 0x323f24u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x323f28: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x323f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323f2c: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x323f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323f30: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x323f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323f34: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x323f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323f38: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x323f38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323f3c: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x323f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323f40: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x323f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323f44: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x323f44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x323f48: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x323f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323f4c: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x323f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323f50: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x323f50u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323f54: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x323f54u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x323f58: 0x460ce301  sub.s       $f12, $f28, $f12
    ctx->pc = 0x323f58u;
    ctx->f[12] = FPU_SUB_S(ctx->f[28], ctx->f[12]);
    // 0x323f5c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x323f5cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x323f60: 0xc0e404c  jal         func_390130
    ctx->pc = 0x323F60u;
    SET_GPR_U32(ctx, 31, 0x323F68u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x323F60u, 0x323F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F68u;
label_323f68:
    // 0x323f68: 0x461b0542  mul.s       $f21, $f0, $f27
    ctx->pc = 0x323f68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x323f6c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x323f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323f70: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x323f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323f74: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x323f74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323f78: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x323f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323f7c: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x323f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323f80: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x323f80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x323f84: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x323f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323f88: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x323f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x323f8c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x323f8cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x323f90: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x323f90u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x323f94: 0x460ce301  sub.s       $f12, $f28, $f12
    ctx->pc = 0x323f94u;
    ctx->f[12] = FPU_SUB_S(ctx->f[28], ctx->f[12]);
    // 0x323f98: 0x460c0304  c1          0xC0304
    ctx->pc = 0x323f98u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x323f9c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x323F9Cu;
    SET_GPR_U32(ctx, 31, 0x323FA4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x323F9Cu, 0x323FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FA4u;
label_323fa4:
    // 0x323fa4: 0x461b0502  mul.s       $f20, $f0, $f27
    ctx->pc = 0x323fa4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x323fa8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x323fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x323fac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x323facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x323fb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x323fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323fb4: 0x0  nop
    ctx->pc = 0x323fb4u;
    // NOP
    // 0x323fb8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x323fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323fbc: 0x0  nop
    ctx->pc = 0x323fbcu;
    // NOP
    // 0x323fc0: 0x450000a6  bc1f        . + 4 + (0xA6 << 2)
    ctx->pc = 0x323FC0u;
    {
        const bool branch_taken_0x323fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FC0u;
        // 0x323fc4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323fc0) {
            ctx->pc = 0x32425Cu;
            goto label_32425c;
        }
    }
    ctx->pc = 0x323FC8u;
    // 0x323fc8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x323fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x323fcc: 0x0  nop
    ctx->pc = 0x323fccu;
    // NOP
    // 0x323fd0: 0x450000a2  bc1f        . + 4 + (0xA2 << 2)
    ctx->pc = 0x323FD0u;
    {
        const bool branch_taken_0x323fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x323FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FD0u;
        // 0x323fd4: 0x8fa6025c  lw          $a2, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323fd0) {
            ctx->pc = 0x32425Cu;
            goto label_32425c;
        }
    }
    ctx->pc = 0x323FD8u;
    // 0x323fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x323fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323fdc: 0x8fa70244  lw          $a3, 0x244($sp)
    ctx->pc = 0x323fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x323fe0: 0xc41004  sllv        $v0, $a0, $a2
    ctx->pc = 0x323fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x323fe4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x323fe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x323fe8: 0xafa70244  sw          $a3, 0x244($sp)
    ctx->pc = 0x323fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 7));
    // 0x323fec: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x323fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x323ff0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x323ff0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x323ff4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x323ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x323ff8: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x323ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x323ffc: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x323ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324000: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x324000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324004: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x324004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324008: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x324008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32400c: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x32400cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x324010: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x324010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x324014: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x324014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x324018: 0xe7a3021c  swc1        $f3, 0x21C($sp)
    ctx->pc = 0x324018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x32401c: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x32401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x324020: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x324020u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324024: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x324024u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x324028: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x324028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32402c: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x32402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x324030: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x324030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324034: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x324034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324038: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x324038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32403c: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x32403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324040: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x324040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x324044: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x324044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x324048: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x324048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x32404c: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x32404cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x324050: 0x8fa30274  lw          $v1, 0x274($sp)
    ctx->pc = 0x324050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x324054: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x324054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324058: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x324058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x32405c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x32405cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x324060: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x324060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x324064: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x324064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x324068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x324068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32406c: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x32406cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324070: 0xc7a50224  lwc1        $f5, 0x224($sp)
    ctx->pc = 0x324070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x324074: 0xc7a60228  lwc1        $f6, 0x228($sp)
    ctx->pc = 0x324074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x324078: 0x460009c2  mul.s       $f7, $f1, $f0
    ctx->pc = 0x324078u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32407c: 0xc7a2022c  lwc1        $f2, 0x22C($sp)
    ctx->pc = 0x32407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324080: 0x460028c2  mul.s       $f3, $f5, $f0
    ctx->pc = 0x324080u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x324084: 0x46003102  mul.s       $f4, $f6, $f0
    ctx->pc = 0x324084u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x324088: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x324088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x32408c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x32408cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x324090: 0xe7a701e0  swc1        $f7, 0x1E0($sp)
    ctx->pc = 0x324090u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x324094: 0xe7a301e4  swc1        $f3, 0x1E4($sp)
    ctx->pc = 0x324094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x324098: 0xe7a401e8  swc1        $f4, 0x1E8($sp)
    ctx->pc = 0x324098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x32409c: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x32409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x3240a0: 0xe7a501f4  swc1        $f5, 0x1F4($sp)
    ctx->pc = 0x3240a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x3240a4: 0xe7a601f8  swc1        $f6, 0x1F8($sp)
    ctx->pc = 0x3240a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x3240a8: 0xe7a201fc  swc1        $f2, 0x1FC($sp)
    ctx->pc = 0x3240a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x3240ac: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3240acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3240b0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3240b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3240b4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3240b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3240b8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3240b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3240bc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3240bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3240c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3240c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3240c4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3240c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3240c8: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x3240c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3240cc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3240ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3240d0: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x3240d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3240d4: 0x9490be18  lhu         $s0, -0x41E8($a0)
    ctx->pc = 0x3240d4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)FAST_READ16(0x3FBE18u));
    // 0x3240d8: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3240d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3240dc: 0x244249e0  addiu       $v0, $v0, 0x49E0
    ctx->pc = 0x3240dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18912));
    // 0x3240e0: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x3240e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x3240e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3240e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3240e8: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x3240e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3240ec: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3240ECu;
    SET_GPR_U32(ctx, 31, 0x3240F4u);
    ctx->pc = 0x3240F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3240ECu;
    // 0x3240f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3240ECu, 0x3240F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3240F4u;
label_3240f4:
    // 0x3240f4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3240f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3240f8: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x3240f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3240fc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3240fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x324100: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x324100u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x324104: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x324104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x324108: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x324108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32410c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32410cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x324110: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x324110u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x324114: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x324114u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x324118: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x324118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32411c: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x32411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324120: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x324120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324124: 0xc7a20208  lwc1        $f2, 0x208($sp)
    ctx->pc = 0x324124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324128: 0xc7a3020c  lwc1        $f3, 0x20C($sp)
    ctx->pc = 0x324128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32412c: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x32412cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x324130: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x324130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x324134: 0xe7a201f8  swc1        $f2, 0x1F8($sp)
    ctx->pc = 0x324134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x324138: 0xe7a301fc  swc1        $f3, 0x1FC($sp)
    ctx->pc = 0x324138u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x32413c: 0x8fa70270  lw          $a3, 0x270($sp)
    ctx->pc = 0x32413cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x324140: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x324140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x324144: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x324144u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x324148: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x324148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32414c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x32414cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x324150: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x324150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x324154: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x324154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x324158: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x324158u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x32415c: 0x4a0003bf  vwaitq
    ctx->pc = 0x32415cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x324160: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x324160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x324164: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x324164u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x324168: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x324168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32416c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32416cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x324170: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x324170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x324174: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x324174u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x324178: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x324178u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32417c: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x32417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x324180: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x324180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324184: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x324184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324188: 0xc7a20208  lwc1        $f2, 0x208($sp)
    ctx->pc = 0x324188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32418c: 0xc7a3020c  lwc1        $f3, 0x20C($sp)
    ctx->pc = 0x32418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324190: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x324190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x324194: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x324194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x324198: 0xe7a201f8  swc1        $f2, 0x1F8($sp)
    ctx->pc = 0x324198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x32419c: 0xe7a301fc  swc1        $f3, 0x1FC($sp)
    ctx->pc = 0x32419cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x3241a0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x3241a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3241a4: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x3241a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3241a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3241a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3241ac: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3241acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3241b0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3241b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3241b4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3241b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3241b8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3241b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3241bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3241bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3241c0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3241c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3241c4: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x3241c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3241c8: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x3241c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x3241cc: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x3241ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3241d0: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x3241d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x3241d4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3241d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3241d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3241d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3241dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3241dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3241e0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3241e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3241e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3241e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3241e8: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x3241e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x3241ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3241ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3241f0: 0xc076e86  jal         func_1DBA18
    ctx->pc = 0x3241F0u;
    SET_GPR_U32(ctx, 31, 0x3241F8u);
    ctx->pc = 0x3241F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3241F0u;
    // 0x3241f4: 0xae320050  sw          $s2, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBA18u, 0x3241F0u, 0x3241F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3241F8u;
label_3241f8:
    // 0x3241f8: 0xc076f7c  jal         func_1DBDF0
    ctx->pc = 0x3241F8u;
    SET_GPR_U32(ctx, 31, 0x324200u);
    ctx->pc = 0x3241FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3241F8u;
    // 0x3241fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDF0u, 0x3241F8u, 0x324200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324200u;
label_324200:
    // 0x324200: 0xc076e6e  jal         func_1DB9B8
    ctx->pc = 0x324200u;
    SET_GPR_U32(ctx, 31, 0x324208u);
    ctx->pc = 0x324204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324200u;
    // 0x324204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB9B8u, 0x324200u, 0x324208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324208u;
label_324208:
    // 0x324208: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x324208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32420c: 0x9482be18  lhu         $v0, -0x41E8($a0)
    ctx->pc = 0x32420cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x3FBE18u));
    // 0x324210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324214: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324218: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x324218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x32421c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32421Cu;
    {
        const bool branch_taken_0x32421c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32421Cu;
        // 0x324220: 0xa482be18  sh          $v0, -0x41E8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294950424), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32421c) {
            ctx->pc = 0x324258u;
            goto label_324258;
        }
    }
    ctx->pc = 0x324224u;
    // 0x324224: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x324224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324228: 0x12e2004d  beq         $s7, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x324228u;
    {
        const bool branch_taken_0x324228 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x32422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324228u;
        // 0x32422c: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324228) {
            ctx->pc = 0x324360u;
            goto label_324360;
        }
    }
    ctx->pc = 0x324230u;
    // 0x324230: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x324230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x324234: 0x0  nop
    ctx->pc = 0x324234u;
    // NOP
label_324238:
    // 0x324238: 0x0  nop
    ctx->pc = 0x324238u;
    // NOP
    // 0x32423c: 0x0  nop
    ctx->pc = 0x32423cu;
    // NOP
    // 0x324240: 0x0  nop
    ctx->pc = 0x324240u;
    // NOP
    // 0x324244: 0x0  nop
    ctx->pc = 0x324244u;
    // NOP
    // 0x324248: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x324248u;
    {
        const bool branch_taken_0x324248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324248u;
        // 0x32424c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324248) {
            ctx->pc = 0x324238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324238;
        }
    }
    ctx->pc = 0x324250u;
    // 0x324250: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x324250u;
    {
        const bool branch_taken_0x324250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324250u;
        // 0x324254: 0xdfb00290  ld          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324250) {
            ctx->pc = 0x324364u;
            goto label_324364;
        }
    }
    ctx->pc = 0x324258u;
label_324258:
    // 0x324258: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x324258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32425c:
    // 0x32425c: 0x12e20008  beq         $s7, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32425Cu;
    {
        const bool branch_taken_0x32425c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x324260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32425Cu;
        // 0x324260: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32425c) {
            ctx->pc = 0x324280u;
            goto label_324280;
        }
    }
    ctx->pc = 0x324264u;
    // 0x324264: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x324264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_324268:
    // 0x324268: 0x0  nop
    ctx->pc = 0x324268u;
    // NOP
    // 0x32426c: 0x0  nop
    ctx->pc = 0x32426cu;
    // NOP
    // 0x324270: 0x0  nop
    ctx->pc = 0x324270u;
    // NOP
    // 0x324274: 0x0  nop
    ctx->pc = 0x324274u;
    // NOP
    // 0x324278: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x324278u;
    {
        const bool branch_taken_0x324278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324278u;
        // 0x32427c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324278) {
            ctx->pc = 0x324268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324268;
        }
    }
    ctx->pc = 0x324280u;
label_324280:
    // 0x324280: 0x8fa60258  lw          $a2, 0x258($sp)
    ctx->pc = 0x324280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_324284:
    // 0x324284: 0x27de0040  addiu       $fp, $fp, 0x40
    ctx->pc = 0x324284u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x324288: 0x8fa70278  lw          $a3, 0x278($sp)
    ctx->pc = 0x324288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x32428c: 0x8fa3027c  lw          $v1, 0x27C($sp)
    ctx->pc = 0x32428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x324290: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x324290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x324294: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x324294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x324298: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x324298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x32429c: 0x97a20130  lhu         $v0, 0x130($sp)
    ctx->pc = 0x32429cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3242a0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3242a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3242a4: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x3242a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3242a8: 0xafa60258  sw          $a2, 0x258($sp)
    ctx->pc = 0x3242a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 6));
    // 0x3242ac: 0xafa70278  sw          $a3, 0x278($sp)
    ctx->pc = 0x3242acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 7));
    // 0x3242b0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3242b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3242b4: 0xafa3027c  sw          $v1, 0x27C($sp)
    ctx->pc = 0x3242b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 3));
    // 0x3242b8: 0x1440fd03  bnez        $v0, . + 4 + (-0x2FD << 2)
    ctx->pc = 0x3242B8u;
    {
        const bool branch_taken_0x3242b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3242BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242B8u;
        // 0x3242bc: 0xafa40280  sw          $a0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242b8) {
            ctx->pc = 0x3236C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3236c8;
        }
    }
    ctx->pc = 0x3242C0u;
label_3242c0:
    // 0x3242c0: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x3242c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_3242c4:
    // 0x3242c4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3242c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3242c8: 0x14c0fcd9  bnez        $a2, . + 4 + (-0x327 << 2)
    ctx->pc = 0x3242C8u;
    {
        const bool branch_taken_0x3242c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3242CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242C8u;
        // 0x3242cc: 0xafa6024c  sw          $a2, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242c8) {
            ctx->pc = 0x323630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323630;
        }
    }
    ctx->pc = 0x3242D0u;
label_3242d0:
    // 0x3242d0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3242d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3242d4: 0x94e3be18  lhu         $v1, -0x41E8($a3)
    ctx->pc = 0x3242d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3FBE18u));
    // 0x3242d8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3242D8u;
    {
        const bool branch_taken_0x3242d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3242DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242D8u;
        // 0x3242dc: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242d8) {
            ctx->pc = 0x32431Cu;
            goto label_32431c;
        }
    }
    ctx->pc = 0x3242E0u;
    // 0x3242e0: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3242e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3242e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3242e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3242e8: 0x244449e0  addiu       $a0, $v0, 0x49E0
    ctx->pc = 0x3242e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18912));
    // 0x3242ec: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x3242ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_3242f0:
    // 0x3242f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3242f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3242f4: 0x8fa70248  lw          $a3, 0x248($sp)
    ctx->pc = 0x3242f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x3242f8: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x3242f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x3242fc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3242fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x324300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324300u;
    {
        const bool branch_taken_0x324300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324300u;
        // 0x324304: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324300) {
            ctx->pc = 0x324310u;
            goto label_324310;
        }
    }
    ctx->pc = 0x324308u;
    // 0x324308: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x324308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x32430c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x32430cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_324310:
    // 0x324310: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x324310u;
    {
        const bool branch_taken_0x324310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324310u;
        // 0x324314: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324310) {
            ctx->pc = 0x3242F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3242f0;
        }
    }
    ctx->pc = 0x324318u;
    // 0x324318: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x324318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32431c:
    // 0x32431c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x32431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x324320: 0x2442d768  addiu       $v0, $v0, -0x2898
    ctx->pc = 0x324320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956904));
    // 0x324324: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x324324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_324328:
    // 0x324328: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x324328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x32432c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32432cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x324330: 0x0  nop
    ctx->pc = 0x324330u;
    // NOP
    // 0x324334: 0x0  nop
    ctx->pc = 0x324334u;
    // NOP
    // 0x324338: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x324338u;
    {
        const bool branch_taken_0x324338 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x32433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324338u;
        // 0x32433c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324338) {
            ctx->pc = 0x324328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324328;
        }
    }
    ctx->pc = 0x324340u;
    // 0x324340: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x324340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x324344: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x324344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x324348: 0x8c43be14  lw          $v1, -0x41EC($v0)
    ctx->pc = 0x324348u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE14u));
    // 0x32434c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x324350: 0x2442d768  addiu       $v0, $v0, -0x2898
    ctx->pc = 0x324350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956904));
    // 0x324354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x324354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324358: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x324358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32435c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32435cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_324360:
    // 0x324360: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x324360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_324364:
    // 0x324364: 0xdfb10298  ld          $s1, 0x298($sp)
    ctx->pc = 0x324364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x324368: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x324368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x32436c: 0xdfb302a8  ld          $s3, 0x2A8($sp)
    ctx->pc = 0x32436cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x324370: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x324370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x324374: 0xdfb502b8  ld          $s5, 0x2B8($sp)
    ctx->pc = 0x324374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x324378: 0xdfb602c0  ld          $s6, 0x2C0($sp)
    ctx->pc = 0x324378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x32437c: 0xdfb702c8  ld          $s7, 0x2C8($sp)
    ctx->pc = 0x32437cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x324380: 0xdfbe02d0  ld          $fp, 0x2D0($sp)
    ctx->pc = 0x324380u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x324384: 0xdfbf02d8  ld          $ra, 0x2D8($sp)
    ctx->pc = 0x324384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x324388: 0xc7bc0320  lwc1        $f28, 0x320($sp)
    ctx->pc = 0x324388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x32438c: 0xc7bb0318  lwc1        $f27, 0x318($sp)
    ctx->pc = 0x32438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x324390: 0xc7ba0310  lwc1        $f26, 0x310($sp)
    ctx->pc = 0x324390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x324394: 0xc7b90308  lwc1        $f25, 0x308($sp)
    ctx->pc = 0x324394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x324398: 0xc7b80300  lwc1        $f24, 0x300($sp)
    ctx->pc = 0x324398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x32439c: 0xc7b702f8  lwc1        $f23, 0x2F8($sp)
    ctx->pc = 0x32439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3243a0: 0xc7b602f0  lwc1        $f22, 0x2F0($sp)
    ctx->pc = 0x3243a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3243a4: 0xc7b502e8  lwc1        $f21, 0x2E8($sp)
    ctx->pc = 0x3243a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3243a8: 0xc7b402e0  lwc1        $f20, 0x2E0($sp)
    ctx->pc = 0x3243a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3243ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3243ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3243B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243ACu;
        // 0x3243b0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3243B4u;
    // 0x3243b4: 0x0  nop
    ctx->pc = 0x3243b4u;
    // NOP
    ctx->pc = 0x3243b8u;
}
