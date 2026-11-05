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

// Function: sub_003DF1F8
// Address: 0x3df1f8 - 0x3df2c0
void sub_003DF1F8_0x3df1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF1F8_0x3df1f8");
#endif

    switch (ctx->pc) {
        case 0x3df228u: goto label_3df228;
        case 0x3df234u: goto label_3df234;
        case 0x3df240u: goto label_3df240;
        case 0x3df24cu: goto label_3df24c;
        case 0x3df258u: goto label_3df258;
        case 0x3df264u: goto label_3df264;
        case 0x3df270u: goto label_3df270;
        case 0x3df27cu: goto label_3df27c;
        case 0x3df290u: goto label_3df290;
        default: break;
    }

    ctx->pc = 0x3df1f8u;

    // 0x3df1f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3df1fc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3df1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3df200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3df200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3df204: 0x244217b8  addiu       $v0, $v0, 0x17B8
    ctx->pc = 0x3df204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6072));
    // 0x3df208: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3df208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3df20c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3df20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3df214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3df214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df218: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x3df218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x3df21c: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x3df21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x3df220: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF220u;
    SET_GPR_U32(ctx, 31, 0x3DF228u);
    ctx->pc = 0x3DF224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF220u;
    // 0x3df224: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF220u, 0x3DF228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF228u;
label_3df228:
    // 0x3df228: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x3df228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3df22c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF22Cu;
    SET_GPR_U32(ctx, 31, 0x3DF234u);
    ctx->pc = 0x3DF230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF22Cu;
    // 0x3df230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF22Cu, 0x3DF234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF234u;
label_3df234:
    // 0x3df234: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3df234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x3df238: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF238u;
    SET_GPR_U32(ctx, 31, 0x3DF240u);
    ctx->pc = 0x3DF23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF238u;
    // 0x3df23c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF238u, 0x3DF240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF240u;
label_3df240:
    // 0x3df240: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3df240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3df244: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF244u;
    SET_GPR_U32(ctx, 31, 0x3DF24Cu);
    ctx->pc = 0x3DF248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF244u;
    // 0x3df248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF244u, 0x3DF24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF24Cu;
label_3df24c:
    // 0x3df24c: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x3df24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x3df250: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF250u;
    SET_GPR_U32(ctx, 31, 0x3DF258u);
    ctx->pc = 0x3DF254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF250u;
    // 0x3df254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF250u, 0x3DF258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF258u;
label_3df258:
    // 0x3df258: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x3df258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3df25c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF25Cu;
    SET_GPR_U32(ctx, 31, 0x3DF264u);
    ctx->pc = 0x3DF260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF25Cu;
    // 0x3df260: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF25Cu, 0x3DF264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF264u;
label_3df264:
    // 0x3df264: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x3df264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x3df268: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF268u;
    SET_GPR_U32(ctx, 31, 0x3DF270u);
    ctx->pc = 0x3DF26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF268u;
    // 0x3df26c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF268u, 0x3DF270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF270u;
label_3df270:
    // 0x3df270: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3df270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3df274: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF274u;
    SET_GPR_U32(ctx, 31, 0x3DF27Cu);
    ctx->pc = 0x3DF278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF274u;
    // 0x3df278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF274u, 0x3DF27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF27Cu;
label_3df27c:
    // 0x3df27c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3df27cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3df280: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF280u;
    {
        const bool branch_taken_0x3df280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF280u;
        // 0x3df284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df280) {
            ctx->pc = 0x3DF294u;
            goto label_3df294;
        }
    }
    ctx->pc = 0x3DF288u;
    // 0x3df288: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DF288u;
    SET_GPR_U32(ctx, 31, 0x3DF290u);
    ctx->pc = 0x3DF28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF288u;
    // 0x3df28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DF288u, 0x3DF290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF290u;
label_3df290:
    // 0x3df290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3df290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3df294:
    // 0x3df294: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3df294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3df298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3df298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df29c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF29Cu;
        // 0x3df2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF2A4u;
    // 0x3df2a4: 0x0  nop
    ctx->pc = 0x3df2a4u;
    // NOP
    // 0x3df2a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3df2ac: 0x0  nop
    ctx->pc = 0x3df2acu;
    // NOP
    // 0x3df2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3df2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df2b4: 0x0  nop
    ctx->pc = 0x3df2b4u;
    // NOP
    // 0x3df2b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3df2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df2bc: 0x0  nop
    ctx->pc = 0x3df2bcu;
    // NOP
    ctx->pc = 0x3df2c0u;
}
