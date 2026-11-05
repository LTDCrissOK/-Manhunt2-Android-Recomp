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

// Function: sub_003A03E0
// Address: 0x3a03e0 - 0x3a0478
void sub_003A03E0_0x3a03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A03E0_0x3a03e0");
#endif

    ctx->pc = 0x3a03e0u;

    // 0x3a03e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a03e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3a03e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a03e8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3a03e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a03ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a03ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a03f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A03F0u;
    {
        const bool branch_taken_0x3a03f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A03F0u;
        // 0x3a03f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a03f0) {
            ctx->pc = 0x3A0410u;
            goto label_3a0410;
        }
    }
    ctx->pc = 0x3A03F8u;
    // 0x3a03f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a03f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a03fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a03fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0400: 0x2484c3b0  addiu       $a0, $a0, -0x3C50
    ctx->pc = 0x3a0400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951856));
    // 0x3a0404: 0x80ecbf4  j           func_3B2FD0
    ctx->pc = 0x3A0404u;
    ctx->pc = 0x3A0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0404u;
    // 0x3a0408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A040Cu;
    // 0x3a040c: 0x0  nop
    ctx->pc = 0x3a040cu;
    // NOP
label_3a0410:
    // 0x3a0410: 0x28c20021  slti        $v0, $a2, 0x21
    ctx->pc = 0x3a0410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x3a0414: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0414u;
    {
        const bool branch_taken_0x3a0414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0414) {
            ctx->pc = 0x3A0418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0414u;
            // 0x3a0418: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0430u;
            goto label_3a0430;
        }
    }
    ctx->pc = 0x3A041Cu;
    // 0x3a041c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a0420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0424: 0x2484c3d8  addiu       $a0, $a0, -0x3C28
    ctx->pc = 0x3a0424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951896));
    // 0x3a0428: 0x80ecbf4  j           func_3B2FD0
    ctx->pc = 0x3A0428u;
    ctx->pc = 0x3A042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0428u;
    // 0x3a042c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A0430u;
label_3a0430:
    // 0x3a0430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a0434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a0438: 0xac4701ec  sw          $a3, 0x1EC($v0)
    ctx->pc = 0x3a0438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 7));
    // 0x3a043c: 0x8c6601e8  lw          $a2, 0x1E8($v1)
    ctx->pc = 0x3a043cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x3a0440: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3a0440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3a0444: 0x80e8114  j           func_3A0450
    ctx->pc = 0x3A0444u;
    ctx->pc = 0x3A0448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0444u;
    // 0x3a0448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0450u;
    goto label_3a0450;
    ctx->pc = 0x3A044Cu;
    // 0x3a044c: 0x0  nop
    ctx->pc = 0x3a044cu;
    // NOP
label_3a0450:
    // 0x3a0450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a0450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a0454: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3a0454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a0458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a045c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a0460: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3a0460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0464: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3a0464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a0468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a046c: 0x80e7058  j           func_39C160
    ctx->pc = 0x3A046Cu;
    ctx->pc = 0x3A0470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A046Cu;
    // 0x3a0470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C160u;
    sub_0039C160_0x39c160(rdram, ctx, runtime); return;
    ctx->pc = 0x3A0474u;
    // 0x3a0474: 0x0  nop
    ctx->pc = 0x3a0474u;
    // NOP
    ctx->pc = 0x3a0478u;
}
