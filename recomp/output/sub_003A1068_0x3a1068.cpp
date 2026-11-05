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

// Function: sub_003A1068
// Address: 0x3a1068 - 0x3a1148
void sub_003A1068_0x3a1068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1068_0x3a1068");
#endif

    ctx->pc = 0x3a1068u;

    // 0x3a1068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a106c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a106cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1070: 0x2ca50010  sltiu       $a1, $a1, 0x10
    ctx->pc = 0x3a1070u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a1074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a1078: 0x25070004  addiu       $a3, $t0, 0x4
    ctx->pc = 0x3a1078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a107c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3a107cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1080: 0x14a0002e  bnez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A1080u;
    {
        const bool branch_taken_0x3a1080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1080u;
        // 0x3a1084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1080) {
            ctx->pc = 0x3A113Cu;
            goto label_3a113c;
        }
    }
    ctx->pc = 0x3A1088u;
    // 0x3a1088: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3a1088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a108c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3a108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a1090: 0x91040002  lbu         $a0, 0x2($t0)
    ctx->pc = 0x3a1090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3a1094: 0x91050001  lbu         $a1, 0x1($t0)
    ctx->pc = 0x3a1094u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3a1098: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3a1098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a109c: 0x91060003  lbu         $a2, 0x3($t0)
    ctx->pc = 0x3a109cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3a10a0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3a10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3a10a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3a10a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3a10a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3a10a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3a10ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3a10acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3a10b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a10b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a10b4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x3a10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x3a10b8: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x3a10b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3a10bc: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3a10bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a10c0: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x3a10c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3a10c4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3a10c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3a10c8: 0x90e60003  lbu         $a2, 0x3($a3)
    ctx->pc = 0x3a10c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3a10cc: 0x2507000a  addiu       $a3, $t0, 0xA
    ctx->pc = 0x3a10ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
    // 0x3a10d0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3a10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a10d4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3a10d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3a10d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3a10d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3a10dc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3a10dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3a10e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a10e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a10e4: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x3a10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x3a10e8: 0x91040008  lbu         $a0, 0x8($t0)
    ctx->pc = 0x3a10e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3a10ec: 0xa1240008  sb          $a0, 0x8($t1)
    ctx->pc = 0x3a10ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a10f0: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x3a10f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x3a10f4: 0xa1230009  sb          $v1, 0x9($t1)
    ctx->pc = 0x3a10f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a10f8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x3a10f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a10fc: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3a10fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3a1100: 0x2507000c  addiu       $a3, $t0, 0xC
    ctx->pc = 0x3a1100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x3a1104: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3a1104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3a1108: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a1108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a110c: 0xa523000a  sh          $v1, 0xA($t1)
    ctx->pc = 0x3a110cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a1110: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x3a1110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3a1114: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3a1114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a1118: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x3a1118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3a111c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3a111cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3a1120: 0x90e60003  lbu         $a2, 0x3($a3)
    ctx->pc = 0x3a1120u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3a1124: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3a1124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a1128: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3a1128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3a112c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3a112cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3a1130: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3a1130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3a1134: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a1134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a1138: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x3a1138u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_3a113c:
    // 0x3a113c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a113cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1140: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1140u;
        // 0x3a1144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1148u;
}
