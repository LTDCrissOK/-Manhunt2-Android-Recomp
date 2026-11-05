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

// Function: sub_00209778
// Address: 0x209778 - 0x2097f8
void sub_00209778_0x209778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209778_0x209778");
#endif

    switch (ctx->pc) {
        case 0x2097dcu: goto label_2097dc;
        case 0x2097e4u: goto label_2097e4;
        default: break;
    }

    ctx->pc = 0x209778u;

    // 0x209778: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x209778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x20977c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20977cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209780: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x209780u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
    // 0x209784: 0x2463d0c0  addiu       $v1, $v1, -0x2F40
    ctx->pc = 0x209784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955200));
    // 0x209788: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x209788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x20978c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209790: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209794: 0x2547f0c0  addiu       $a3, $t2, -0xF40
    ctx->pc = 0x209794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963392));
    // 0x209798: 0xac432b5c  sw          $v1, 0x2B5C($v0)
    ctx->pc = 0x209798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482B5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B5Cu, _value); } while (0);
    // 0x20979c: 0x2409100f  addiu       $t1, $zero, 0x100F
    ctx->pc = 0x20979cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4111));
    // 0x2097a0: 0xa4e905c2  sh          $t1, 0x5C2($a3)
    ctx->pc = 0x2097a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x66F682u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x66F682u, _value); } while (0);
    // 0x2097a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2097a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2097ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2097b0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2097b4: 0xaca02b60  sw          $zero, 0x2B60($a1)
    ctx->pc = 0x2097b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B60u, _value); } while (0);
    // 0x2097b8: 0xacc02b64  sw          $zero, 0x2B64($a2)
    ctx->pc = 0x2097b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482B64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B64u, _value); } while (0);
    // 0x2097bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2097bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2097c0: 0xa548f0c0  sh          $t0, -0xF40($t2)
    ctx->pc = 0x2097c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x66F0C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x66F0C0u, _value); } while (0);
    // 0x2097c4: 0x24842b68  addiu       $a0, $a0, 0x2B68
    ctx->pc = 0x2097c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11112));
    // 0x2097c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2097c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2097ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2097d0: 0xa4e805c0  sh          $t0, 0x5C0($a3)
    ctx->pc = 0x2097d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x66F680u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x66F680u, _value); } while (0);
    // 0x2097d4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2097D4u;
    SET_GPR_U32(ctx, 31, 0x2097DCu);
    ctx->pc = 0x2097D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097D4u;
    // 0x2097d8: 0xa4e90002  sh          $t1, 0x2($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2097D4u, 0x2097DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097DCu;
label_2097dc:
    // 0x2097dc: 0xc0827fe  jal         func_209FF8
    ctx->pc = 0x2097DCu;
    SET_GPR_U32(ctx, 31, 0x2097E4u);
    ctx->pc = 0x2097E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097DCu;
    // 0x2097e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FF8u, 0x2097DCu, 0x2097E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097E4u;
label_2097e4:
    // 0x2097e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2097e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2097e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2097e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2097ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2097ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2097F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097ECu;
        // 0x2097f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2097F4u;
    // 0x2097f4: 0x0  nop
    ctx->pc = 0x2097f4u;
    // NOP
    ctx->pc = 0x2097f8u;
}
