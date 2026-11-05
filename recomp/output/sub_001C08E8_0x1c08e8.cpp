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

// Function: sub_001C08E8
// Address: 0x1c08e8 - 0x1c09b0
void sub_001C08E8_0x1c08e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C08E8_0x1c08e8");
#endif

    switch (ctx->pc) {
        case 0x1c091cu: goto label_1c091c;
        case 0x1c0934u: goto label_1c0934;
        case 0x1c0970u: goto label_1c0970;
        case 0x1c0984u: goto label_1c0984;
        default: break;
    }

    ctx->pc = 0x1c08e8u;

    // 0x1c08e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c08e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c08ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1c08f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1c08f4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1c08f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1c08f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c08f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08fc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c08fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c0900: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c0900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0904: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c0904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1c0908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c0908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c090c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c090cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c0910: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1c0910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1c0914: 0xc06fad8  jal         func_1BEB60
    ctx->pc = 0x1C0914u;
    SET_GPR_U32(ctx, 31, 0x1C091Cu);
    ctx->pc = 0x1C0918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0914u;
    // 0x1c0918: 0xae8204b0  sw          $v0, 0x4B0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x1C0914u, 0x1C091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C091Cu;
label_1c091c:
    // 0x1c091c: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C091Cu;
    {
        const bool branch_taken_0x1c091c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C091Cu;
        // 0x1c0920: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c091c) {
            ctx->pc = 0x1C0978u;
            goto label_1c0978;
        }
    }
    ctx->pc = 0x1C0924u;
    // 0x1c0924: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x1c0924u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x1c0928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c092c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C092Cu;
    SET_GPR_U32(ctx, 31, 0x1C0934u);
    ctx->pc = 0x1C0930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C092Cu;
    // 0x1c0930: 0x26510f90  addiu       $s1, $s2, 0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C092Cu, 0x1C0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0934u;
label_1c0934:
    // 0x1c0934: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1c0934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c0938: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c093c: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x1c093cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x1c0940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0944: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c0944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0948: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c0948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c094c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1c094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0954: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1c0954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0958: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1c0958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1c095c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1c095cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c0960: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c0964: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c0964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c0968: 0xc06f6f2  jal         func_1BDBC8
    ctx->pc = 0x1C0968u;
    SET_GPR_U32(ctx, 31, 0x1C0970u);
    ctx->pc = 0x1C096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0968u;
    // 0x1c096c: 0xafb30034  sw          $s3, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBC8u, 0x1C0968u, 0x1C0970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0970u;
label_1c0970:
    // 0x1c0970: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0970u;
    {
        const bool branch_taken_0x1c0970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0970u;
        // 0x1c0974: 0xafb10038  sw          $s1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0970) {
            ctx->pc = 0x1C0988u;
            goto label_1c0988;
        }
    }
    ctx->pc = 0x1C0978u;
label_1c0978:
    // 0x1c0978: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c097c: 0xc06f738  jal         func_1BDCE0
    ctx->pc = 0x1C097Cu;
    SET_GPR_U32(ctx, 31, 0x1C0984u);
    ctx->pc = 0x1C0980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C097Cu;
    // 0x1c0980: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE0u, 0x1C097Cu, 0x1C0984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0984u;
label_1c0984:
    // 0x1c0984: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x1c0984u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
label_1c0988:
    // 0x1c0988: 0x26420f90  addiu       $v0, $s2, 0xF90
    ctx->pc = 0x1c0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3984));
    // 0x1c098c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c098cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0990: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c0990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c0994: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c0994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0998: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1c0998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c099c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1c099cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c09a0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1c09a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c09a4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1c09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1c09a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C09A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09A8u;
        // 0x1c09ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C09A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C09B0u;
}
