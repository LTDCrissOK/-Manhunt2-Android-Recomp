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

// Function: sub_003046F8
// Address: 0x3046f8 - 0x304768
void sub_003046F8_0x3046f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003046F8_0x3046f8");
#endif

    switch (ctx->pc) {
        case 0x304728u: goto label_304728;
        case 0x30474cu: goto label_30474c;
        default: break;
    }

    ctx->pc = 0x3046f8u;

    // 0x3046f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3046f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3046fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3046fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x304708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30470c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x304710: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x304710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304714: 0x92021418  lbu         $v0, 0x1418($s0)
    ctx->pc = 0x304714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5144)));
    // 0x304718: 0x1052000c  beq         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x304718u;
    {
        const bool branch_taken_0x304718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x30471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304718u;
        // 0x30471c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304718) {
            ctx->pc = 0x30474Cu;
            goto label_30474c;
        }
    }
    ctx->pc = 0x304720u;
    // 0x304720: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x304720u;
    SET_GPR_U32(ctx, 31, 0x304728u);
    ctx->pc = 0x304724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304720u;
    // 0x304724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x304720u, 0x304728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304728u;
label_304728:
    // 0x304728: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x304728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30472c: 0xfa011430  sqc2        $vf1, 0x1430($s0)
    ctx->pc = 0x30472cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5168), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x304730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x304734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304738: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30473c: 0xae111420  sw          $s1, 0x1420($s0)
    ctx->pc = 0x30473cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5152), GPR_U32(ctx, 17));
    // 0x304740: 0xa2121418  sb          $s2, 0x1418($s0)
    ctx->pc = 0x304740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5144), (uint8_t)GPR_U32(ctx, 18));
    // 0x304744: 0xc0a0870  jal         func_2821C0
    ctx->pc = 0x304744u;
    SET_GPR_U32(ctx, 31, 0x30474Cu);
    ctx->pc = 0x304748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304744u;
    // 0x304748: 0xe6001424  swc1        $f0, 0x1424($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2821C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2821C0u, 0x304744u, 0x30474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30474Cu;
label_30474c:
    // 0x30474c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30474cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304754: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x304754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304758: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x304758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30475c: 0x3e00008  jr          $ra
    ctx->pc = 0x30475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30475Cu;
        // 0x304760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304764u;
    // 0x304764: 0x0  nop
    ctx->pc = 0x304764u;
    // NOP
    ctx->pc = 0x304768u;
}
