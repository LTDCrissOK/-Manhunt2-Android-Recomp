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

// Function: sub_00198F00
// Address: 0x198f00 - 0x199820
void sub_00198F00_0x198f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198F00_0x198f00");
#endif

    switch (ctx->pc) {
        case 0x198f44u: goto label_198f44;
        case 0x198f54u: goto label_198f54;
        case 0x198f5cu: goto label_198f5c;
        case 0x198f8cu: goto label_198f8c;
        case 0x198fb4u: goto label_198fb4;
        case 0x198ff8u: goto label_198ff8;
        case 0x199000u: goto label_199000;
        case 0x199010u: goto label_199010;
        case 0x199084u: goto label_199084;
        case 0x1990c8u: goto label_1990c8;
        case 0x199164u: goto label_199164;
        case 0x1991b0u: goto label_1991b0;
        case 0x1991bcu: goto label_1991bc;
        case 0x1991c4u: goto label_1991c4;
        case 0x1991dcu: goto label_1991dc;
        case 0x19926cu: goto label_19926c;
        case 0x199274u: goto label_199274;
        case 0x19927cu: goto label_19927c;
        case 0x1992d0u: goto label_1992d0;
        case 0x1992dcu: goto label_1992dc;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992ecu: goto label_1992ec;
        case 0x19930cu: goto label_19930c;
        case 0x1993f8u: goto label_1993f8;
        case 0x199430u: goto label_199430;
        case 0x19945cu: goto label_19945c;
        case 0x199484u: goto label_199484;
        case 0x19948cu: goto label_19948c;
        case 0x19949cu: goto label_19949c;
        case 0x1994a4u: goto label_1994a4;
        case 0x1994b4u: goto label_1994b4;
        case 0x1994bcu: goto label_1994bc;
        case 0x1994ccu: goto label_1994cc;
        case 0x1994d4u: goto label_1994d4;
        case 0x1994e4u: goto label_1994e4;
        case 0x1994ecu: goto label_1994ec;
        case 0x1994f8u: goto label_1994f8;
        case 0x199508u: goto label_199508;
        case 0x199554u: goto label_199554;
        case 0x19955cu: goto label_19955c;
        case 0x199568u: goto label_199568;
        case 0x19958cu: goto label_19958c;
        case 0x199598u: goto label_199598;
        case 0x1995a0u: goto label_1995a0;
        case 0x1995acu: goto label_1995ac;
        case 0x1995b8u: goto label_1995b8;
        case 0x1996c4u: goto label_1996c4;
        case 0x1996ccu: goto label_1996cc;
        case 0x1996d8u: goto label_1996d8;
        case 0x1996f4u: goto label_1996f4;
        case 0x199708u: goto label_199708;
        case 0x199714u: goto label_199714;
        case 0x199790u: goto label_199790;
        case 0x19979cu: goto label_19979c;
        case 0x1997a8u: goto label_1997a8;
        case 0x1997c4u: goto label_1997c4;
        case 0x1997ecu: goto label_1997ec;
        case 0x1997f4u: goto label_1997f4;
        default: break;
    }

    ctx->pc = 0x198f00u;

    // 0x198f00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x198f04: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x198f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x198f08: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x198f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x198f0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x198f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f10: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x198f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x198f14: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x198f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x198f18: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x198f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x198f1c: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x198f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x198f20: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x198f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x198f24: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x198f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x198f28: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x198f28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x198f2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x198f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198f30: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x198f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x198f34: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x198F34u;
    {
        const bool branch_taken_0x198f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198f34) {
            ctx->pc = 0x198F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198F34u;
            // 0x198f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198F84u;
            goto label_198f84;
        }
    }
    ctx->pc = 0x198F3Cu;
    // 0x198f3c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x198F3Cu;
    SET_GPR_U32(ctx, 31, 0x198F44u);
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x198F3Cu, 0x198F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F44u;
label_198f44:
    // 0x198f44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x198f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f4c: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x198F4Cu;
    SET_GPR_U32(ctx, 31, 0x198F54u);
    ctx->pc = 0x198F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F4Cu;
    // 0x198f50: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x198F4Cu, 0x198F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F54u;
label_198f54:
    // 0x198f54: 0xc061a1e  jal         func_186878
    ctx->pc = 0x198F54u;
    SET_GPR_U32(ctx, 31, 0x198F5Cu);
    ctx->pc = 0x198F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F54u;
    // 0x198f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x198F54u, 0x198F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F5Cu;
label_198f5c:
    // 0x198f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198f60: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x198f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x198f64: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x198f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
    // 0x198f68: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x198f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198f6c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x198f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x198f70: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x198f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x198f74: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x198f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x198f78: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x198f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x198f7c: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x198F7Cu;
    {
        const bool branch_taken_0x198f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F7Cu;
        // 0x198f80: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f7c) {
            ctx->pc = 0x199598u;
            goto label_199598;
        }
    }
    ctx->pc = 0x198F84u;
label_198f84:
    // 0x198f84: 0xc061a1e  jal         func_186878
    ctx->pc = 0x198F84u;
    SET_GPR_U32(ctx, 31, 0x198F8Cu);
    ctx->pc = 0x198F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F84u;
    // 0x198f88: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x198F84u, 0x198F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F8Cu;
