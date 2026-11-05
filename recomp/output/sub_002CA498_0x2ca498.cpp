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

// Function: sub_002CA498
// Address: 0x2ca498 - 0x2ca518
void sub_002CA498_0x2ca498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA498_0x2ca498");
#endif

    switch (ctx->pc) {
        case 0x2ca4b8u: goto label_2ca4b8;
        case 0x2ca4c0u: goto label_2ca4c0;
        default: break;
    }

    ctx->pc = 0x2ca498u;

    // 0x2ca498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca4a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca4a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ca4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca4b0: 0xc0b289c  jal         func_2CA270
    ctx->pc = 0x2CA4B0u;
    SET_GPR_U32(ctx, 31, 0x2CA4B8u);
    ctx->pc = 0x2CA4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4B0u;
    // 0x2ca4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA270u, 0x2CA4B0u, 0x2CA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4B8u;
label_2ca4b8:
    // 0x2ca4b8: 0xc0fb3c8  jal         func_3ECF20
    ctx->pc = 0x2CA4B8u;
    SET_GPR_U32(ctx, 31, 0x2CA4C0u);
    ctx->pc = 0x2CA4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4B8u;
    // 0x2ca4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ECF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ECF20u, 0x2CA4B8u, 0x2CA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4C0u;
label_2ca4c0:
    // 0x2ca4c0: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x2ca4c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2ca4c4: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2ca4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2ca4c8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ca4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ca4cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ca4ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ca4d0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2ca4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ca4d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca4d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca4dc: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2ca4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2ca4e0: 0x96030060  lhu         $v1, 0x60($s0)
    ctx->pc = 0x2ca4e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2ca4e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ca4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ca4e8: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x2ca4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca4ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca4f0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2ca4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ca4f4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2ca4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2ca4f8: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x2ca4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x2ca4fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca500: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA500u;
        // 0x2ca504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA508u;
    // 0x2ca508: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2ca508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ca50c: 0x0  nop
    ctx->pc = 0x2ca50cu;
    // NOP
    // 0x2ca510: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ca510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ca514: 0x0  nop
    ctx->pc = 0x2ca514u;
    // NOP
    ctx->pc = 0x2ca518u;
}
