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

// Function: sub_002811C8
// Address: 0x2811c8 - 0x281258
void sub_002811C8_0x2811c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002811C8_0x2811c8");
#endif

    switch (ctx->pc) {
        case 0x2811e4u: goto label_2811e4;
        case 0x2811f0u: goto label_2811f0;
        case 0x281210u: goto label_281210;
        case 0x281220u: goto label_281220;
        case 0x281228u: goto label_281228;
        case 0x281230u: goto label_281230;
        case 0x281238u: goto label_281238;
        case 0x281240u: goto label_281240;
        default: break;
    }

    ctx->pc = 0x2811c8u;

    // 0x2811c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2811c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2811cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2811ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2811d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2811d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2811d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2811d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2811d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2811dc: 0xc0db256  jal         func_36C958
    ctx->pc = 0x2811DCu;
    SET_GPR_U32(ctx, 31, 0x2811E4u);
    ctx->pc = 0x2811E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811DCu;
    // 0x2811e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x2811DCu, 0x2811E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811E4u;
label_2811e4:
    // 0x2811e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2811e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811e8: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x2811E8u;
    SET_GPR_U32(ctx, 31, 0x2811F0u);
    ctx->pc = 0x2811ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811E8u;
    // 0x2811ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x2811E8u, 0x2811F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811F0u;
label_2811f0:
    // 0x2811f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2811F0u;
    {
        const bool branch_taken_0x2811f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2811F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811F0u;
        // 0x2811f4: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811f0) {
            ctx->pc = 0x281230u;
            goto label_281230;
        }
    }
    ctx->pc = 0x2811F8u;
    // 0x2811f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2811f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811fc: 0x2610f130  addiu       $s0, $s0, -0xED0
    ctx->pc = 0x2811fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963504));
    // 0x281200: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x281200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x281204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x281204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281208: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x281208u;
    SET_GPR_U32(ctx, 31, 0x281210u);
    ctx->pc = 0x28120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281208u;
    // 0x28120c: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x281208u, 0x281210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281210u;
label_281210:
    // 0x281210: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x281210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x281214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281218: 0xc0a0462  jal         func_281188
    ctx->pc = 0x281218u;
    SET_GPR_U32(ctx, 31, 0x281220u);
    ctx->pc = 0x28121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281218u;
    // 0x28121c: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281188u, 0x281218u, 0x281220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281220u;
label_281220:
    // 0x281220: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x281220u;
    SET_GPR_U32(ctx, 31, 0x281228u);
    ctx->pc = 0x281224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281220u;
    // 0x281224: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x281220u, 0x281228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281228u;
label_281228:
    // 0x281228: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x281228u;
    SET_GPR_U32(ctx, 31, 0x281230u);
    ctx->pc = 0x28122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281228u;
    // 0x28122c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x281228u, 0x281230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281230u;
label_281230:
    // 0x281230: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x281230u;
    SET_GPR_U32(ctx, 31, 0x281238u);
    ctx->pc = 0x281234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281230u;
    // 0x281234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x281230u, 0x281238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281238u;
label_281238:
    // 0x281238: 0xc0db2b6  jal         func_36CAD8
    ctx->pc = 0x281238u;
    SET_GPR_U32(ctx, 31, 0x281240u);
    ctx->pc = 0x28123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281238u;
    // 0x28123c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x281238u, 0x281240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281240u;
label_281240:
    // 0x281240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281244: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x281244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x281248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28124c: 0x3e00008  jr          $ra
    ctx->pc = 0x28124Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28124Cu;
        // 0x281250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28124Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281254u;
    // 0x281254: 0x0  nop
    ctx->pc = 0x281254u;
    // NOP
    ctx->pc = 0x281258u;
}
