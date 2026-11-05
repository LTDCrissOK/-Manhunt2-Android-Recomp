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

// Function: sub_003D595C
// Address: 0x3d595c - 0x3d5a98
void sub_003D595C_0x3d595c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D595C_0x3d595c");
#endif

    switch (ctx->pc) {
        case 0x3d595cu: goto label_3d595c;
        case 0x3d5960u: goto label_3d5960;
        case 0x3d5964u: goto label_3d5964;
        case 0x3d5968u: goto label_3d5968;
        case 0x3d596cu: goto label_3d596c;
        case 0x3d5970u: goto label_3d5970;
        case 0x3d5974u: goto label_3d5974;
        case 0x3d5978u: goto label_3d5978;
        case 0x3d597cu: goto label_3d597c;
        case 0x3d5980u: goto label_3d5980;
        case 0x3d5984u: goto label_3d5984;
        case 0x3d5988u: goto label_3d5988;
        case 0x3d598cu: goto label_3d598c;
        case 0x3d5990u: goto label_3d5990;
        case 0x3d5994u: goto label_3d5994;
        case 0x3d5998u: goto label_3d5998;
        case 0x3d599cu: goto label_3d599c;
        case 0x3d59a0u: goto label_3d59a0;
        case 0x3d59a4u: goto label_3d59a4;
        case 0x3d59a8u: goto label_3d59a8;
        case 0x3d59acu: goto label_3d59ac;
        case 0x3d59b0u: goto label_3d59b0;
        case 0x3d59b4u: goto label_3d59b4;
        case 0x3d59b8u: goto label_3d59b8;
        case 0x3d59bcu: goto label_3d59bc;
        case 0x3d59c0u: goto label_3d59c0;
        case 0x3d59c4u: goto label_3d59c4;
        case 0x3d59c8u: goto label_3d59c8;
        case 0x3d59ccu: goto label_3d59cc;
        case 0x3d59d0u: goto label_3d59d0;
        case 0x3d59d4u: goto label_3d59d4;
        case 0x3d59d8u: goto label_3d59d8;
        case 0x3d59dcu: goto label_3d59dc;
        case 0x3d59e0u: goto label_3d59e0;
        case 0x3d59e4u: goto label_3d59e4;
        case 0x3d59e8u: goto label_3d59e8;
        case 0x3d59ecu: goto label_3d59ec;
        case 0x3d59f0u: goto label_3d59f0;
        case 0x3d59f4u: goto label_3d59f4;
        case 0x3d59f8u: goto label_3d59f8;
        case 0x3d59fcu: goto label_3d59fc;
        case 0x3d5a00u: goto label_3d5a00;
        case 0x3d5a04u: goto label_3d5a04;
        case 0x3d5a08u: goto label_3d5a08;
        case 0x3d5a0cu: goto label_3d5a0c;
        case 0x3d5a10u: goto label_3d5a10;
        case 0x3d5a14u: goto label_3d5a14;
        case 0x3d5a18u: goto label_3d5a18;
        case 0x3d5a1cu: goto label_3d5a1c;
        case 0x3d5a20u: goto label_3d5a20;
        case 0x3d5a24u: goto label_3d5a24;
        case 0x3d5a28u: goto label_3d5a28;
        case 0x3d5a2cu: goto label_3d5a2c;
        case 0x3d5a30u: goto label_3d5a30;
        case 0x3d5a34u: goto label_3d5a34;
        case 0x3d5a38u: goto label_3d5a38;
        case 0x3d5a3cu: goto label_3d5a3c;
        case 0x3d5a40u: goto label_3d5a40;
        case 0x3d5a44u: goto label_3d5a44;
        case 0x3d5a48u: goto label_3d5a48;
        case 0x3d5a4cu: goto label_3d5a4c;
        case 0x3d5a50u: goto label_3d5a50;
        case 0x3d5a54u: goto label_3d5a54;
        case 0x3d5a58u: goto label_3d5a58;
        case 0x3d5a5cu: goto label_3d5a5c;
        case 0x3d5a60u: goto label_3d5a60;
        case 0x3d5a64u: goto label_3d5a64;
        case 0x3d5a68u: goto label_3d5a68;
        case 0x3d5a6cu: goto label_3d5a6c;
        case 0x3d5a70u: goto label_3d5a70;
        case 0x3d5a74u: goto label_3d5a74;
        case 0x3d5a78u: goto label_3d5a78;
        case 0x3d5a7cu: goto label_3d5a7c;
        case 0x3d5a80u: goto label_3d5a80;
        case 0x3d5a84u: goto label_3d5a84;
        case 0x3d5a88u: goto label_3d5a88;
        case 0x3d5a8cu: goto label_3d5a8c;
        case 0x3d5a90u: goto label_3d5a90;
        case 0x3d5a94u: goto label_3d5a94;
        default: break;
    }

    ctx->pc = 0x3d595cu;

label_3d595c:
    // 0x3d595c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d595cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d5960:
    // 0x3d5960: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x3d5960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_3d5964:
    // 0x3d5964: 0xc0f5b8a  jal         func_3D6E28
