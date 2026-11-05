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

// Function: entry_002b76ae
// Address: 0x2b76ae - 0x2b76d8
void entry_002b76ae_0x2b76ae(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b76ae_0x2b76ae");
#endif

    ctx->pc = 0x2b76aeu;

    // 0x2b76ae: 0x40200  sll         $zero, $a0, 8
    ctx->pc = 0x2b76aeu;
    
    // 0x2b76b2: 0x11451  .word       0x00011451                   # mthi        $zero # 00011440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b76b2u;
    ctx->hi = GPR_U64(ctx, 0);
    // 0x2b76b6: 0x302402  .word       0x00302402                   # srl         $a0, $s0, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b76b6u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x2b76ba: 0x302403  .word       0x00302403                   # sra         $a0, $s0, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b76bau;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    // 0x2b76be: 0x2402  srl         $a0, $zero, 16
    ctx->pc = 0x2b76beu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
    // 0x2b76c2: 0xae03  sra         $s5, $zero, 24
    ctx->pc = 0x2b76c2u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 0), 24));
    // 0x2b76c6: 0x8dfb0  tge         $zero, $t0, 894
    ctx->pc = 0x2b76c6u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x2b76ca: 0x10dfb1  tgeu        $zero, $s0, 894
    ctx->pc = 0x2b76cau;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x2b76ce: 0x8dfbf  dsra32      $k1, $t0, 30
    ctx->pc = 0x2b76ceu;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 8) >> (32 + 30));
    // 0x2b76d2: 0x2003e0  .word       0x002003E0                   # add         $zero, $at, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b76d2u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x2b76d6: 0xfff027bd  sd          $s0, 0x27BD($ra)
    ctx->pc = 0x2b76d6u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 10173), GPR_U64(ctx, 16));
    ctx->pc = 0x2b76d8u;
}
