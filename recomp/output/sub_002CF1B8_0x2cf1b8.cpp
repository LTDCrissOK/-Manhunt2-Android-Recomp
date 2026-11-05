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

// Function: sub_002CF1B8
// Address: 0x2cf1b8 - 0x2cf2c8
void sub_002CF1B8_0x2cf1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF1B8_0x2cf1b8");
#endif

    switch (ctx->pc) {
        case 0x2cf1d0u: goto label_2cf1d0;
        case 0x2cf1dcu: goto label_2cf1dc;
        case 0x2cf238u: goto label_2cf238;
        case 0x2cf258u: goto label_2cf258;
        case 0x2cf2b0u: goto label_2cf2b0;
        default: break;
    }

    ctx->pc = 0x2cf1b8u;

    // 0x2cf1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf1c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf1c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1c8: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CF1C8u;
    SET_GPR_U32(ctx, 31, 0x2CF1D0u);
    ctx->pc = 0x2CF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1C8u;
    // 0x2cf1cc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CF1C8u, 0x2CF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1D0u;
label_2cf1d0:
    // 0x2cf1d0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2cf1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2cf1d4: 0xc0b3afe  jal         func_2CEBF8
    ctx->pc = 0x2CF1D4u;
    SET_GPR_U32(ctx, 31, 0x2CF1DCu);
    ctx->pc = 0x2CF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1D4u;
    // 0x2cf1d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBF8u, 0x2CF1D4u, 0x2CF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1DCu;
label_2cf1dc:
    // 0x2cf1dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2cf1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf1e0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2cf1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf1e4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x2cf1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x2cf1e8: 0x34e7b430  ori         $a3, $a3, 0xB430
    ctx->pc = 0x2cf1e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)46128);
    // 0x2cf1ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cf1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u)); // MMIO: 0x1000b410
    // 0x2cf1f0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2cf1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf1f4: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x2cf1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x2cf1f8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2cf1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf1fc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2cf1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2cf200: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x2cf200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x2cf204: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2cf204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf208: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2cf208u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B430u)); // MMIO: 0x1000b430
    // 0x2cf20c: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x2cf20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x2cf210: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2cf210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2cf214: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cf214u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u)); // MMIO: 0x1000b420
    // 0x2cf218: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2cf218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2cf21c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cf21cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u)); // MMIO: 0x1000b400
    // 0x2cf220: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2cf220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2cf224: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cf224u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x2cf228: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2cf228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2cf22c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CF22Cu;
    {
        const bool branch_taken_0x2cf22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF22Cu;
        // 0x2cf230: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf22c) {
            ctx->pc = 0x2CF250u;
            goto label_2cf250;
        }
    }
    ctx->pc = 0x2CF234u;
    // 0x2cf234: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2cf234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_2cf238:
    // 0x2cf238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cf238u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x2cf23c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2cf23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2cf240: 0x0  nop
    ctx->pc = 0x2cf240u;
    // NOP
    // 0x2cf244: 0x0  nop
    ctx->pc = 0x2cf244u;
    // NOP
    // 0x2cf248: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CF248u;
    {
        const bool branch_taken_0x2cf248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf248) {
            ctx->pc = 0x2CF238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf238;
        }
    }
    ctx->pc = 0x2CF250u;
label_2cf250:
    // 0x2cf250: 0xc0b3ae2  jal         func_2CEB88
    ctx->pc = 0x2CF250u;
    SET_GPR_U32(ctx, 31, 0x2CF258u);
    ctx->pc = 0x2CF254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF250u;
    // 0x2cf254: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEB88u, 0x2CF250u, 0x2CF258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF258u;
label_2cf258:
    // 0x2cf258: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2cf258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf25c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x2cf25cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf260: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x2cf260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x2cf264: 0x3508b020  ori         $t0, $t0, 0xB020
    ctx->pc = 0x2cf264u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)45088);
    // 0x2cf268: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cf268u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u)); // MMIO: 0x1000b010
    // 0x2cf26c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2cf26cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf270: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x2cf270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x2cf274: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2cf274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf278: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2cf278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x2cf27c: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x2cf27cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
    // 0x2cf280: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2cf280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf284: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2cf284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2cf288: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2cf288u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x2cf28c: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x2cf28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x2cf290: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2cf290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2cf294: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2cf294u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u)); // MMIO: 0x1000b000
    // 0x2cf298: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2cf298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2cf29c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2cf29cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x2cf2a0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2cf2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2cf2a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cf2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x2cf2a8: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CF2A8u;
    SET_GPR_U32(ctx, 31, 0x2CF2B0u);
    ctx->pc = 0x2CF2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF2A8u;
    // 0x2cf2ac: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CF2A8u, 0x2CF2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2B0u;
label_2cf2b0:
    // 0x2cf2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf2b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2BCu;
        // 0x2cf2c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF2C4u;
    // 0x2cf2c4: 0x0  nop
    ctx->pc = 0x2cf2c4u;
    // NOP
    ctx->pc = 0x2cf2c8u;
}
