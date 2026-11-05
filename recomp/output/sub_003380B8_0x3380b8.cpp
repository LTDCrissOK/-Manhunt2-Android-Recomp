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

// Function: sub_003380B8
// Address: 0x3380b8 - 0x338138
void sub_003380B8_0x3380b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003380B8_0x3380b8");
#endif

    switch (ctx->pc) {
        case 0x3380e8u: goto label_3380e8;
        case 0x338120u: goto label_338120;
        default: break;
    }

    ctx->pc = 0x3380b8u;

    // 0x3380b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3380b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3380bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3380bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3380c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3380c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3380c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3380c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3380c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3380c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3380cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3380ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3380d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3380d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3380d4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3380d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3380d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3380D8u;
    {
        const bool branch_taken_0x3380d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3380DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380D8u;
        // 0x3380dc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380d8) {
            ctx->pc = 0x3380E8u;
            goto label_3380e8;
        }
    }
    ctx->pc = 0x3380E0u;
    // 0x3380e0: 0xc0ce002  jal         func_338008
    ctx->pc = 0x3380E0u;
    SET_GPR_U32(ctx, 31, 0x3380E8u);
    ctx->pc = 0x338008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338008u, 0x3380E0u, 0x3380E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3380E8u;
label_3380e8:
    // 0x3380e8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3380e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3380ec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3380ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3380f0: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x3380f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3380f4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x3380f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3380f8: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x3380f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x3380fc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3380fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x338100: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x338100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x338104: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x338104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x338108: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x338108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33810c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x338110: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x338110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x338114: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x338114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338118: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x338118u;
    SET_GPR_U32(ctx, 31, 0x338120u);
    ctx->pc = 0x33811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338118u;
    // 0x33811c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x338118u, 0x338120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338120u;
label_338120:
    // 0x338120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x338128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33812c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33812cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x338130: 0x3e00008  jr          $ra
    ctx->pc = 0x338130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338130u;
        // 0x338134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338138u;
}