label_198f8c:
    // 0x198f8c: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x198f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    // 0x198f90: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x198f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x198f94: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x198f98: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x198F98u;
    {
        const bool branch_taken_0x198f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F98u;
        // 0x198f9c: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f98) {
            ctx->pc = 0x19906Cu;
            goto label_19906c;
        }
    }
    ctx->pc = 0x198FA0u;
    // 0x198fa0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x198fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198fa4: 0x8ca21004  lw          $v0, 0x1004($a1)
    ctx->pc = 0x198fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
    // 0x198fa8: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x198fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x198fac: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x198FACu;
    SET_GPR_U32(ctx, 31, 0x198FB4u);
    ctx->pc = 0x198FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FACu;
    // 0x198fb0: 0x8c650030  lw          $a1, 0x30($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x198FACu, 0x198FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FB4u;
label_198fb4:
    // 0x198fb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198fb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x198fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fbc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x198fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198fc0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x198fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fc4: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x198fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x198fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fcc: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x198fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x198fd0: 0xc44101e0  lwc1        $f1, 0x1E0($v0)
    ctx->pc = 0x198fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198fd4: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x198fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x198fd8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x198fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x198fdc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x198fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198fe0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x198fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x198fe4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x198fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198fe8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x198fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x198fec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x198fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ff0: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x198FF0u;
    SET_GPR_U32(ctx, 31, 0x198FF8u);
    ctx->pc = 0x198FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FF0u;
    // 0x198ff4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x198FF0u, 0x198FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FF8u;
label_198ff8:
    // 0x198ff8: 0xc061a1e  jal         func_186878
    ctx->pc = 0x198FF8u;
    SET_GPR_U32(ctx, 31, 0x199000u);
    ctx->pc = 0x198FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FF8u;
    // 0x198ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x198FF8u, 0x199000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199000u;
label_199000:
    // 0x199000: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x199000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199008: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x199008u;
    SET_GPR_U32(ctx, 31, 0x199010u);
    ctx->pc = 0x19900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199008u;
    // 0x19900c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x199008u, 0x199010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199010u;
label_199010:
    // 0x199010: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x199010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x199014: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x199014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x199018: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x199018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x19901c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19901Cu;
    {
        const bool branch_taken_0x19901c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19901Cu;
        // 0x199020: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19901c) {
            ctx->pc = 0x199038u;
            goto label_199038;
        }
    }
    ctx->pc = 0x199024u;
    // 0x199024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199028: 0x0  nop
    ctx->pc = 0x199028u;
    // NOP
    // 0x19902c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19902cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199030: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x199030u;
    {
        const bool branch_taken_0x199030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199030) {
            ctx->pc = 0x199050u;
            goto label_199050;
        }
    }
    ctx->pc = 0x199038u;
label_199038:
    // 0x199038: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19903c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199044: 0x0  nop
    ctx->pc = 0x199044u;
    // NOP
    // 0x199048: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x199048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19904c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19904cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_199050:
    // 0x199050: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x199054: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x199054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199058: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19905c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199060: 0xae4200f4  sw          $v0, 0xF4($s2)
    ctx->pc = 0x199060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 2));
    // 0x199064: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x199064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x199068: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x199068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
label_19906c:
    // 0x19906c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x19906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x199070: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x199070u;
    {
        const bool branch_taken_0x199070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199070) {
            ctx->pc = 0x199074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199070u;
            // 0x199074: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1991C8u;
            goto label_1991c8;
        }
    }
    ctx->pc = 0x199078u;
    // 0x199078: 0xc65400ac  lwc1        $f20, 0xAC($s2)
    ctx->pc = 0x199078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19907c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19907Cu;
    SET_GPR_U32(ctx, 31, 0x199084u);
    ctx->pc = 0x199080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19907Cu;
    // 0x199080: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19907Cu, 0x199084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199084u;
label_199084:
    // 0x199084: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x199084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x199088: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x199088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x19908c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x19908cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x199090: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x199090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x199094: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x199094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x199098: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x199098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19909c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x19909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1990a0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1990a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1990a4: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x1990a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1990a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1990a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1990ac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1990acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1990b0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1990b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1990b4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1990b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1990b8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1990b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1990bc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1990bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1990c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1990C0u;
    SET_GPR_U32(ctx, 31, 0x1990C8u);
    ctx->pc = 0x1990C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1990C0u;
    // 0x1990c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1990C0u, 0x1990C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990C8u;
label_1990c8:
    // 0x1990c8: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x1990c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1990cc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1990ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1990d0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1990d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1990d4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1990d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1990d8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1990d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1990dc: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1990dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1990e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1990e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1990e4: 0x8c641004  lw          $a0, 0x1004($v1)
    ctx->pc = 0x1990e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x1990e8: 0x8c820fe8  lw          $v0, 0xFE8($a0)
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1990ec: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1990ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1990f0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1990f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1990f4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1990f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1990f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1990f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1990fc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1990fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x199100: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x199100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199104: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x199104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199108: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x199108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19910c: 0xc7a5008c  lwc1        $f5, 0x8C($sp)
    ctx->pc = 0x19910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x199110: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x199110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x199114: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x199114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x199118: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x199118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19911c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x19911cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x199120: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x199120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199124: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x199124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199128: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x199128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19912c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x19912cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x199130: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x199130u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x199134: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x199134u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x199138: 0x46010044  c1          0x10044
    ctx->pc = 0x199138u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x19913c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19913cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x199140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199144: 0x0  nop
    ctx->pc = 0x199144u;
    // NOP
    // 0x199148: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x199148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19914c: 0x0  nop
    ctx->pc = 0x19914cu;
    // NOP
    // 0x199150: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x199150u;
    {
        const bool branch_taken_0x199150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199150) {
            ctx->pc = 0x199154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199150u;
            // 0x199154: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1991C8u;
            goto label_1991c8;
        }
    }
    ctx->pc = 0x199158u;
    // 0x199158: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x199158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19915c: 0xc078bcc  jal         func_1E2F30
    ctx->pc = 0x19915Cu;
    SET_GPR_U32(ctx, 31, 0x199164u);
    ctx->pc = 0x199160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19915Cu;
    // 0x199160: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F30u, 0x19915Cu, 0x199164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199164u;
