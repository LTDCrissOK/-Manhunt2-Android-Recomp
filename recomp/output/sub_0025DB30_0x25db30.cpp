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

// Function: sub_0025DB30
// Address: 0x25db30 - 0x25e100
void sub_0025DB30_0x25db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DB30_0x25db30");
#endif

    switch (ctx->pc) {
        case 0x25e0fcu: goto label_25e0fc;
        default: break;
    }

    ctx->pc = 0x25db30u;

    // 0x25db30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25db30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25db34: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x25db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x25db38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25db38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25db3c: 0x2c62008d  sltiu       $v0, $v1, 0x8D
    ctx->pc = 0x25db3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)141) ? 1 : 0);
    // 0x25db40: 0x1040016f  beqz        $v0, . + 4 + (0x16F << 2)
    ctx->pc = 0x25DB40u;
    {
        const bool branch_taken_0x25db40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB40u;
        // 0x25db44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db40) {
            ctx->pc = 0x25E100u;
            return;
        }
    }
    ctx->pc = 0x25DB48u;
    // 0x25db48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x25db48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x25db4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25db50: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x25db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
    // 0x25db54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25db54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25db58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25db58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25db5c: 0x800008  jr          $a0
    ctx->pc = 0x25DB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25DB64u: goto label_25db64;
            case 0x25DB74u: goto label_25db74;
            case 0x25DB84u: goto label_25db84;
            case 0x25DB94u: goto label_25db94;
            case 0x25DBA4u: goto label_25dba4;
            case 0x25DBB4u: goto label_25dbb4;
            case 0x25DBC4u: goto label_25dbc4;
            case 0x25DBD4u: goto label_25dbd4;
            case 0x25DBE4u: goto label_25dbe4;
            case 0x25DBF4u: goto label_25dbf4;
            case 0x25DC04u: goto label_25dc04;
            case 0x25DC14u: goto label_25dc14;
            case 0x25DC24u: goto label_25dc24;
            case 0x25DC34u: goto label_25dc34;
            case 0x25DC44u: goto label_25dc44;
            case 0x25DC54u: goto label_25dc54;
            case 0x25DC64u: goto label_25dc64;
            case 0x25DC74u: goto label_25dc74;
            case 0x25DC84u: goto label_25dc84;
            case 0x25DC94u: goto label_25dc94;
            case 0x25DCA4u: goto label_25dca4;
            case 0x25DCB4u: goto label_25dcb4;
            case 0x25DCC4u: goto label_25dcc4;
            case 0x25DCD4u: goto label_25dcd4;
            case 0x25DCE4u: goto label_25dce4;
            case 0x25DCF4u: goto label_25dcf4;
            case 0x25DD04u: goto label_25dd04;
            case 0x25DD14u: goto label_25dd14;
            case 0x25DD24u: goto label_25dd24;
            case 0x25DD34u: goto label_25dd34;
            case 0x25DD44u: goto label_25dd44;
            case 0x25DD54u: goto label_25dd54;
            case 0x25DD64u: goto label_25dd64;
            case 0x25DD74u: goto label_25dd74;
            case 0x25DD84u: goto label_25dd84;
            case 0x25DD94u: goto label_25dd94;
            case 0x25DDA4u: goto label_25dda4;
            case 0x25DDB4u: goto label_25ddb4;
            case 0x25DDC4u: goto label_25ddc4;
            case 0x25DDD4u: goto label_25ddd4;
            case 0x25DDE4u: goto label_25dde4;
            case 0x25DDF4u: goto label_25ddf4;
            case 0x25DE04u: goto label_25de04;
            case 0x25DE14u: goto label_25de14;
            case 0x25DE24u: goto label_25de24;
            case 0x25DE34u: goto label_25de34;
            case 0x25DE44u: goto label_25de44;
            case 0x25DE54u: goto label_25de54;
            case 0x25DE64u: goto label_25de64;
            case 0x25DE74u: goto label_25de74;
            case 0x25DE84u: goto label_25de84;
            case 0x25DE94u: goto label_25de94;
            case 0x25DEA4u: goto label_25dea4;
            case 0x25DEB4u: goto label_25deb4;
            case 0x25DEC4u: goto label_25dec4;
            case 0x25DED4u: goto label_25ded4;
            case 0x25DEE4u: goto label_25dee4;
            case 0x25DEF4u: goto label_25def4;
            case 0x25DF04u: goto label_25df04;
            case 0x25DF14u: goto label_25df14;
            case 0x25DF24u: goto label_25df24;
            case 0x25DF34u: goto label_25df34;
            case 0x25DF44u: goto label_25df44;
            case 0x25DF54u: goto label_25df54;
            case 0x25DF64u: goto label_25df64;
            case 0x25DF74u: goto label_25df74;
            case 0x25DF84u: goto label_25df84;
            case 0x25DF94u: goto label_25df94;
            case 0x25DFA4u: goto label_25dfa4;
            case 0x25DFB4u: goto label_25dfb4;
            case 0x25DFC4u: goto label_25dfc4;
            case 0x25DFD4u: goto label_25dfd4;
            case 0x25DFE4u: goto label_25dfe4;
            case 0x25DFF4u: goto label_25dff4;
            case 0x25E004u: goto label_25e004;
            case 0x25E014u: goto label_25e014;
            case 0x25E024u: goto label_25e024;
            case 0x25E034u: goto label_25e034;
            case 0x25E044u: goto label_25e044;
            case 0x25E054u: goto label_25e054;
            case 0x25E064u: goto label_25e064;
            case 0x25E074u: goto label_25e074;
            case 0x25E084u: goto label_25e084;
            case 0x25E094u: goto label_25e094;
            case 0x25E0A4u: goto label_25e0a4;
            case 0x25E0B4u: goto label_25e0b4;
            case 0x25E0C4u: goto label_25e0c4;
            case 0x25E0D4u: goto label_25e0d4;
            case 0x25E0E4u: goto label_25e0e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25DB64u;
