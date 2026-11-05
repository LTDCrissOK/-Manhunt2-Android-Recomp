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

// Function: sub_001441E8
// Address: 0x1441e8 - 0x144260
void sub_001441E8_0x1441e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001441E8_0x1441e8");
#endif

    switch (ctx->pc) {
        case 0x144210u: goto label_144210;
        case 0x14422cu: goto label_14422c;
        case 0x14423cu: goto label_14423c;
        default: break;
    }

    ctx->pc = 0x1441e8u;

    // 0x1441e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1441e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1441ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1441ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1441f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1441f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1441f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1441f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1441f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1441fc: 0x92020b11  lbu         $v0, 0xB11($s0)
    ctx->pc = 0x1441fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2833)));
    // 0x144200: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x144200u;
    {
        const bool branch_taken_0x144200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144200u;
        // 0x144204: 0x30b100ff  andi        $s1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144200) {
            ctx->pc = 0x144248u;
            goto label_144248;
        }
    }
    ctx->pc = 0x144208u;
    // 0x144208: 0xc04e866  jal         func_13A198
    ctx->pc = 0x144208u;
    SET_GPR_U32(ctx, 31, 0x144210u);
    ctx->pc = 0x14420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144208u;
    // 0x14420c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x144208u, 0x144210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144210u;
label_144210:
    // 0x144210: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x144210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144214: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x144214u;
    {
        const bool branch_taken_0x144214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x144214) {
            ctx->pc = 0x144218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144214u;
            // 0x144218: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14424Cu;
            goto label_14424c;
        }
    }
    ctx->pc = 0x14421Cu;
    // 0x14421c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x144220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144224: 0xc04e860  jal         func_13A180
    ctx->pc = 0x144224u;
    SET_GPR_U32(ctx, 31, 0x14422Cu);
    ctx->pc = 0x144228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144224u;
    // 0x144228: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x144224u, 0x14422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14422Cu;
label_14422c:
    // 0x14422c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14422cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144234: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x144234u;
    SET_GPR_U32(ctx, 31, 0x14423Cu);
    ctx->pc = 0x144238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144234u;
    // 0x144238: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x144234u, 0x14423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14423Cu;
label_14423c:
    // 0x14423c: 0x92020b11  lbu         $v0, 0xB11($s0)
    ctx->pc = 0x14423cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2833)));
    // 0x144240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x144244: 0xa2020b11  sb          $v0, 0xB11($s0)
    ctx->pc = 0x144244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2833), (uint8_t)GPR_U32(ctx, 2));
label_144248:
    // 0x144248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14424c:
    // 0x14424c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14424cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144254: 0x3e00008  jr          $ra
    ctx->pc = 0x144254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144254u;
        // 0x144258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14425Cu;
    // 0x14425c: 0x0  nop
    ctx->pc = 0x14425cu;
    // NOP
    ctx->pc = 0x144260u;
}
