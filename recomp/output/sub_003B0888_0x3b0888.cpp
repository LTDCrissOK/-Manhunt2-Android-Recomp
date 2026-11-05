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

// Function: sub_003B0888
// Address: 0x3b0888 - 0x3b0948
void sub_003B0888_0x3b0888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0888_0x3b0888");
#endif

    ctx->pc = 0x3b0888u;

    // 0x3b0888: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b0888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b088c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b088cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b0890: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3b0890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3b0894: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3b0894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3b0898: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b0898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b089c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b089cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b08a0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x3b08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3b08a4: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B08A4u;
    {
        const bool branch_taken_0x3b08a4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3B08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08A4u;
        // 0x3b08a8: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b08a4) {
            ctx->pc = 0x3B08C0u;
            goto label_3b08c0;
        }
    }
    ctx->pc = 0x3B08ACu;
    // 0x3b08ac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b08acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b08b0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x3b08b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3b08b4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b08b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b08b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b08bc: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x3b08bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
label_3b08c0:
    // 0x3b08c0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3b08c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3b08c4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b08c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b08c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b08c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b08cc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x3b08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b08d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B08D0u;
    {
        const bool branch_taken_0x3b08d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08D0u;
        // 0x3b08d4: 0xa0a20004  sb          $v0, 0x4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b08d0) {
            ctx->pc = 0x3B08E0u;
            goto label_3b08e0;
        }
    }
    ctx->pc = 0x3B08D8u;
    // 0x3b08d8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b08d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b08dc: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x3b08dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_3b08e0:
    // 0x3b08e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b08e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b08e4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b08e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b08e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b08e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b08ec: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x3b08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b08f0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B08F0u;
    {
        const bool branch_taken_0x3b08f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08F0u;
        // 0x3b08f4: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b08f0) {
            ctx->pc = 0x3B0900u;
            goto label_3b0900;
        }
    }
    ctx->pc = 0x3B08F8u;
    // 0x3b08f8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b08f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b08fc: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x3b08fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_3b0900:
    // 0x3b0900: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b0900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b0904: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b0904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b0908: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b0908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b090c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x3b090cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b0910: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0910u;
    {
        const bool branch_taken_0x3b0910 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0910u;
        // 0x3b0914: 0xa0a20008  sb          $v0, 0x8($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0910) {
            ctx->pc = 0x3B0920u;
            goto label_3b0920;
        }
    }
    ctx->pc = 0x3B0918u;
    // 0x3b0918: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b0918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b091c: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x3b091cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
label_3b0920:
    // 0x3b0920: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b0920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b0924: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b0924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b0928: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b0928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b092c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x3b092cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b0930: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0930u;
    {
        const bool branch_taken_0x3b0930 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0930u;
        // 0x3b0934: 0xa0a2000a  sb          $v0, 0xA($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0930) {
            ctx->pc = 0x3B0940u;
            goto label_3b0940;
        }
    }
    ctx->pc = 0x3B0938u;
    // 0x3b0938: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3b0938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b093c: 0xa0a2000b  sb          $v0, 0xB($a1)
    ctx->pc = 0x3b093cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 2));
label_3b0940:
    // 0x3b0940: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0948u;
}