label_3d5968:
    if (ctx->pc == 0x3D5968u) {
        ctx->pc = 0x3D5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5964u;
        // 0x3d5968: 0x2504595c  addiu       $a0, $t0, 0x595C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 22876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D596Cu;
        goto label_3d596c;
    }
    ctx->pc = 0x3D5964u;
    SET_GPR_U32(ctx, 31, 0x3D596Cu);
    ctx->pc = 0x3D5968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5964u;
    // 0x3d5968: 0x2504595c  addiu       $a0, $t0, 0x595C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 22876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6E28u, 0x3D5964u, 0x3D596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D596Cu;
label_3d596c:
    // 0x3d596c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3d596cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5970:
    // 0x3d5970: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3d5974:
    if (ctx->pc == 0x3D5974u) {
        ctx->pc = 0x3D5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5970u;
        // 0x3d5974: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5978u;
        goto label_3d5978;
    }
    ctx->pc = 0x3D5970u;
    {
        const bool branch_taken_0x3d5970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5970u;
        // 0x3d5974: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5970) {
            ctx->pc = 0x3D5984u;
            goto label_3d5984;
        }
    }
    ctx->pc = 0x3D5978u;
label_3d5978:
    // 0x3d5978: 0xc0f52ce  jal         func_3D4B38
label_3d597c:
    if (ctx->pc == 0x3D597Cu) {
        ctx->pc = 0x3D5980u;
        goto label_3d5980;
    }
    ctx->pc = 0x3D5978u;
    SET_GPR_U32(ctx, 31, 0x3D5980u);
    ctx->pc = 0x3D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B38u, 0x3D5978u, 0x3D5980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5980u;
label_3d5980:
    // 0x3d5980: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x3d5980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_3d5984:
    // 0x3d5984: 0x27c20700  addiu       $v0, $fp, 0x700
    ctx->pc = 0x3d5984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
label_3d5988:
    // 0x3d5988: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3d5988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d598c:
    // 0x3d598c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3d598cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3d5990:
    // 0x3d5990: 0x8fc205ec  lw          $v0, 0x5EC($fp)
    ctx->pc = 0x3d5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_3d5994:
    // 0x3d5994: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x3d5994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_3d5998:
    // 0x3d5998: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x3d5998u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3d599c:
    // 0x3d599c: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x3d599cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_3d59a0:
    // 0x3d59a0: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x3d59a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_3d59a4:
    // 0x3d59a4: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x3d59a4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_3d59a8:
    // 0x3d59a8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3d59a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_3d59ac:
    // 0x3d59ac: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x3d59acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_3d59b0:
    // 0x3d59b0: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x3d59b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_3d59b4:
    // 0x3d59b4: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x3d59b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_3d59b8:
    // 0x3d59b8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3d59bc:
    // 0x3d59bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3d59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3d59c0:
    // 0x3d59c0: 0x0  nop
    ctx->pc = 0x3d59c0u;
    // NOP
label_3d59c4:
    // 0x3d59c4: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_3d59c8:
    if (ctx->pc == 0x3D59C8u) {
        ctx->pc = 0x3D59CCu;
        goto label_3d59cc;
    }
    ctx->pc = 0x3D59C4u;
    {
        const bool branch_taken_0x3d59c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d59c4) {
            ctx->pc = 0x3D5998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5998;
        }
    }
    ctx->pc = 0x3D59CCu;
label_3d59cc:
    // 0x3d59cc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3d59ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_3d59d0:
    // 0x3d59d0: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x3d59d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_3d59d4:
    // 0x3d59d4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3d59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_3d59d8:
    // 0x3d59d8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x3d59d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_3d59dc:
    // 0x3d59dc: 0x27c20690  addiu       $v0, $fp, 0x690
    ctx->pc = 0x3d59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_3d59e0:
    // 0x3d59e0: 0x8fc405e8  lw          $a0, 0x5E8($fp)
    ctx->pc = 0x3d59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_3d59e4:
    // 0x3d59e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d59e8:
    // 0x3d59e8: 0x8fc605ec  lw          $a2, 0x5EC($fp)
    ctx->pc = 0x3d59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_3d59ec:
    // 0x3d59ec: 0x8fc705f0  lw          $a3, 0x5F0($fp)
    ctx->pc = 0x3d59ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1520)));
label_3d59f0:
    // 0x3d59f0: 0xc0f54e8  jal         func_3D53A0
label_3d59f4:
    if (ctx->pc == 0x3D59F4u) {
        ctx->pc = 0x3D59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59F0u;
        // 0x3d59f4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D59F8u;
        goto label_3d59f8;
    }
    ctx->pc = 0x3D59F0u;
    SET_GPR_U32(ctx, 31, 0x3D59F8u);
    ctx->pc = 0x3D59F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D59F0u;
    // 0x3d59f4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D53A0u, 0x3D59F0u, 0x3D59F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D59F8u;
label_3d59f8:
    // 0x3d59f8: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x3d59f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_3d59fc:
    // 0x3d59fc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3d59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