label_199164:
    // 0x199164: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x199164u;
    {
        const bool branch_taken_0x199164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199164) {
            ctx->pc = 0x199168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199164u;
            // 0x199168: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1991C8u;
            goto label_1991c8;
        }
    }
    ctx->pc = 0x19916Cu;
    // 0x19916c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x19916cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x199170: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x199170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x199174: 0xc460c6a4  lwc1        $f0, -0x395C($v1)
    ctx->pc = 0x199174u;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199178: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x199178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x19917c: 0xc444c61c  lwc1        $f4, -0x39E4($v0)
    ctx->pc = 0x19917cu;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x199180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199184: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x199184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x199188: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x199188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19918c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x19918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199190: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x199190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199194: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x199194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x199198: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x199198u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x19919c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x19919cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1991a0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1991a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1991a4: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x1991a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1991a8: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1991A8u;
    SET_GPR_U32(ctx, 31, 0x1991B0u);
    ctx->pc = 0x1991ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991A8u;
    // 0x1991ac: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1991A8u, 0x1991B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991B0u;
label_1991b0:
    // 0x1991b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1991b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991b4: 0xc06cdea  jal         func_1B37A8
    ctx->pc = 0x1991B4u;
    SET_GPR_U32(ctx, 31, 0x1991BCu);
    ctx->pc = 0x1991B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991B4u;
    // 0x1991b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x1991B4u, 0x1991BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991BCu;
label_1991bc:
    // 0x1991bc: 0xc066c1e  jal         func_19B078
    ctx->pc = 0x1991BCu;
    SET_GPR_U32(ctx, 31, 0x1991C4u);
    ctx->pc = 0x1991C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991BCu;
    // 0x1991c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B078u, 0x1991BCu, 0x1991C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991C4u;
label_1991c4:
    // 0x1991c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1991c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1991c8:
    // 0x1991c8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1991c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1991cc: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1991CCu;
    {
        const bool branch_taken_0x1991cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1991cc) {
            ctx->pc = 0x199598u;
            goto label_199598;
        }
    }
    ctx->pc = 0x1991D4u;
    // 0x1991d4: 0xc061a12  jal         func_186848
    ctx->pc = 0x1991D4u;
    SET_GPR_U32(ctx, 31, 0x1991DCu);
    ctx->pc = 0x1991D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991D4u;
    // 0x1991d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1991D4u, 0x1991DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991DCu;
label_1991dc:
    // 0x1991dc: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1991dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1991e0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1991e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1991e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1991e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1991e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1991e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1991ec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1991ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1991f0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1991f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1991f4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1991f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1991f8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1991f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1991fc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1991fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199200: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x199200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x199204: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x199204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x199208: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x199208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19920c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19920cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x199210: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x199210u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x199214: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x199214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199218: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x199218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19921c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x19921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x199220: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x199220u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x199224: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x199224u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x199228: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x199228u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x19922c: 0x46010044  c1          0x10044
    ctx->pc = 0x19922cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x199230: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x199230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x199234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199238: 0x0  nop
    ctx->pc = 0x199238u;
    // NOP
    // 0x19923c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19923cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199240: 0x0  nop
    ctx->pc = 0x199240u;
    // NOP
    // 0x199244: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x199244u;
    {
        const bool branch_taken_0x199244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199244u;
        // 0x199248: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199244) {
            ctx->pc = 0x199284u;
            goto label_199284;
        }
    }
    ctx->pc = 0x19924Cu;
    // 0x19924c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x199250: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x199254: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x199254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x199258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19925c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x19925cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x199260: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x199260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x199264: 0xc061a1e  jal         func_186878
    ctx->pc = 0x199264u;
    SET_GPR_U32(ctx, 31, 0x19926Cu);
    ctx->pc = 0x199268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199264u;
    // 0x199268: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199264u, 0x19926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19926Cu;
label_19926c:
    // 0x19926c: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x19926Cu;
    SET_GPR_U32(ctx, 31, 0x199274u);
    ctx->pc = 0x199270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19926Cu;
    // 0x199270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x19926Cu, 0x199274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199274u;
label_199274:
    // 0x199274: 0xc066c1e  jal         func_19B078
    ctx->pc = 0x199274u;
    SET_GPR_U32(ctx, 31, 0x19927Cu);
    ctx->pc = 0x199278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199274u;
    // 0x199278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B078u, 0x199274u, 0x19927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19927Cu;
label_19927c:
    // 0x19927c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x19927Cu;
    {
        const bool branch_taken_0x19927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19927c) {
            ctx->pc = 0x199598u;
            goto label_199598;
        }
    }
    ctx->pc = 0x199284u;
label_199284:
    // 0x199284: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x199284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x199288: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x199288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19928c: 0xc440c6a4  lwc1        $f0, -0x395C($v0)
    ctx->pc = 0x19928cu;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199290: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x199290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x199294: 0xc461c61c  lwc1        $f1, -0x39E4($v1)
    ctx->pc = 0x199294u;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199298: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x199298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19929c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x19929cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1992a0: 0xc605000c  lwc1        $f5, 0xC($s0)
    ctx->pc = 0x1992a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1992a4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1992a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1992a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1992a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1992ac: 0xc6430060  lwc1        $f3, 0x60($s2)
    ctx->pc = 0x1992acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1992b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1992b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1992b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1992b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1992b8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1992b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1992bc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1992bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1992c0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1992c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1992c4: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x1992c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1992c8: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1992C8u;
    SET_GPR_U32(ctx, 31, 0x1992D0u);
    ctx->pc = 0x1992CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992C8u;
    // 0x1992cc: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1992C8u, 0x1992D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992D0u;
