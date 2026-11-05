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

// Function: sub_003AFB68
// Address: 0x3afb68 - 0x3afc68
void sub_003AFB68_0x3afb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFB68_0x3afb68");
#endif

    ctx->pc = 0x3afb68u;

    // 0x3afb68: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x3afb68u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3afb6c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3afb6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb70: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x3afb70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3afb74: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3AFB74u;
    {
        const bool branch_taken_0x3afb74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB74u;
        // 0x3afb78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb74) {
            ctx->pc = 0x3AFC60u;
            goto label_3afc60;
        }
    }
    ctx->pc = 0x3AFB7Cu;
    // 0x3afb7c: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x3afb7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3afb80: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3afb80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3afb84: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x3afb84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3afb88: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3afb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afb8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3afb8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3afb90: 0x14850033  bne         $a0, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3AFB90u;
    {
        const bool branch_taken_0x3afb90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB90u;
        // 0x3afb94: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb90) {
            ctx->pc = 0x3AFC60u;
            goto label_3afc60;
        }
    }
    ctx->pc = 0x3AFB98u;
    // 0x3afb98: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x3afb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3afb9c: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x3afb9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x3afba0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3afba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3afba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3afba8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3afba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3afbac: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3afbacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afbb0: 0x91830004  lbu         $v1, 0x4($t4)
    ctx->pc = 0x3afbb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3afbb4: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3afbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3afbb8: 0x91820005  lbu         $v0, 0x5($t4)
    ctx->pc = 0x3afbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x3afbbc: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3afbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3afbc0: 0x91830006  lbu         $v1, 0x6($t4)
    ctx->pc = 0x3afbc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x3afbc4: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3afbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3afbc8: 0x91840007  lbu         $a0, 0x7($t4)
    ctx->pc = 0x3afbc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x3afbcc: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x3afbccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3afbd0: 0x91820008  lbu         $v0, 0x8($t4)
    ctx->pc = 0x3afbd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x3afbd4: 0x9183000a  lbu         $v1, 0xA($t4)
    ctx->pc = 0x3afbd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x3afbd8: 0x91840009  lbu         $a0, 0x9($t4)
    ctx->pc = 0x3afbd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x3afbdc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3afbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3afbe0: 0x9185000b  lbu         $a1, 0xB($t4)
    ctx->pc = 0x3afbe0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x3afbe4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3afbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afbe8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3afbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3afbec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3afbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3afbf0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3afbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3afbf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3afbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3afbf8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x3afbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x3afbfc: 0x9183000d  lbu         $v1, 0xD($t4)
    ctx->pc = 0x3afbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x3afc00: 0x9182000c  lbu         $v0, 0xC($t4)
    ctx->pc = 0x3afc00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x3afc04: 0x9184000e  lbu         $a0, 0xE($t4)
    ctx->pc = 0x3afc04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x3afc08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3afc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3afc0c: 0x9185000f  lbu         $a1, 0xF($t4)
    ctx->pc = 0x3afc0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x3afc10: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3afc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3afc14: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3afc14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3afc18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3afc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3afc1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3afc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3afc20: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3afc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3afc24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3afc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3afc28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3afc28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3afc2c: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x3afc2cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3afc30: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFC30u;
    {
        const bool branch_taken_0x3afc30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x3afc30) {
            ctx->pc = 0x3AFC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFC30u;
            // 0x3afc34: 0x81220000  lb          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFC40u;
            goto label_3afc40;
        }
    }
    ctx->pc = 0x3AFC38u;
    // 0x3afc38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AFC38u;
    {
        const bool branch_taken_0x3afc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC38u;
        // 0x3afc3c: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afc38) {
            ctx->pc = 0x3AFC5Cu;
            goto label_3afc5c;
        }
    }
    ctx->pc = 0x3AFC40u;
label_3afc40:
    // 0x3afc40: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AFC40u;
    {
        const bool branch_taken_0x3afc40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3afc40) {
            ctx->pc = 0x3AFC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFC40u;
            // 0x3afc44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFC48u;
            goto label_3afc48;
        }
    }
    ctx->pc = 0x3AFC48u;
label_3afc48:
    // 0x3afc48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3afc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3afc4c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3afc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3afc50: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x3afc50u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3afc54: 0x1012  mflo        $v0
    ctx->pc = 0x3afc54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3afc58: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x3afc58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_3afc5c:
    // 0x3afc5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3afc5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3afc60:
    // 0x3afc60: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFC68u;
}