label_3d5a00:
    // 0x3d5a00: 0x8fc805ec  lw          $t0, 0x5EC($fp)
    ctx->pc = 0x3d5a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_3d5a04:
    // 0x3d5a04: 0x24655a28  addiu       $a1, $v1, 0x5A28
    ctx->pc = 0x3d5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23080));
label_3d5a08:
    // 0x3d5a08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3d5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3d5a0c:
    // 0x3d5a0c: 0x27c40690  addiu       $a0, $fp, 0x690
    ctx->pc = 0x3d5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_3d5a10:
    // 0x3d5a10: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x3d5a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d5a14:
    // 0x3d5a14: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_3d5a18:
    // 0x3d5a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d5a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a1c:
    // 0x3d5a1c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3d5a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3d5a20:
    // 0x3d5a20: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d5a24:
    if (ctx->pc == 0x3D5A24u) {
        ctx->pc = 0x3D5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A20u;
        // 0x3d5a24: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A28u;
        goto label_3d5a28;
    }
    ctx->pc = 0x3D5A20u;
    {
        const bool branch_taken_0x3d5a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A20u;
        // 0x3d5a24: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5a20) {
            ctx->pc = 0x3D5A30u;
            goto label_3d5a30;
        }
    }
    ctx->pc = 0x3D5A28u;
label_3d5a28:
    // 0x3d5a28: 0x800008  jr          $a0
label_3d5a2c:
    if (ctx->pc == 0x3D5A2Cu) {
        ctx->pc = 0x3D5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A28u;
        // 0x3d5a2c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A30u;
        goto label_3d5a30;
    }
    ctx->pc = 0x3D5A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x3D5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A28u;
        // 0x3d5a2c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5A28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D5A30u;
label_3d5a30:
    // 0x3d5a30: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3d5a30u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a34:
    // 0x3d5a34: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x3d5a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
label_3d5a38:
    // 0x3d5a38: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x3d5a38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_3d5a3c:
    // 0x3d5a3c: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x3d5a3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_3d5a40:
    // 0x3d5a40: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x3d5a40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_3d5a44:
    // 0x3d5a44: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x3d5a44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_3d5a48:
    // 0x3d5a48: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x3d5a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_3d5a4c:
    // 0x3d5a4c: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x3d5a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_3d5a50:
    // 0x3d5a50: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x3d5a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_3d5a54:
    // 0x3d5a54: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x3d5a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_3d5a58:
    // 0x3d5a58: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x3d5a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_3d5a5c:
    // 0x3d5a5c: 0xc7bf06f8  lwc1        $f31, 0x6F8($sp)
    ctx->pc = 0x3d5a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_3d5a60:
    // 0x3d5a60: 0xc7be06f0  lwc1        $f30, 0x6F0($sp)
    ctx->pc = 0x3d5a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_3d5a64:
    // 0x3d5a64: 0xc7bd06e8  lwc1        $f29, 0x6E8($sp)
    ctx->pc = 0x3d5a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3d5a68:
    // 0x3d5a68: 0xc7bc06e0  lwc1        $f28, 0x6E0($sp)
    ctx->pc = 0x3d5a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3d5a6c:
    // 0x3d5a6c: 0xc7bb06d8  lwc1        $f27, 0x6D8($sp)
    ctx->pc = 0x3d5a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3d5a70:
    // 0x3d5a70: 0xc7ba06d0  lwc1        $f26, 0x6D0($sp)
    ctx->pc = 0x3d5a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3d5a74:
    // 0x3d5a74: 0xc7b906c8  lwc1        $f25, 0x6C8($sp)
    ctx->pc = 0x3d5a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3d5a78:
    // 0x3d5a78: 0xc7b806c0  lwc1        $f24, 0x6C0($sp)
    ctx->pc = 0x3d5a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3d5a7c:
    // 0x3d5a7c: 0xc7b706b8  lwc1        $f23, 0x6B8($sp)
    ctx->pc = 0x3d5a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3d5a80:
    // 0x3d5a80: 0xc7b606b0  lwc1        $f22, 0x6B0($sp)
    ctx->pc = 0x3d5a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d5a84:
    // 0x3d5a84: 0xc7b506a8  lwc1        $f21, 0x6A8($sp)
    ctx->pc = 0x3d5a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d5a88:
    // 0x3d5a88: 0xc7b406a0  lwc1        $f20, 0x6A0($sp)
    ctx->pc = 0x3d5a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d5a8c:
    // 0x3d5a8c: 0x3e00008  jr          $ra
label_3d5a90:
    if (ctx->pc == 0x3D5A90u) {
        ctx->pc = 0x3D5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A8Cu;
        // 0x3d5a90: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A94u;
        goto label_3d5a94;
    }
    ctx->pc = 0x3D5A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A8Cu;
        // 0x3d5a90: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5A94u;
label_3d5a94:
    // 0x3d5a94: 0x0  nop
    ctx->pc = 0x3d5a94u;
    // NOP
    ctx->pc = 0x3d5a98u;
}
