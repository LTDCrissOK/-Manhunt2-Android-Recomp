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

// Function: sub_001812C8
// Address: 0x1812c8 - 0x181378
void sub_001812C8_0x1812c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001812C8_0x1812c8");
#endif

    switch (ctx->pc) {
        case 0x1812f8u: goto label_1812f8;
        case 0x181304u: goto label_181304;
        case 0x181360u: goto label_181360;
        default: break;
    }

    ctx->pc = 0x1812c8u;

    // 0x1812c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1812c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1812cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1812ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1812d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1812d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1812d4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1812d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1812d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1812d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1812dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1812e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1812e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1812e4: 0x24630f80  addiu       $v1, $v1, 0xF80
    ctx->pc = 0x1812e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3968));
    // 0x1812e8: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x1812e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x1812ec: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1812ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1812f0: 0xc0f7164  jal         func_3DC590
    ctx->pc = 0x1812F0u;
    SET_GPR_U32(ctx, 31, 0x1812F8u);
    ctx->pc = 0x1812F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1812F0u;
    // 0x1812f4: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC590u, 0x1812F0u, 0x1812F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1812F8u;
label_1812f8:
    // 0x1812f8: 0x26110174  addiu       $s1, $s0, 0x174
    ctx->pc = 0x1812f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    // 0x1812fc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1812FCu;
    SET_GPR_U32(ctx, 31, 0x181304u);
    ctx->pc = 0x181300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1812FCu;
    // 0x181300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1812FCu, 0x181304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181304u;
label_181304:
    // 0x181304: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x181304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x181308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x181308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18130c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181310: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x181310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x181314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x181314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181318: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x181318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18131c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x18131cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x181320: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x181320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x181324: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x181324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x181328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18132c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x18132cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x181330: 0x24a5f7c0  addiu       $a1, $a1, -0x840
    ctx->pc = 0x181330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965184));
    // 0x181334: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x181334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x181338: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x181338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18133c: 0xa203013b  sb          $v1, 0x13B($s0)
    ctx->pc = 0x18133cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x181340: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x181340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x181344: 0xe6010148  swc1        $f1, 0x148($s0)
    ctx->pc = 0x181344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x181348: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x181348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x18134c: 0xe6000140  swc1        $f0, 0x140($s0)
    ctx->pc = 0x18134cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x181350: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x181350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x181354: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x181354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x181358: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x181358u;
    SET_GPR_U32(ctx, 31, 0x181360u);
    ctx->pc = 0x18135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181358u;
    // 0x18135c: 0xa2020139  sb          $v0, 0x139($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x181358u, 0x181360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181360u;
label_181360:
    // 0x181360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18136c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18136cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181370: 0x3e00008  jr          $ra
    ctx->pc = 0x181370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181370u;
        // 0x181374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181378u;
}
