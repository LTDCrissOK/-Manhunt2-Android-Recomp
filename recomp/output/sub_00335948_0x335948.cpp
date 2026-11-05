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

// Function: sub_00335948
// Address: 0x335948 - 0x335a00
void sub_00335948_0x335948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335948_0x335948");
#endif

    switch (ctx->pc) {
        case 0x3359ccu: goto label_3359cc;
        default: break;
    }

    ctx->pc = 0x335948u;

    // 0x335948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33594c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33594cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335954: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x335954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x335958: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x335958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33595c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x33595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x335960: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x335960u;
    {
        const bool branch_taken_0x335960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335960u;
        // 0x335964: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335960) {
            ctx->pc = 0x3359ECu;
            goto label_3359ec;
        }
    }
    ctx->pc = 0x335968u;
    // 0x335968: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x335968u;
    {
        const bool branch_taken_0x335968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335968u;
        // 0x33596c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335968) {
            ctx->pc = 0x3359ACu;
            goto label_3359ac;
        }
    }
    ctx->pc = 0x335970u;
    // 0x335970: 0x28a2001f  slti        $v0, $a1, 0x1F
    ctx->pc = 0x335970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x335974: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x335974u;
    {
        const bool branch_taken_0x335974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335974u;
        // 0x335978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335974) {
            ctx->pc = 0x335998u;
            goto label_335998;
        }
    }
    ctx->pc = 0x33597Cu;
    // 0x33597c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33597Cu;
    {
        const bool branch_taken_0x33597c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x335980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33597Cu;
        // 0x335980: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33597c) {
            ctx->pc = 0x3359ACu;
            goto label_3359ac;
        }
    }
    ctx->pc = 0x335984u;
    // 0x335984: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x335984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x335988: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x335988u;
    {
        const bool branch_taken_0x335988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335988u;
        // 0x33598c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335988) {
            ctx->pc = 0x3359C4u;
            goto label_3359c4;
        }
    }
    ctx->pc = 0x335990u;
    // 0x335990: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x335990u;
    {
        const bool branch_taken_0x335990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335990u;
        // 0x335994: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335990) {
            ctx->pc = 0x3359D8u;
            goto label_3359d8;
        }
    }
    ctx->pc = 0x335998u;
label_335998:
    // 0x335998: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x335998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x33599c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33599Cu;
    {
        const bool branch_taken_0x33599c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3359A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33599Cu;
        // 0x3359a0: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33599c) {
            ctx->pc = 0x3359B4u;
            goto label_3359b4;
        }
    }
    ctx->pc = 0x3359A4u;
    // 0x3359a4: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3359A4u;
    {
        const bool branch_taken_0x3359a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3359A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359A4u;
        // 0x3359a8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359a4) {
            ctx->pc = 0x3359D4u;
            goto label_3359d4;
        }
    }
    ctx->pc = 0x3359ACu;
label_3359ac:
    // 0x3359ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3359ACu;
    {
        const bool branch_taken_0x3359ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3359B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359ACu;
        // 0x3359b0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359ac) {
            ctx->pc = 0x3359D8u;
            goto label_3359d8;
        }
    }
    ctx->pc = 0x3359B4u;
label_3359b4:
    // 0x3359b4: 0x8cc3011c  lw          $v1, 0x11C($a2)
    ctx->pc = 0x3359b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
    // 0x3359b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3359b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3359bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3359BCu;
    {
        const bool branch_taken_0x3359bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3359C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359BCu;
        // 0x3359c0: 0xac620498  sw          $v0, 0x498($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359bc) {
            ctx->pc = 0x3359E4u;
            goto label_3359e4;
        }
    }
    ctx->pc = 0x3359C4u;
label_3359c4:
    // 0x3359c4: 0xc0cde32  jal         func_3378C8
    ctx->pc = 0x3359C4u;
    SET_GPR_U32(ctx, 31, 0x3359CCu);
    ctx->pc = 0x3359C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359C4u;
    // 0x3359c8: 0x8cc4004c  lw          $a0, 0x4C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378C8u, 0x3359C4u, 0x3359CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359CCu;
label_3359cc:
    // 0x3359cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3359CCu;
    {
        const bool branch_taken_0x3359cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3359D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359CCu;
        // 0x3359d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359cc) {
            ctx->pc = 0x3359F0u;
            goto label_3359f0;
        }
    }
    ctx->pc = 0x3359D4u;
label_3359d4:
    // 0x3359d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3359d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3359d8:
    // 0x3359d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3359dc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3359dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3359e0: 0xac640498  sw          $a0, 0x498($v1)
    ctx->pc = 0x3359e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1176), GPR_U32(ctx, 4));
label_3359e4:
    // 0x3359e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3359E4u;
    {
        const bool branch_taken_0x3359e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3359E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359E4u;
        // 0x3359e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359e4) {
            ctx->pc = 0x3359F0u;
            goto label_3359f0;
        }
    }
    ctx->pc = 0x3359ECu;
label_3359ec:
    // 0x3359ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3359ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3359f0:
    // 0x3359f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3359f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3359f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3359F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3359F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359F4u;
        // 0x3359f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3359F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3359FCu;
    // 0x3359fc: 0x0  nop
    ctx->pc = 0x3359fcu;
    // NOP
    ctx->pc = 0x335a00u;
}