label_1992d0:
    // 0x1992d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1992d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1992d4: 0xc06cdb8  jal         func_1B36E0
    ctx->pc = 0x1992D4u;
    SET_GPR_U32(ctx, 31, 0x1992DCu);
    ctx->pc = 0x1992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992D4u;
    // 0x1992d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x1992D4u, 0x1992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992DCu;
label_1992dc:
    // 0x1992dc: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1992DCu;
    SET_GPR_U32(ctx, 31, 0x1992E4u);
    ctx->pc = 0x1992E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992DCu;
    // 0x1992e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1992DCu, 0x1992E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992E4u;
label_1992e4:
    // 0x1992e4: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x1992E4u;
    SET_GPR_U32(ctx, 31, 0x1992ECu);
    ctx->pc = 0x1992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992E4u;
    // 0x1992e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x1992E4u, 0x1992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992ECu;
label_1992ec:
    // 0x1992ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1992ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1992f0: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x1992f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1992f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1992f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1992f8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1992f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1992fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1992FCu;
    {
        const bool branch_taken_0x1992fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992FCu;
        // 0x199300: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992fc) {
            ctx->pc = 0x199310u;
            goto label_199310;
        }
    }
    ctx->pc = 0x199304u;
    // 0x199304: 0xc0414a2  jal         func_105288
    ctx->pc = 0x199304u;
    SET_GPR_U32(ctx, 31, 0x19930Cu);
    ctx->pc = 0x199308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199304u;
    // 0x199308: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x199304u, 0x19930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19930Cu;
label_19930c:
    // 0x19930c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x19930cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199310:
    // 0x199310: 0x5600003d  bnel        $s0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x199310u;
    {
        const bool branch_taken_0x199310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x199310) {
            ctx->pc = 0x199314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199310u;
            // 0x199314: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199408u;
            goto label_199408;
        }
    }
    ctx->pc = 0x199318u;
    // 0x199318: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x199318u;
    {
        const bool branch_taken_0x199318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199318u;
        // 0x19931c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199318) {
            ctx->pc = 0x199404u;
            goto label_199404;
        }
    }
    ctx->pc = 0x199320u;
    // 0x199320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199324: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x199324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x199328: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199328u;
    {
        const bool branch_taken_0x199328 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199328u;
        // 0x19932c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199328) {
            ctx->pc = 0x199344u;
            goto label_199344;
        }
    }
    ctx->pc = 0x199330u;
    // 0x199330: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199334: 0x0  nop
    ctx->pc = 0x199334u;
    // NOP
    // 0x199338: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19933c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19933Cu;
    {
        const bool branch_taken_0x19933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19933c) {
            ctx->pc = 0x19935Cu;
            goto label_19935c;
        }
    }
    ctx->pc = 0x199344u;
label_199344:
    // 0x199344: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19934c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19934cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199350: 0x0  nop
    ctx->pc = 0x199350u;
    // NOP
    // 0x199354: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199358: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x199358u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19935c:
    // 0x19935c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19935cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x199360: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x199360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199368: 0xc64100f0  lwc1        $f1, 0xF0($s2)
    ctx->pc = 0x199368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19936c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19936cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x199370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199374: 0x0  nop
    ctx->pc = 0x199374u;
    // NOP
    // 0x199378: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x199378u;
    {
        const bool branch_taken_0x199378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199378) {
            ctx->pc = 0x19937Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199378u;
            // 0x19937c: 0xae4000f4  sw          $zero, 0xF4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1993ECu;
            goto label_1993ec;
        }
    }
    ctx->pc = 0x199380u;
    // 0x199380: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x199384: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x199384u;
    {
        const bool branch_taken_0x199384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199384u;
        // 0x199388: 0x8c822b00  lw          $v0, 0x2B00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199384) {
            ctx->pc = 0x1993E8u;
            goto label_1993e8;
        }
    }
    ctx->pc = 0x19938Cu;
    // 0x19938c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19938Cu;
    {
        const bool branch_taken_0x19938c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19938Cu;
        // 0x199390: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19938c) {
            ctx->pc = 0x1993A8u;
            goto label_1993a8;
        }
    }
    ctx->pc = 0x199394u;
    // 0x199394: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199398: 0x0  nop
    ctx->pc = 0x199398u;
    // NOP
    // 0x19939c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19939cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1993a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1993A0u;
    {
        const bool branch_taken_0x1993a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993a0) {
            ctx->pc = 0x1993C0u;
            goto label_1993c0;
        }
    }
    ctx->pc = 0x1993A8u;
label_1993a8:
    // 0x1993a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1993a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1993ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1993acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1993b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1993b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1993b4: 0x0  nop
    ctx->pc = 0x1993b4u;
    // NOP
    // 0x1993b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1993b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1993bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1993bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1993c0:
    // 0x1993c0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1993c4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1993c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1993c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1993c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1993cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1993ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1993d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1993d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1993d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1993d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1993d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1993dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1993dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1993e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1993E0u;
    {
        const bool branch_taken_0x1993e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1993E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993E0u;
        // 0x1993e4: 0xe64000f0  swc1        $f0, 0xF0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993e0) {
            ctx->pc = 0x1993F0u;
            goto label_1993f0;
        }
    }
    ctx->pc = 0x1993E8u;
