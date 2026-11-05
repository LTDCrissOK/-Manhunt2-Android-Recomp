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

// Function: sub_0030A6D0
// Address: 0x30a6d0 - 0x30a8d8
void sub_0030A6D0_0x30a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A6D0_0x30a6d0");
#endif

    switch (ctx->pc) {
        case 0x30a700u: goto label_30a700;
        case 0x30a710u: goto label_30a710;
        case 0x30a7bcu: goto label_30a7bc;
        case 0x30a7d0u: goto label_30a7d0;
        case 0x30a7f4u: goto label_30a7f4;
        case 0x30a804u: goto label_30a804;
        case 0x30a8b0u: goto label_30a8b0;
        case 0x30a8b8u: goto label_30a8b8;
        default: break;
    }

    ctx->pc = 0x30a6d0u;

    // 0x30a6d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30a6d4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x30a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x30a6d8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x30a6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x30a6dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30a6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a6e0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x30a6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x30a6e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30a6e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a6e8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x30a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x30a6ec: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x30a6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x30a6f0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x30a6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x30a6f4: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x30a6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x30a6f8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x30A6F8u;
    SET_GPR_U32(ctx, 31, 0x30A700u);
    ctx->pc = 0x30A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6F8u;
    // 0x30a6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x30A6F8u, 0x30A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A700u;
label_30a700:
    // 0x30a700: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A700u;
    {
        const bool branch_taken_0x30a700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a700) {
            ctx->pc = 0x30A704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A700u;
            // 0x30a704: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A714u;
            goto label_30a714;
        }
    }
    ctx->pc = 0x30A708u;
    // 0x30a708: 0xc0c4900  jal         func_312400
    ctx->pc = 0x30A708u;
    SET_GPR_U32(ctx, 31, 0x30A710u);
    ctx->pc = 0x30A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A708u;
    // 0x30a70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x30A708u, 0x30A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A710u;
label_30a710:
    // 0x30a710: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x30a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30a714:
    // 0x30a714: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x30a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x30a718: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x30a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x30a71c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x30a71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30a720: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30a720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30a724: 0x260800a0  addiu       $t0, $s0, 0xA0
    ctx->pc = 0x30a724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x30a728: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x30a728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30a72c: 0x260b00b0  addiu       $t3, $s0, 0xB0
    ctx->pc = 0x30a72cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x30a730: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30a730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a734: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x30a734u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30a738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a73c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30a73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a740: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30a740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30a744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30a744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a748: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a74c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30a74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30a750: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x30a750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a754: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x30a754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30a758: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x30a758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a75c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30a75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30a760: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30a760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a764: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x30a764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x30a768: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30a768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a76c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x30a76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x30a770: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x30a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a774: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x30a774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x30a778: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x30a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a77c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x30a77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30a780: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x30a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a784: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x30a784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x30a788: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x30a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a78c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x30a78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x30a790: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x30a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a794: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x30a794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x30a798: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x30a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a79c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x30a79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30a7a0: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x30a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a7a4: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x30a7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x30a7a8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x30a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a7ac: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x30a7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x30a7b0: 0xc561000c  lwc1        $f1, 0xC($t3)
    ctx->pc = 0x30a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a7b4: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x30A7B4u;
    SET_GPR_U32(ctx, 31, 0x30A7BCu);
    ctx->pc = 0x30A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A7B4u;
    // 0x30a7b8: 0xe541000c  swc1        $f1, 0xC($t2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x30A7B4u, 0x30A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A7BCu;
label_30a7bc:
    // 0x30a7bc: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x30a7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30a7c0: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x30a7c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30a7c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30a7c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30a7cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30a7d0:
    // 0x30a7d0: 0x0  nop
    ctx->pc = 0x30a7d0u;
    // NOP
    // 0x30a7d4: 0x0  nop
    ctx->pc = 0x30a7d4u;
    // NOP
    // 0x30a7d8: 0x0  nop
    ctx->pc = 0x30a7d8u;
    // NOP
    // 0x30a7dc: 0x0  nop
    ctx->pc = 0x30a7dcu;
    // NOP
    // 0x30a7e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30A7E0u;
    {
        const bool branch_taken_0x30a7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7E0u;
        // 0x30a7e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7e0) {
            ctx->pc = 0x30A7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a7d0;
        }
    }
    ctx->pc = 0x30A7E8u;
    // 0x30a7e8: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x30a7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x30a7ec: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x30A7ECu;
    SET_GPR_U32(ctx, 31, 0x30A7F4u);
    ctx->pc = 0x30A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A7ECu;
    // 0x30a7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x30A7ECu, 0x30A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A7F4u;
label_30a7f4:
    // 0x30a7f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A7F4u;
    {
        const bool branch_taken_0x30a7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7F4u;
        // 0x30a7f8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7f4) {
            ctx->pc = 0x30A808u;
            goto label_30a808;
        }
    }
    ctx->pc = 0x30A7FCu;
    // 0x30a7fc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x30A7FCu;
    SET_GPR_U32(ctx, 31, 0x30A804u);
    ctx->pc = 0x30A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A7FCu;
    // 0x30a800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x30A7FCu, 0x30A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A804u;
label_30a804:
    // 0x30a804: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x30a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_30a808:
    // 0x30a808: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x30a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a80c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x30a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a814: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x30a814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30a818: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30a818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a81c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30a81cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30a820: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x30a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30a824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30a824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30a828: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30a828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30a82c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x30a82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30a830: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x30a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a834: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30a834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30a838: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x30a838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30a83c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x30a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a840: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x30a840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x30a844: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x30a844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x30a848: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x30a848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30a84c: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x30a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a850: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30a850u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30a854: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x30a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30a858: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30a858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a85c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30a85cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30a860: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x30a860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x30a864: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a868: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x30a868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x30a86c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30a86cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30a870: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x30a870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x30a874: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x30a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a878: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x30a878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30a87c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x30a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a880: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x30a880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30a884: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x30a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a888: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x30a888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x30a88c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x30a88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30a890: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x30a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a894: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x30a894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30a898: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x30a898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a89c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x30a89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x30a8a0: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x30a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a8a4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x30a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x30a8a8: 0xc0dced6  jal         func_373B58
    ctx->pc = 0x30A8A8u;
    SET_GPR_U32(ctx, 31, 0x30A8B0u);
    ctx->pc = 0x30A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A8A8u;
    // 0x30a8ac: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B58u, 0x30A8A8u, 0x30A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8B0u;
label_30a8b0:
    // 0x30a8b0: 0xc0ddcea  jal         func_3773A8
    ctx->pc = 0x30A8B0u;
    SET_GPR_U32(ctx, 31, 0x30A8B8u);
    ctx->pc = 0x3773A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3773A8u, 0x30A8B0u, 0x30A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8B8u;
label_30a8b8:
    // 0x30a8b8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x30a8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30a8bc: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x30a8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x30a8c0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x30a8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30a8c4: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x30a8c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30a8c8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x30a8c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30a8cc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x30a8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x30a8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x30A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8D0u;
        // 0x30a8d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A8D8u;
}
