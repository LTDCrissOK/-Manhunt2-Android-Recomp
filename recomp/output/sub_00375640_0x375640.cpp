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

// Function: sub_00375640
// Address: 0x375640 - 0x3756c8
void sub_00375640_0x375640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375640_0x375640");
#endif

    ctx->pc = 0x375640u;

    // 0x375640: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x375640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x375644: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x375644u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x375648: 0x2442cd40  addiu       $v0, $v0, -0x32C0
    ctx->pc = 0x375648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954304));
    // 0x37564c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37564cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375650: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x375650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x375654: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x375654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x375658: 0x246980a0  addiu       $t1, $v1, -0x7F60
    ctx->pc = 0x375658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934688));
    // 0x37565c: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x37565cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x375660: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x375660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x375664: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x375664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375668: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x375668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37566c: 0x38a50004  xori        $a1, $a1, 0x4
    ctx->pc = 0x37566cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
    // 0x375670: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x375670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x375674: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x375674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x375678: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x375678u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37567c: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x37567cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x375680: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x375680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x375684: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x375684u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x375688: 0x3a44021  addu        $t0, $sp, $a0
    ctx->pc = 0x375688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x37568c: 0x3c02fc0f  lui         $v0, 0xFC0F
    ctx->pc = 0x37568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64527 << 16));
    // 0x375690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x375690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x375694: 0x8d24cd00  lw          $a0, -0x3300($t1)
    ctx->pc = 0x375694u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x375698: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x375698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x37569c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x37569cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3756a0: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x3756a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x3756a4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3756a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3756a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3756a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3756ac: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x3756acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x3756b0: 0xad24cd00  sw          $a0, -0x3300($t1)
    ctx->pc = 0x3756b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294954240), GPR_U32(ctx, 4));
    // 0x3756b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3756B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3756B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756B4u;
        // 0x3756b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3756B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3756BCu;
    // 0x3756bc: 0x0  nop
    ctx->pc = 0x3756bcu;
    // NOP
    // 0x3756c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3756c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3756c4: 0x0  nop
    ctx->pc = 0x3756c4u;
    // NOP
    ctx->pc = 0x3756c8u;
}