label_1993e8:
    // 0x1993e8: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x1993e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
label_1993ec:
    // 0x1993ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1993ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1993f0:
    // 0x1993f0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1993F0u;
    SET_GPR_U32(ctx, 31, 0x1993F8u);
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1993F0u, 0x1993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993F8u;
label_1993f8:
    // 0x1993f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1993f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1993fc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1993FCu;
    {
        const bool branch_taken_0x1993fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993FCu;
        // 0x199400: 0xac430158  sw          $v1, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993fc) {
            ctx->pc = 0x199598u;
            goto label_199598;
        }
    }
    ctx->pc = 0x199404u;
label_199404:
    // 0x199404: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x199404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_199408:
    // 0x199408: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x199408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19940c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19940Cu;
    {
        const bool branch_taken_0x19940c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19940Cu;
        // 0x199410: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19940c) {
            ctx->pc = 0x19941Cu;
            goto label_19941c;
        }
    }
    ctx->pc = 0x199414u;
    // 0x199414: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x199414u;
    {
        const bool branch_taken_0x199414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199414u;
        // 0x199418: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199414) {
            ctx->pc = 0x199574u;
            goto label_199574;
        }
    }
    ctx->pc = 0x19941Cu;
label_19941c:
    // 0x19941c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x199420: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x199424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199428: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x199428u;
    SET_GPR_U32(ctx, 31, 0x199430u);
    ctx->pc = 0x19942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199428u;
    // 0x19942c: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x199428u, 0x199430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199430u;
label_199430:
    // 0x199430: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x199430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199434: 0x26100f90  addiu       $s0, $s0, 0xF90
    ctx->pc = 0x199434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
    // 0x199438: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x199438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19943c: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x19943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x199440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199444: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x199444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x199448: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x199448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19944c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19944cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x199450: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x199450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x199454: 0xc061a12  jal         func_186848
    ctx->pc = 0x199454u;
    SET_GPR_U32(ctx, 31, 0x19945Cu);
    ctx->pc = 0x199458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199454u;
    // 0x199458: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x199454u, 0x19945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19945Cu;
label_19945c:
    // 0x19945c: 0xc4410240  lwc1        $f1, 0x240($v0)
    ctx->pc = 0x19945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199460: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x199460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x199464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199468: 0x0  nop
    ctx->pc = 0x199468u;
    // NOP
    // 0x19946c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19946cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199470: 0x0  nop
    ctx->pc = 0x199470u;
    // NOP
    // 0x199474: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x199474u;
    {
        const bool branch_taken_0x199474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199474) {
            ctx->pc = 0x199494u;
            goto label_199494;
        }
    }
    ctx->pc = 0x19947Cu;
    // 0x19947c: 0xc061a12  jal         func_186848
    ctx->pc = 0x19947Cu;
    SET_GPR_U32(ctx, 31, 0x199484u);
    ctx->pc = 0x199480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19947Cu;
    // 0x199480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19947Cu, 0x199484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199484u;
label_199484:
    // 0x199484: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x199484u;
    SET_GPR_U32(ctx, 31, 0x19948Cu);
    ctx->pc = 0x199488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199484u;
    // 0x199488: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x199484u, 0x19948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19948Cu;
label_19948c:
    // 0x19948c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19948Cu;
    {
        const bool branch_taken_0x19948c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19948c) {
            ctx->pc = 0x1994DCu;
            goto label_1994dc;
        }
    }
    ctx->pc = 0x199494u;
label_199494:
    // 0x199494: 0xc061a12  jal         func_186848
    ctx->pc = 0x199494u;
    SET_GPR_U32(ctx, 31, 0x19949Cu);
    ctx->pc = 0x199498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199494u;
    // 0x199498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x199494u, 0x19949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19949Cu;
label_19949c:
    // 0x19949c: 0xc06faba  jal         func_1BEAE8
    ctx->pc = 0x19949Cu;
    SET_GPR_U32(ctx, 31, 0x1994A4u);
    ctx->pc = 0x1994A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19949Cu;
    // 0x1994a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAE8u, 0x19949Cu, 0x1994A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994A4u;
label_1994a4:
    // 0x1994a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1994A4u;
    {
        const bool branch_taken_0x1994a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1994a4) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x1994ACu;
    // 0x1994ac: 0xc061a12  jal         func_186848
    ctx->pc = 0x1994ACu;
    SET_GPR_U32(ctx, 31, 0x1994B4u);
    ctx->pc = 0x1994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994ACu;
    // 0x1994b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1994ACu, 0x1994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994B4u;
label_1994b4:
    // 0x1994b4: 0xc06faba  jal         func_1BEAE8
    ctx->pc = 0x1994B4u;
    SET_GPR_U32(ctx, 31, 0x1994BCu);
    ctx->pc = 0x1994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994B4u;
    // 0x1994b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAE8u, 0x1994B4u, 0x1994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994BCu;
label_1994bc:
    // 0x1994bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1994BCu;
    {
        const bool branch_taken_0x1994bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994BCu;
        // 0x1994c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994bc) {
            ctx->pc = 0x1994F0u;
            goto label_1994f0;
        }
    }
    ctx->pc = 0x1994C4u;
label_1994c4:
    // 0x1994c4: 0xc061a12  jal         func_186848
    ctx->pc = 0x1994C4u;
    SET_GPR_U32(ctx, 31, 0x1994CCu);
    ctx->pc = 0x1994C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994C4u;
    // 0x1994c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1994C4u, 0x1994CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994CCu;
