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

// Function: sub_001D7308
// Address: 0x1d7308 - 0x1d7380
void sub_001D7308_0x1d7308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7308_0x1d7308");
#endif

    switch (ctx->pc) {
        case 0x1d731cu: goto label_1d731c;
        case 0x1d7324u: goto label_1d7324;
        case 0x1d7330u: goto label_1d7330;
        case 0x1d7364u: goto label_1d7364;
        default: break;
    }

    ctx->pc = 0x1d7308u;

    // 0x1d7308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d730c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7310: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7314: 0xc0760da  jal         func_1D8368
    ctx->pc = 0x1D7314u;
    SET_GPR_U32(ctx, 31, 0x1D731Cu);
    ctx->pc = 0x1D7318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7314u;
    // 0x1d7318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8368u, 0x1D7314u, 0x1D731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D731Cu;
label_1d731c:
    // 0x1d731c: 0xc0760ea  jal         func_1D83A8
    ctx->pc = 0x1D731Cu;
    SET_GPR_U32(ctx, 31, 0x1D7324u);
    ctx->pc = 0x1D83A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83A8u, 0x1D731Cu, 0x1D7324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7324u;
label_1d7324:
    // 0x1d7324: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d7324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d7328: 0xc0b9426  jal         func_2E5098
    ctx->pc = 0x1D7328u;
    SET_GPR_U32(ctx, 31, 0x1D7330u);
    ctx->pc = 0x1D732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7328u;
    // 0x1d732c: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5098u, 0x1D7328u, 0x1D7330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7330u;
label_1d7330:
    // 0x1d7330: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d7330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d7334: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1d7334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x1d7338: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1d7338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d733c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1d733cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1d7340: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1d7340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1d7344: 0x24a58f20  addiu       $a1, $a1, -0x70E0
    ctx->pc = 0x1d7344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938400));
    // 0x1d7348: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d734c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1d734cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1d7350: 0xacf09160  sw          $s0, -0x6EA0($a3)
    ctx->pc = 0x1d7350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3F9160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9160u, _value); } while (0);
    // 0x1d7354: 0x248490e0  addiu       $a0, $a0, -0x6F20
    ctx->pc = 0x1d7354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938848));
    // 0x1d7358: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1d7358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d735c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1D735Cu;
    SET_GPR_U32(ctx, 31, 0x1D7364u);
    ctx->pc = 0x1D7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D735Cu;
    // 0x1d7360: 0xacc29164  sw          $v0, -0x6E9C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294938980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1D735Cu, 0x1D7364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7364u;
label_1d7364:
    // 0x1d7364: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d7364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d7368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d736c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d736cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7374: 0xa0629168  sb          $v0, -0x6E98($v1)
    ctx->pc = 0x1d7374u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9168u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9168u, _value); } while (0);
    // 0x1d7378: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7378u;
        // 0x1d737c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7380u;
}