label_25db64:
    // 0x25db64: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25db64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25db68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25db68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25db6c: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x25DB6Cu;
    {
        const bool branch_taken_0x25db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB6Cu;
        // 0x25db70: 0x24a55a98  addiu       $a1, $a1, 0x5A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db6c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DB74u;
label_25db74:
    // 0x25db74: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25db74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25db78: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25db78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25db7c: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x25DB7Cu;
    {
        const bool branch_taken_0x25db7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB7Cu;
        // 0x25db80: 0x24a55aa0  addiu       $a1, $a1, 0x5AA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db7c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DB84u;
label_25db84:
    // 0x25db84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25db84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25db88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25db88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25db8c: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x25DB8Cu;
    {
        const bool branch_taken_0x25db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB8Cu;
        // 0x25db90: 0x24a55aa8  addiu       $a1, $a1, 0x5AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db8c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DB94u;
label_25db94:
    // 0x25db94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25db94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25db98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25db98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25db9c: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x25DB9Cu;
    {
        const bool branch_taken_0x25db9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB9Cu;
        // 0x25dba0: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db9c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DBA4u;
label_25dba4:
    // 0x25dba4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dba8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dbac: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x25DBACu;
    {
        const bool branch_taken_0x25dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBACu;
        // 0x25dbb0: 0x24a55ab8  addiu       $a1, $a1, 0x5AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbac) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DBB4u;
label_25dbb4:
    // 0x25dbb4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dbb8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dbbc: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x25DBBCu;
    {
        const bool branch_taken_0x25dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBBCu;
        // 0x25dbc0: 0x24a55ac0  addiu       $a1, $a1, 0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbbc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DBC4u;
label_25dbc4:
    // 0x25dbc4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dbc8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dbcc: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x25DBCCu;
    {
        const bool branch_taken_0x25dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBCCu;
        // 0x25dbd0: 0x24a55ac8  addiu       $a1, $a1, 0x5AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbcc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DBD4u;
label_25dbd4:
    // 0x25dbd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dbd8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dbdc: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x25DBDCu;
    {
        const bool branch_taken_0x25dbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBDCu;
        // 0x25dbe0: 0x24a55ad0  addiu       $a1, $a1, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbdc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DBE4u;
label_25dbe4:
    // 0x25dbe4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dbe8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dbec: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x25DBECu;
    {
        const bool branch_taken_0x25dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBECu;
        // 0x25dbf0: 0x24a55ad8  addiu       $a1, $a1, 0x5AD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbec) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DBF4u;
label_25dbf4:
    // 0x25dbf4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dbf8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dbfc: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x25DBFCu;
    {
        const bool branch_taken_0x25dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBFCu;
        // 0x25dc00: 0x24a55ae0  addiu       $a1, $a1, 0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbfc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC04u;
label_25dc04:
    // 0x25dc04: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc0c: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x25DC0Cu;
    {
        const bool branch_taken_0x25dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC0Cu;
        // 0x25dc10: 0x24a55ae8  addiu       $a1, $a1, 0x5AE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc0c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC14u;
label_25dc14:
    // 0x25dc14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc18: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc1c: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x25DC1Cu;
    {
        const bool branch_taken_0x25dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC1Cu;
        // 0x25dc20: 0x24a55af0  addiu       $a1, $a1, 0x5AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc1c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC24u;
label_25dc24:
    // 0x25dc24: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc2c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x25DC2Cu;
    {
        const bool branch_taken_0x25dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC2Cu;
        // 0x25dc30: 0x24a55af8  addiu       $a1, $a1, 0x5AF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc2c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC34u;
label_25dc34:
    // 0x25dc34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc3c: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x25DC3Cu;
    {
        const bool branch_taken_0x25dc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC3Cu;
        // 0x25dc40: 0x24a55b00  addiu       $a1, $a1, 0x5B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc3c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC44u;
label_25dc44:
    // 0x25dc44: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc4c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x25DC4Cu;
    {
        const bool branch_taken_0x25dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC4Cu;
        // 0x25dc50: 0x24a55b08  addiu       $a1, $a1, 0x5B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc4c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC54u;
label_25dc54:
    // 0x25dc54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc5c: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x25DC5Cu;
    {
        const bool branch_taken_0x25dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC5Cu;
        // 0x25dc60: 0x24a55b10  addiu       $a1, $a1, 0x5B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc5c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC64u;
label_25dc64:
    // 0x25dc64: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc6c: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x25DC6Cu;
    {
        const bool branch_taken_0x25dc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC6Cu;
        // 0x25dc70: 0x24a55b18  addiu       $a1, $a1, 0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc6c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC74u;
label_25dc74:
    // 0x25dc74: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc78: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc7c: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x25DC7Cu;
    {
        const bool branch_taken_0x25dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC7Cu;
        // 0x25dc80: 0x24a55b20  addiu       $a1, $a1, 0x5B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc7c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC84u;
label_25dc84:
    // 0x25dc84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc8c: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x25DC8Cu;
    {
        const bool branch_taken_0x25dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC8Cu;
        // 0x25dc90: 0x24a55b28  addiu       $a1, $a1, 0x5B28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc8c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DC94u;
label_25dc94:
    // 0x25dc94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dc94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dc98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dc9c: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x25DC9Cu;
    {
        const bool branch_taken_0x25dc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC9Cu;
        // 0x25dca0: 0x24a55b30  addiu       $a1, $a1, 0x5B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc9c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DCA4u;
label_25dca4:
    // 0x25dca4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dca8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dcac: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x25DCACu;
    {
        const bool branch_taken_0x25dcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCACu;
        // 0x25dcb0: 0x24a55b38  addiu       $a1, $a1, 0x5B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcac) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DCB4u;
label_25dcb4:
    // 0x25dcb4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dcb8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dcbc: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x25DCBCu;
    {
        const bool branch_taken_0x25dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCBCu;
        // 0x25dcc0: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcbc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DCC4u;
label_25dcc4:
    // 0x25dcc4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dcc8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dccc: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x25DCCCu;
    {
        const bool branch_taken_0x25dccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCCCu;
        // 0x25dcd0: 0x24a55b48  addiu       $a1, $a1, 0x5B48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dccc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DCD4u;
label_25dcd4:
    // 0x25dcd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dcd8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dcdc: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x25DCDCu;
    {
        const bool branch_taken_0x25dcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCDCu;
        // 0x25dce0: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcdc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DCE4u;
label_25dce4:
    // 0x25dce4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dce8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dcec: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x25DCECu;
    {
        const bool branch_taken_0x25dcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCECu;
        // 0x25dcf0: 0x24a55b58  addiu       $a1, $a1, 0x5B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcec) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DCF4u;
label_25dcf4:
    // 0x25dcf4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dcf8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dcfc: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x25DCFCu;
    {
        const bool branch_taken_0x25dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCFCu;
        // 0x25dd00: 0x24a55b60  addiu       $a1, $a1, 0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcfc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD04u;
label_25dd04:
    // 0x25dd04: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd0c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x25DD0Cu;
    {
        const bool branch_taken_0x25dd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD0Cu;
        // 0x25dd10: 0x24a55b68  addiu       $a1, $a1, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd0c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD14u;
label_25dd14:
    // 0x25dd14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd18: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd1c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x25DD1Cu;
    {
        const bool branch_taken_0x25dd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD1Cu;
        // 0x25dd20: 0x24a55b70  addiu       $a1, $a1, 0x5B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd1c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD24u;
label_25dd24:
    // 0x25dd24: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd2c: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x25DD2Cu;
    {
        const bool branch_taken_0x25dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD2Cu;
        // 0x25dd30: 0x24a55b78  addiu       $a1, $a1, 0x5B78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd2c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD34u;
label_25dd34:
    // 0x25dd34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd3c: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x25DD3Cu;
    {
        const bool branch_taken_0x25dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD3Cu;
        // 0x25dd40: 0x24a55b80  addiu       $a1, $a1, 0x5B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd3c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD44u;
label_25dd44:
    // 0x25dd44: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd4c: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x25DD4Cu;
    {
        const bool branch_taken_0x25dd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD4Cu;
        // 0x25dd50: 0x24a55b88  addiu       $a1, $a1, 0x5B88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd4c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD54u;
label_25dd54:
    // 0x25dd54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd5c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x25DD5Cu;
    {
        const bool branch_taken_0x25dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD5Cu;
        // 0x25dd60: 0x24a55b90  addiu       $a1, $a1, 0x5B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd5c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD64u;
label_25dd64:
    // 0x25dd64: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd6c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x25DD6Cu;
    {
        const bool branch_taken_0x25dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD6Cu;
        // 0x25dd70: 0x24a55b98  addiu       $a1, $a1, 0x5B98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd6c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD74u;
label_25dd74:
    // 0x25dd74: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd78: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd7c: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x25DD7Cu;
    {
        const bool branch_taken_0x25dd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD7Cu;
        // 0x25dd80: 0x24a55ba0  addiu       $a1, $a1, 0x5BA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd7c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD84u;
label_25dd84:
    // 0x25dd84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd8c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x25DD8Cu;
    {
        const bool branch_taken_0x25dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD8Cu;
        // 0x25dd90: 0x24a55ba8  addiu       $a1, $a1, 0x5BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd8c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DD94u;
label_25dd94:
    // 0x25dd94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dd98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dd9c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x25DD9Cu;
    {
        const bool branch_taken_0x25dd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD9Cu;
        // 0x25dda0: 0x24a55bb0  addiu       $a1, $a1, 0x5BB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd9c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DDA4u;
label_25dda4:
    // 0x25dda4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dda8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ddac: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x25DDACu;
    {
        const bool branch_taken_0x25ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDACu;
        // 0x25ddb0: 0x24a55bb8  addiu       $a1, $a1, 0x5BB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddac) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DDB4u;
label_25ddb4:
    // 0x25ddb4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25ddb8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ddbc: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x25DDBCu;
    {
        const bool branch_taken_0x25ddbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDBCu;
        // 0x25ddc0: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddbc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DDC4u;
label_25ddc4:
    // 0x25ddc4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25ddc8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ddcc: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x25DDCCu;
    {
        const bool branch_taken_0x25ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDCCu;
        // 0x25ddd0: 0x24a55bc8  addiu       $a1, $a1, 0x5BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddcc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DDD4u;
label_25ddd4:
    // 0x25ddd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25ddd8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dddc: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x25DDDCu;
    {
        const bool branch_taken_0x25dddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDDCu;
        // 0x25dde0: 0x24a55bd0  addiu       $a1, $a1, 0x5BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dddc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DDE4u;
label_25dde4:
    // 0x25dde4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dde8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ddec: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x25DDECu;
    {
        const bool branch_taken_0x25ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDECu;
        // 0x25ddf0: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddec) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DDF4u;
label_25ddf4:
    // 0x25ddf4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25ddf8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ddfc: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x25DDFCu;
    {
        const bool branch_taken_0x25ddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDFCu;
        // 0x25de00: 0x24a55be0  addiu       $a1, $a1, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddfc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE04u;
label_25de04:
    // 0x25de04: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de0c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x25DE0Cu;
    {
        const bool branch_taken_0x25de0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE0Cu;
        // 0x25de10: 0x24a55be8  addiu       $a1, $a1, 0x5BE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de0c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE14u;
label_25de14:
    // 0x25de14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de18: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de1c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x25DE1Cu;
    {
        const bool branch_taken_0x25de1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE1Cu;
        // 0x25de20: 0x24a55bf0  addiu       $a1, $a1, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de1c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE24u;
label_25de24:
    // 0x25de24: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de2c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x25DE2Cu;
    {
        const bool branch_taken_0x25de2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE2Cu;
        // 0x25de30: 0x24a55bf8  addiu       $a1, $a1, 0x5BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de2c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE34u;
label_25de34:
    // 0x25de34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de3c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x25DE3Cu;
    {
        const bool branch_taken_0x25de3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE3Cu;
        // 0x25de40: 0x24a55c00  addiu       $a1, $a1, 0x5C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de3c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE44u;
label_25de44:
    // 0x25de44: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de4c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x25DE4Cu;
    {
        const bool branch_taken_0x25de4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE4Cu;
        // 0x25de50: 0x24a55c08  addiu       $a1, $a1, 0x5C08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de4c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE54u;
label_25de54:
    // 0x25de54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de5c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x25DE5Cu;
    {
        const bool branch_taken_0x25de5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE5Cu;
        // 0x25de60: 0x24a55c10  addiu       $a1, $a1, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de5c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE64u;
label_25de64:
    // 0x25de64: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de6c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x25DE6Cu;
    {
        const bool branch_taken_0x25de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE6Cu;
        // 0x25de70: 0x24a55be8  addiu       $a1, $a1, 0x5BE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de6c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE74u;
label_25de74:
    // 0x25de74: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de78: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de7c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x25DE7Cu;
    {
        const bool branch_taken_0x25de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE7Cu;
        // 0x25de80: 0x24a55c18  addiu       $a1, $a1, 0x5C18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de7c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE84u;
label_25de84:
    // 0x25de84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de8c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x25DE8Cu;
    {
        const bool branch_taken_0x25de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE8Cu;
        // 0x25de90: 0x24a55c20  addiu       $a1, $a1, 0x5C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de8c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DE94u;
label_25de94:
    // 0x25de94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25de94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25de98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25de98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25de9c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x25DE9Cu;
    {
        const bool branch_taken_0x25de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE9Cu;
        // 0x25dea0: 0x24a55c28  addiu       $a1, $a1, 0x5C28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de9c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DEA4u;
label_25dea4:
    // 0x25dea4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dea8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25deac: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x25DEACu;
    {
        const bool branch_taken_0x25deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEACu;
        // 0x25deb0: 0x24a55c30  addiu       $a1, $a1, 0x5C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25deac) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DEB4u;
label_25deb4:
    // 0x25deb4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25deb8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25debc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x25DEBCu;
    {
        const bool branch_taken_0x25debc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEBCu;
        // 0x25dec0: 0x24a55c38  addiu       $a1, $a1, 0x5C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25debc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DEC4u;
label_25dec4:
    // 0x25dec4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dec8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25decc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x25DECCu;
    {
        const bool branch_taken_0x25decc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DECCu;
        // 0x25ded0: 0x24a55c40  addiu       $a1, $a1, 0x5C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25decc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DED4u;
label_25ded4:
    // 0x25ded4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25ded8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dedc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x25DEDCu;
    {
        const bool branch_taken_0x25dedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEDCu;
        // 0x25dee0: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dedc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DEE4u;
label_25dee4:
    // 0x25dee4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dee8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25deec: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x25DEECu;
    {
        const bool branch_taken_0x25deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEECu;
        // 0x25def0: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25deec) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DEF4u;
label_25def4:
    // 0x25def4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25def4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25def8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25def8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25defc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x25DEFCu;
    {
        const bool branch_taken_0x25defc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEFCu;
        // 0x25df00: 0x24a55c48  addiu       $a1, $a1, 0x5C48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25defc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF04u;
label_25df04:
    // 0x25df04: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df0c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x25DF0Cu;
    {
        const bool branch_taken_0x25df0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF0Cu;
        // 0x25df10: 0x24a55c50  addiu       $a1, $a1, 0x5C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df0c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF14u;
label_25df14:
    // 0x25df14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df18: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df1c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x25DF1Cu;
    {
        const bool branch_taken_0x25df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF1Cu;
        // 0x25df20: 0x24a55c58  addiu       $a1, $a1, 0x5C58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df1c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF24u;
label_25df24:
    // 0x25df24: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df2c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x25DF2Cu;
    {
        const bool branch_taken_0x25df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF2Cu;
        // 0x25df30: 0x24a55c60  addiu       $a1, $a1, 0x5C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df2c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF34u;
label_25df34:
    // 0x25df34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df3c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x25DF3Cu;
    {
        const bool branch_taken_0x25df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF3Cu;
        // 0x25df40: 0x24a55c68  addiu       $a1, $a1, 0x5C68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df3c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF44u;
label_25df44:
    // 0x25df44: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df4c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x25DF4Cu;
    {
        const bool branch_taken_0x25df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF4Cu;
        // 0x25df50: 0x24a55c70  addiu       $a1, $a1, 0x5C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df4c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF54u;
label_25df54:
    // 0x25df54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df5c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x25DF5Cu;
    {
        const bool branch_taken_0x25df5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF5Cu;
        // 0x25df60: 0x24a55c78  addiu       $a1, $a1, 0x5C78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df5c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF64u;
label_25df64:
    // 0x25df64: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df6c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x25DF6Cu;
    {
        const bool branch_taken_0x25df6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF6Cu;
        // 0x25df70: 0x24a55c80  addiu       $a1, $a1, 0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df6c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF74u;
label_25df74:
    // 0x25df74: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df78: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df7c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x25DF7Cu;
    {
        const bool branch_taken_0x25df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF7Cu;
        // 0x25df80: 0x24a55c88  addiu       $a1, $a1, 0x5C88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df7c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF84u;
label_25df84:
    // 0x25df84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df8c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x25DF8Cu;
    {
        const bool branch_taken_0x25df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF8Cu;
        // 0x25df90: 0x24a55c90  addiu       $a1, $a1, 0x5C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df8c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DF94u;
label_25df94:
    // 0x25df94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25df94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25df98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25df98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25df9c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x25DF9Cu;
    {
        const bool branch_taken_0x25df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF9Cu;
        // 0x25dfa0: 0x24a55c98  addiu       $a1, $a1, 0x5C98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df9c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DFA4u;
label_25dfa4:
    // 0x25dfa4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dfa8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dfac: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x25DFACu;
    {
        const bool branch_taken_0x25dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFACu;
        // 0x25dfb0: 0x24a55ca0  addiu       $a1, $a1, 0x5CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfac) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DFB4u;
label_25dfb4:
    // 0x25dfb4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dfb8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dfbc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x25DFBCu;
    {
        const bool branch_taken_0x25dfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFBCu;
        // 0x25dfc0: 0x24a55ca8  addiu       $a1, $a1, 0x5CA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfbc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DFC4u;
label_25dfc4:
    // 0x25dfc4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dfc8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dfcc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x25DFCCu;
    {
        const bool branch_taken_0x25dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFCCu;
        // 0x25dfd0: 0x24a55cb0  addiu       $a1, $a1, 0x5CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfcc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DFD4u;
label_25dfd4:
    // 0x25dfd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dfd8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dfdc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x25DFDCu;
    {
        const bool branch_taken_0x25dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFDCu;
        // 0x25dfe0: 0x24a55cb8  addiu       $a1, $a1, 0x5CB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfdc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DFE4u;
label_25dfe4:
    // 0x25dfe4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dfe8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dfec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25DFECu;
    {
        const bool branch_taken_0x25dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFECu;
        // 0x25dff0: 0x24a55cc0  addiu       $a1, $a1, 0x5CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfec) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25DFF4u;
label_25dff4:
    // 0x25dff4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25dff8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25dff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25dffc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25DFFCu;
    {
        const bool branch_taken_0x25dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFFCu;
        // 0x25e000: 0x24a55cc8  addiu       $a1, $a1, 0x5CC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dffc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E004u;
label_25e004:
    // 0x25e004: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e008: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e00c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x25E00Cu;
    {
        const bool branch_taken_0x25e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E00Cu;
        // 0x25e010: 0x24a55cd0  addiu       $a1, $a1, 0x5CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e00c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E014u;
label_25e014:
    // 0x25e014: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e018: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e01c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25E01Cu;
    {
        const bool branch_taken_0x25e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E01Cu;
        // 0x25e020: 0x24a55cd8  addiu       $a1, $a1, 0x5CD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e01c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E024u;
label_25e024:
    // 0x25e024: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e028: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e02c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25E02Cu;
    {
        const bool branch_taken_0x25e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E02Cu;
        // 0x25e030: 0x24a55ce0  addiu       $a1, $a1, 0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e02c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E034u;
label_25e034:
    // 0x25e034: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e038: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e03c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25E03Cu;
    {
        const bool branch_taken_0x25e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E03Cu;
        // 0x25e040: 0x24a55ce8  addiu       $a1, $a1, 0x5CE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e03c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E044u;
label_25e044:
    // 0x25e044: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e048: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e04c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25E04Cu;
    {
        const bool branch_taken_0x25e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E04Cu;
        // 0x25e050: 0x24a55cf0  addiu       $a1, $a1, 0x5CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e04c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E054u;
label_25e054:
    // 0x25e054: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e058: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e05c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25E05Cu;
    {
        const bool branch_taken_0x25e05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E05Cu;
        // 0x25e060: 0x24a55cf8  addiu       $a1, $a1, 0x5CF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e05c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E064u;
label_25e064:
    // 0x25e064: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e068: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e06c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25E06Cu;
    {
        const bool branch_taken_0x25e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E06Cu;
        // 0x25e070: 0x24a55d00  addiu       $a1, $a1, 0x5D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e06c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E074u;
label_25e074:
    // 0x25e074: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e078: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e07c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25E07Cu;
    {
        const bool branch_taken_0x25e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E07Cu;
        // 0x25e080: 0x24a55d08  addiu       $a1, $a1, 0x5D08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e07c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E084u;
label_25e084:
    // 0x25e084: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e088: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e08c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25E08Cu;
    {
        const bool branch_taken_0x25e08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E08Cu;
        // 0x25e090: 0x24a55d10  addiu       $a1, $a1, 0x5D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e08c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E094u;
label_25e094:
    // 0x25e094: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e098: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e09c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25E09Cu;
    {
        const bool branch_taken_0x25e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E09Cu;
        // 0x25e0a0: 0x24a55d18  addiu       $a1, $a1, 0x5D18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e09c) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E0A4u;
label_25e0a4:
    // 0x25e0a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e0a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e0ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25E0ACu;
    {
        const bool branch_taken_0x25e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0ACu;
        // 0x25e0b0: 0x24a55d20  addiu       $a1, $a1, 0x5D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0ac) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E0B4u;
label_25e0b4:
    // 0x25e0b4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e0b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e0bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25E0BCu;
    {
        const bool branch_taken_0x25e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0BCu;
        // 0x25e0c0: 0x24a55d28  addiu       $a1, $a1, 0x5D28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0bc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E0C4u;
label_25e0c4:
    // 0x25e0c4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e0c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e0cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25E0CCu;
    {
        const bool branch_taken_0x25e0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0CCu;
        // 0x25e0d0: 0x24a55d30  addiu       $a1, $a1, 0x5D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0cc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E0D4u;
label_25e0d4:
    // 0x25e0d4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e0d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e0dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25E0DCu;
    {
        const bool branch_taken_0x25e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0DCu;
        // 0x25e0e0: 0x24a55d38  addiu       $a1, $a1, 0x5D38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0dc) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E0E4u;
label_25e0e4:
    // 0x25e0e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x25e0e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e0ec: 0x24a55d40  addiu       $a1, $a1, 0x5D40
    ctx->pc = 0x25e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
label_25e0f0:
    // 0x25e0f0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x25e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x25e0f4: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x25E0F4u;
    SET_GPR_U32(ctx, 31, 0x25E0FCu);
    ctx->pc = 0x25E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0F4u;
    // 0x25e0f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x25E0F4u, 0x25E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0FCu;
label_25e0fc:
    // 0x25e0fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25e100u;
}