label_1994cc:
    // 0x1994cc: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1994CCu;
    SET_GPR_U32(ctx, 31, 0x1994D4u);
    ctx->pc = 0x1994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994CCu;
    // 0x1994d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1994CCu, 0x1994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994D4u;
label_1994d4:
    // 0x1994d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1994D4u;
    {
        const bool branch_taken_0x1994d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1994d4) {
            ctx->pc = 0x199500u;
            goto label_199500;
        }
    }
    ctx->pc = 0x1994DCu;
label_1994dc:
    // 0x1994dc: 0xc061a12  jal         func_186848
    ctx->pc = 0x1994DCu;
    SET_GPR_U32(ctx, 31, 0x1994E4u);
    ctx->pc = 0x1994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994DCu;
    // 0x1994e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1994DCu, 0x1994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994E4u;
label_1994e4:
    // 0x1994e4: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1994E4u;
    SET_GPR_U32(ctx, 31, 0x1994ECu);
    ctx->pc = 0x1994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994E4u;
    // 0x1994e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1994E4u, 0x1994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994ECu;
label_1994ec:
    // 0x1994ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1994ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1994f0:
    // 0x1994f0: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x1994F0u;
    SET_GPR_U32(ctx, 31, 0x1994F8u);
    ctx->pc = 0x1994F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994F0u;
    // 0x1994f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1994F0u, 0x1994F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994F8u;
label_1994f8:
    // 0x1994f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1994F8u;
    {
        const bool branch_taken_0x1994f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1994f8) {
            ctx->pc = 0x199554u;
            goto label_199554;
        }
    }
    ctx->pc = 0x199500u;
label_199500:
    // 0x199500: 0xc061a12  jal         func_186848
    ctx->pc = 0x199500u;
    SET_GPR_U32(ctx, 31, 0x199508u);
    ctx->pc = 0x199504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199500u;
    // 0x199504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x199500u, 0x199508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199508u;
label_199508:
    // 0x199508: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x199508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19950c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x19950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x199510: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x199510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x199514: 0xc6a3c6a4  lwc1        $f3, -0x395C($s5)
    ctx->pc = 0x199514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199518: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x199518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19951c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x19951cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x199520: 0xc682c61c  lwc1        $f2, -0x39E4($s4)
    ctx->pc = 0x199520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199524: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x199524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199528: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x199528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19952c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19952cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199530: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x199530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x199534: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x199534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x199538: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x199538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19953c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x19953cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x199540: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x199540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x199544: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x199544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199548: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x199548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x19954c: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x19954Cu;
    SET_GPR_U32(ctx, 31, 0x199554u);
    ctx->pc = 0x199550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19954Cu;
    // 0x199550: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x19954Cu, 0x199554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199554u;
label_199554:
    // 0x199554: 0xc061a1e  jal         func_186878
    ctx->pc = 0x199554u;
    SET_GPR_U32(ctx, 31, 0x19955Cu);
    ctx->pc = 0x199558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199554u;
    // 0x199558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199554u, 0x19955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19955Cu;
label_19955c:
    // 0x19955c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199560: 0xc06cdea  jal         func_1B37A8
    ctx->pc = 0x199560u;
    SET_GPR_U32(ctx, 31, 0x199568u);
    ctx->pc = 0x199564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199560u;
    // 0x199564: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x199560u, 0x199568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199568u;
label_199568:
    // 0x199568: 0x26c20f90  addiu       $v0, $s6, 0xF90
    ctx->pc = 0x199568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
    // 0x19956c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19956Cu;
    {
        const bool branch_taken_0x19956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19956Cu;
        // 0x199570: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19956c) {
            ctx->pc = 0x199598u;
            goto label_199598;
        }
    }
    ctx->pc = 0x199574u;
label_199574:
    // 0x199574: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199574u;
    {
        const bool branch_taken_0x199574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199574u;
        // 0x199578: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199574) {
            ctx->pc = 0x199584u;
            goto label_199584;
        }
    }
    ctx->pc = 0x19957Cu;
    // 0x19957c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19957Cu;
    {
        const bool branch_taken_0x19957c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19957c) {
            ctx->pc = 0x199598u;
            goto label_199598;
        }
    }
    ctx->pc = 0x199584u;
label_199584:
    // 0x199584: 0xc061a1e  jal         func_186878
    ctx->pc = 0x199584u;
    SET_GPR_U32(ctx, 31, 0x19958Cu);
    ctx->pc = 0x199588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199584u;
    // 0x199588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199584u, 0x19958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19958Cu;
label_19958c:
    // 0x19958c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199590: 0xc06cdb8  jal         func_1B36E0
    ctx->pc = 0x199590u;
    SET_GPR_U32(ctx, 31, 0x199598u);
    ctx->pc = 0x199594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199590u;
    // 0x199594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x199590u, 0x199598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199598u;
label_199598:
    // 0x199598: 0xc061a1e  jal         func_186878
    ctx->pc = 0x199598u;
    SET_GPR_U32(ctx, 31, 0x1995A0u);
    ctx->pc = 0x19959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199598u;
    // 0x19959c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199598u, 0x1995A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995A0u;
label_1995a0:
    // 0x1995a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1995a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995a4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1995A4u;
    SET_GPR_U32(ctx, 31, 0x1995ACu);
    ctx->pc = 0x1995A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995A4u;
    // 0x1995a8: 0xac400180  sw          $zero, 0x180($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1995A4u, 0x1995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995ACu;
