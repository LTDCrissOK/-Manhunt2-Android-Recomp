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

// Function: sub_00206188
// Address: 0x206188 - 0x206278
void sub_00206188_0x206188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206188_0x206188");
#endif

    switch (ctx->pc) {
        case 0x2061b0u: goto label_2061b0;
        case 0x2061e4u: goto label_2061e4;
        case 0x2061f8u: goto label_2061f8;
        case 0x206214u: goto label_206214;
        case 0x206234u: goto label_206234;
        case 0x206244u: goto label_206244;
        default: break;
    }

    ctx->pc = 0x206188u;

    // 0x206188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20618c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20618cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x206194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20619c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2061a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2061a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2061a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2061a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2061a8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2061A8u;
    SET_GPR_U32(ctx, 31, 0x2061B0u);
    ctx->pc = 0x2061ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061A8u;
    // 0x2061ac: 0x24a50b58  addiu       $a1, $a1, 0xB58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2061A8u, 0x2061B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061B0u;
label_2061b0:
    // 0x2061b0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2061b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2061b4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2061b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2061b8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2061b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2061bc: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2061bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2061c0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2061c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2061c4: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x2061c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2061c8: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2061c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2061cc: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2061ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2061d0: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2061d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2061d4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2061d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2061d8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2061d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2061dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2061DCu;
    SET_GPR_U32(ctx, 31, 0x2061E4u);
    ctx->pc = 0x2061E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061DCu;
    // 0x2061e0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2061DCu, 0x2061E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061E4u;
label_2061e4:
    // 0x2061e4: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x2061e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2061e8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2061e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2061ec: 0xa2120031  sb          $s2, 0x31($s0)
    ctx->pc = 0x2061ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 18));
    // 0x2061f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2061F0u;
    SET_GPR_U32(ctx, 31, 0x2061F8u);
    ctx->pc = 0x2061F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061F0u;
    // 0x2061f4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2061F0u, 0x2061F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061F8u;
label_2061f8:
    // 0x2061f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2061f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2061fc: 0xa2120068  sb          $s2, 0x68($s0)
    ctx->pc = 0x2061fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 18));
    // 0x206200: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x206200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x206204: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x206204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x206208: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x206208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x20620c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20620Cu;
    SET_GPR_U32(ctx, 31, 0x206214u);
    ctx->pc = 0x206210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20620Cu;
    // 0x206210: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20620Cu, 0x206214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206214u;
label_206214:
    // 0x206214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206218: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x206218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20621c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x206220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x206224: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x206224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x206228: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x206228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20622c: 0xc08245a  jal         func_209168
    ctx->pc = 0x20622Cu;
    SET_GPR_U32(ctx, 31, 0x206234u);
    ctx->pc = 0x206230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20622Cu;
    // 0x206230: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209168u, 0x20622Cu, 0x206234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206234u;
label_206234:
    // 0x206234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x206234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20623c: 0xc0824dc  jal         func_209370
    ctx->pc = 0x20623Cu;
    SET_GPR_U32(ctx, 31, 0x206244u);
    ctx->pc = 0x206240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20623Cu;
    // 0x206240: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209370u, 0x20623Cu, 0x206244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206244u;
label_206244:
    // 0x206244: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x206244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x206248: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x206248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x20624c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x20624cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x206250: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x206250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x206254: 0x7e000050  sq          $zero, 0x50($s0)
    ctx->pc = 0x206254u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 0));
    // 0x206258: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x206258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20625c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20625cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206264: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206268: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x206268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20626c: 0x3e00008  jr          $ra
    ctx->pc = 0x20626Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20626Cu;
        // 0x206270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20626Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206274u;
    // 0x206274: 0x0  nop
    ctx->pc = 0x206274u;
    // NOP
    ctx->pc = 0x206278u;
}
