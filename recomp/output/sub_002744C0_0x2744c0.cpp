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

// Function: sub_002744C0
// Address: 0x2744c0 - 0x274540
void sub_002744C0_0x2744c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002744C0_0x2744c0");
#endif

    switch (ctx->pc) {
        case 0x2744fcu: goto label_2744fc;
        case 0x27451cu: goto label_27451c;
        default: break;
    }

    ctx->pc = 0x2744c0u;

    // 0x2744c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2744c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2744c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2744c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2744c8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2744cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2744ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2744d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2744d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2744d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2744d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2744d8: 0xa2209dfc  sb          $zero, -0x6204($s1)
    ctx->pc = 0x2744d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9DFCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9DFCu, _value); } while (0);
    // 0x2744dc: 0x92020228  lbu         $v0, 0x228($s0)
    ctx->pc = 0x2744dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x2744e0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2744E0u;
    {
        const bool branch_taken_0x2744e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2744e0) {
            ctx->pc = 0x2744E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2744E0u;
            // 0x2744e4: 0xa2000371  sb          $zero, 0x371($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 881), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27452Cu;
            goto label_27452c;
        }
    }
    ctx->pc = 0x2744E8u;
    // 0x2744e8: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x2744e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x2744ec: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2744ECu;
    {
        const bool branch_taken_0x2744ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2744ec) {
            ctx->pc = 0x2744F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2744ECu;
            // 0x2744f0: 0xa2000371  sb          $zero, 0x371($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 881), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27452Cu;
            goto label_27452c;
        }
    }
    ctx->pc = 0x2744F4u;
    // 0x2744f4: 0xc09cd7a  jal         func_2735E8
    ctx->pc = 0x2744F4u;
    SET_GPR_U32(ctx, 31, 0x2744FCu);
    ctx->pc = 0x2744F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2744F4u;
    // 0x2744f8: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2735E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2735E8u, 0x2744F4u, 0x2744FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2744FCu;
label_2744fc:
    // 0x2744fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2744FCu;
    {
        const bool branch_taken_0x2744fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2744fc) {
            ctx->pc = 0x274500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2744FCu;
            // 0x274500: 0xa2000371  sb          $zero, 0x371($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 881), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27452Cu;
            goto label_27452c;
        }
    }
    ctx->pc = 0x274504u;
    // 0x274504: 0x92020371  lbu         $v0, 0x371($s0)
    ctx->pc = 0x274504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 881)));
    // 0x274508: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274508u;
    {
        const bool branch_taken_0x274508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274508u;
        // 0x27450c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274508) {
            ctx->pc = 0x274528u;
            goto label_274528;
        }
    }
    ctx->pc = 0x274510u;
    // 0x274510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274514: 0xc0cda26  jal         func_336898
    ctx->pc = 0x274514u;
    SET_GPR_U32(ctx, 31, 0x27451Cu);
    ctx->pc = 0x274518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274514u;
    // 0x274518: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x274514u, 0x27451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27451Cu;
label_27451c:
    // 0x27451c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274520: 0xa2030371  sb          $v1, 0x371($s0)
    ctx->pc = 0x274520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 881), (uint8_t)GPR_U32(ctx, 3));
    // 0x274524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274528:
    // 0x274528: 0xa2229dfc  sb          $v0, -0x6204($s1)
    ctx->pc = 0x274528u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294942204), (uint8_t)GPR_U32(ctx, 2));
label_27452c:
    // 0x27452c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27452cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x274530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274538: 0x3e00008  jr          $ra
    ctx->pc = 0x274538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274538u;
        // 0x27453c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274540u;
}