label_1995ac:
    // 0x1995ac: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x1995acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    // 0x1995b0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1995B0u;
    SET_GPR_U32(ctx, 31, 0x1995B8u);
    ctx->pc = 0x1995B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995B0u;
    // 0x1995b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1995B0u, 0x1995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995B8u;
label_1995b8:
    // 0x1995b8: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x1995b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1995bc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1995bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1995c0: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1995C0u;
    {
        const bool branch_taken_0x1995c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1995C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995C0u;
        // 0x1995c4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995c0) {
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x1995C8u;
    // 0x1995c8: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1995c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1995cc: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x1995ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x1995d0: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1995d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1995d4: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x1995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x1995d8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1995d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1995dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1995DCu;
    {
        const bool branch_taken_0x1995dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1995E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995DCu;
        // 0x1995e0: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995dc) {
            ctx->pc = 0x199614u;
            goto label_199614;
        }
    }
    ctx->pc = 0x1995E4u;
    // 0x1995e4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1995E4u;
    {
        const bool branch_taken_0x1995e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1995E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995E4u;
        // 0x1995e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995e4) {
            ctx->pc = 0x19960Cu;
            goto label_19960c;
        }
    }
    ctx->pc = 0x1995ECu;
    // 0x1995ec: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x1995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1995f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1995f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1995f4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1995f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1995f8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1995f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1995fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1995fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199600: 0x0  nop
    ctx->pc = 0x199600u;
    // NOP
    // 0x199604: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x199604u;
    {
        const bool branch_taken_0x199604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199604) {
            ctx->pc = 0x199608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199604u;
            // 0x199608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19960Cu;
            goto label_19960c;
        }
    }
    ctx->pc = 0x19960Cu;
label_19960c:
    // 0x19960c: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19960Cu;
    {
        const bool branch_taken_0x19960c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19960c) {
            ctx->pc = 0x199610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19960Cu;
            // 0x199610: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199634u;
            goto label_199634;
        }
    }
    ctx->pc = 0x199614u;
label_199614:
    // 0x199614: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x199614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x199618: 0x24420898  addiu       $v0, $v0, 0x898
    ctx->pc = 0x199618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
    // 0x19961c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x19961cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F08A8u));
    // 0x199620: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x199620u;
    {
        const bool branch_taken_0x199620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199620) {
            ctx->pc = 0x199624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199620u;
            // 0x199624: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199634u;
            goto label_199634;
        }
    }
    ctx->pc = 0x199628u;
    // 0x199628: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x199628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x19962c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x19962Cu;
    {
        const bool branch_taken_0x19962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19962Cu;
        // 0x199630: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19962c) {
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x199634u;
label_199634:
    // 0x199634: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x199634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x199638: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x199638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x19963c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x19963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x199640: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x199640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x199644: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x199644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x199648: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x199648u;
    {
        const bool branch_taken_0x199648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199648u;
        // 0x19964c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199648) {
            ctx->pc = 0x1996BCu;
            goto label_1996bc;
        }
    }
    ctx->pc = 0x199650u;
    // 0x199650: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x199650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199654: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x199654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x199658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x199658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19965c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x199660: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199660u;
    {
        const bool branch_taken_0x199660 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199660u;
        // 0x199664: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199660) {
            ctx->pc = 0x19967Cu;
            goto label_19967c;
        }
    }
    ctx->pc = 0x199668u;
    // 0x199668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19966c: 0x0  nop
    ctx->pc = 0x19966cu;
    // NOP
    // 0x199670: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x199670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199674u;
    {
        const bool branch_taken_0x199674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199674) {
            ctx->pc = 0x199698u;
            goto label_199698;
        }
    }
    ctx->pc = 0x19967Cu;
label_19967c:
    // 0x19967c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19967cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x199680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19968c: 0x0  nop
    ctx->pc = 0x19968cu;
    // NOP
    // 0x199690: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x199690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199694: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x199694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_199698:
    // 0x199698: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19969c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19969cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1996a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1996a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1996a4: 0x0  nop
    ctx->pc = 0x1996a4u;
    // NOP
    // 0x1996a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1996a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1996ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1996acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1996b0: 0x0  nop
    ctx->pc = 0x1996b0u;
    // NOP
    // 0x1996b4: 0x4502003e  bc1fl       . + 4 + (0x3E << 2)
    ctx->pc = 0x1996B4u;
    {
        const bool branch_taken_0x1996b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1996b4) {
            ctx->pc = 0x1996B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1996B4u;
            // 0x1996b8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x1996BCu;
label_1996bc:
    // 0x1996bc: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1996BCu;
    SET_GPR_U32(ctx, 31, 0x1996C4u);
    ctx->pc = 0x1996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996BCu;
    // 0x1996c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1996BCu, 0x1996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996C4u;
label_1996c4:
    // 0x1996c4: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x1996C4u;
    SET_GPR_U32(ctx, 31, 0x1996CCu);
    ctx->pc = 0x1996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996C4u;
    // 0x1996c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x1996C4u, 0x1996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996CCu;
label_1996cc:
    // 0x1996cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1996ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996d0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1996D0u;
    SET_GPR_U32(ctx, 31, 0x1996D8u);
    ctx->pc = 0x1996D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996D0u;
    // 0x1996d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1996D0u, 0x1996D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996D8u;
label_1996d8:
    // 0x1996d8: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x1996d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1996dc: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1996DCu;
    {
        const bool branch_taken_0x1996dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1996dc) {
            ctx->pc = 0x1996E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1996DCu;
            // 0x1996e0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x1996E4u;
    // 0x1996e4: 0x52000032  beql        $s0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1996E4u;
    {
        const bool branch_taken_0x1996e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1996e4) {
            ctx->pc = 0x1996E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1996E4u;
            // 0x1996e8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x1996ECu;
    // 0x1996ec: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1996ECu;
    SET_GPR_U32(ctx, 31, 0x1996F4u);
    ctx->pc = 0x1996F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996ECu;
    // 0x1996f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1996ECu, 0x1996F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996F4u;
label_1996f4:
    // 0x1996f4: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x1996f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x1996f8: 0x5460002d  bnel        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1996F8u;
    {
        const bool branch_taken_0x1996f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1996f8) {
            ctx->pc = 0x1996FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1996F8u;
            // 0x1996fc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x199700u;
    // 0x199700: 0xc061a1e  jal         func_186878
    ctx->pc = 0x199700u;
    SET_GPR_U32(ctx, 31, 0x199708u);
    ctx->pc = 0x199704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199700u;
    // 0x199704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199700u, 0x199708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199708u;
label_199708:
    // 0x199708: 0x24500190  addiu       $s0, $v0, 0x190
    ctx->pc = 0x199708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x19970c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19970Cu;
    SET_GPR_U32(ctx, 31, 0x199714u);
    ctx->pc = 0x199710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19970Cu;
    // 0x199710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19970Cu, 0x199714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199714u;
label_199714:
    // 0x199714: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x199714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x199718: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x199718u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x19971c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x19971cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199720: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x199720u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199724: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x199724u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x199728: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x199728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19972c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199730: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x199730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199734: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x199734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199738: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x199738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19973c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19973cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x199740: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x199740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x199744: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x199744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x199748: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x199748u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19974c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199750: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x199750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x199754: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x199754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x199758: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x199758u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x19975c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19975cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x199760: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x199760u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x199764: 0x46010044  c1          0x10044
    ctx->pc = 0x199764u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x199768: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x19976c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19976cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199770: 0x0  nop
    ctx->pc = 0x199770u;
    // NOP
    // 0x199774: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199778: 0x0  nop
    ctx->pc = 0x199778u;
    // NOP
    // 0x19977c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x19977Cu;
    {
        const bool branch_taken_0x19977c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19977c) {
            ctx->pc = 0x199780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19977Cu;
            // 0x199780: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x199784u;
    // 0x199784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199788: 0xc061a1e  jal         func_186878
    ctx->pc = 0x199788u;
    SET_GPR_U32(ctx, 31, 0x199790u);
    ctx->pc = 0x19978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199788u;
    // 0x19978c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199788u, 0x199790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199790u;
label_199790:
    // 0x199790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199794: 0xc061a1e  jal         func_186878
    ctx->pc = 0x199794u;
    SET_GPR_U32(ctx, 31, 0x19979Cu);
    ctx->pc = 0x199798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199794u;
    // 0x199798: 0xac500180  sw          $s0, 0x180($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x199794u, 0x19979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19979Cu;
label_19979c:
    // 0x19979c: 0xac500158  sw          $s0, 0x158($v0)
    ctx->pc = 0x19979cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 16));
    // 0x1997a0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1997A0u;
    SET_GPR_U32(ctx, 31, 0x1997A8u);
    ctx->pc = 0x1997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997A0u;
    // 0x1997a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1997A0u, 0x1997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997A8u;
label_1997a8:
    // 0x1997a8: 0xac500228  sw          $s0, 0x228($v0)
    ctx->pc = 0x1997a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 16));
    // 0x1997ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1997acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1997b0:
    // 0x1997b0: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x1997b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x1997b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1997B4u;
    {
        const bool branch_taken_0x1997b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997B4u;
        // 0x1997b8: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997b4) {
            ctx->pc = 0x1997F8u;
            goto label_1997f8;
        }
    }
    ctx->pc = 0x1997BCu;
    // 0x1997bc: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1997BCu;
    SET_GPR_U32(ctx, 31, 0x1997C4u);
    ctx->pc = 0x1997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997BCu;
    // 0x1997c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1997BCu, 0x1997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997C4u;
label_1997c4:
    // 0x1997c4: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x1997c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1997c8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1997c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1997cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1997ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1997d0: 0x0  nop
    ctx->pc = 0x1997d0u;
    // NOP
    // 0x1997d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1997d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1997d8: 0x0  nop
    ctx->pc = 0x1997d8u;
    // NOP
    // 0x1997dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1997DCu;
    {
        const bool branch_taken_0x1997dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997DCu;
        // 0x1997e0: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997dc) {
            ctx->pc = 0x1997F8u;
            goto label_1997f8;
        }
    }
    ctx->pc = 0x1997E4u;
    // 0x1997e4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1997E4u;
    SET_GPR_U32(ctx, 31, 0x1997ECu);
    ctx->pc = 0x1997E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997E4u;
    // 0x1997e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1997E4u, 0x1997ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997ECu;
label_1997ec:
    // 0x1997ec: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x1997ECu;
    SET_GPR_U32(ctx, 31, 0x1997F4u);
    ctx->pc = 0x1997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997ECu;
    // 0x1997f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x1997ECu, 0x1997F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997F4u;
label_1997f4:
    // 0x1997f4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1997f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1997f8:
    // 0x1997f8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1997f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1997fc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1997fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x199800: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x199800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x199804: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x199804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199808: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x199808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19980c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x199810: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x199810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x199814: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x199814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x199818: 0x3e00008  jr          $ra
    ctx->pc = 0x199818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199818u;
        // 0x19981c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199820u;
}
